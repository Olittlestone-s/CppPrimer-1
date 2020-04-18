
#include <map>
#include <iostream>
#include <vector>
#include <set>
#include <memory>
#include <fstream>
#include <sstream>

using namespace std;

class QueryResult;

void normalize(string &str)
{
    for (auto iter = str.begin(); iter != str.end();)
    {
        if (ispunct(*iter))
        {
            iter = str.erase(iter);
        }
        else
        {
            ++iter;
        }
    }
}

class TextQuery
{
public:
    friend ostream &operator<<(ostream &out, const TextQuery &tq);
    TextQuery(istream &in = cin);
    QueryResult query(const string &word) const;

private:
    shared_ptr<vector<string>> lines_ptr;
    shared_ptr<map<string, multiset<int>>> word_map_ptr;
};

ostream &operator<<(ostream &out, const TextQuery &tq)
{
    for (string &line : (*(tq.lines_ptr.get())))
    {
        out << line << endl;
    }
    for (auto &item : (*(tq.word_map_ptr.get())))
    {
        out << item.first
            << "：{";
        if (item.second.size())
        {
            for (int line_no : item.second)
            {
                out << line_no << ", ";
            }
            out << "\b\b}" << endl;
        }
    }
    return out;
}

TextQuery::TextQuery(istream &in) : lines_ptr(make_shared<vector<string>>()),
                                    word_map_ptr(make_shared<map<string, multiset<int>>>())
{
    size_t line_no = 0;
    string line_buf;
    while (getline(in, line_buf))
    {
        ++line_no;
        lines_ptr->push_back(line_buf);
        istringstream line_in(line_buf);
        string word;
        while (line_in >> word)
        {
            normalize(word);
            (*word_map_ptr)[word].insert(line_no);
        }
    }
}

struct QueryResult
{
    size_t count;
    string target;
    shared_ptr<vector<int>> line_nums_ptr;
    shared_ptr<vector<string>> lines;

    QueryResult();
};

ostream &operator<<(ostream &out, const QueryResult &result)
{
    cout << result.target << "：出现" << result.count << "次" << endl;
    for (int line_no : (*(result.line_nums_ptr)))
    {
        cout << "\t（" << line_no << "）："
             << ((*result.lines.get())[line_no - 1])
             << endl;
    }
    cout << "\b ";
    return out;
}

QueryResult::QueryResult() : count(0), line_nums_ptr(nullptr), lines(nullptr) {}

QueryResult TextQuery::query(const string &word) const
{
    QueryResult result;
    if ((*word_map_ptr).find(word) != word_map_ptr->end())
    {
        result.count = (*word_map_ptr)[word].size();
        set<int> unique_line_nums(
            (*word_map_ptr)[word].begin(),
            (*word_map_ptr)[word].end());
        result.line_nums_ptr = make_shared<vector<int>>(
            unique_line_nums.begin(),
            unique_line_nums.end());
        result.target = word;
        result.lines = lines_ptr;
    }
    else
    {
        result.line_nums_ptr = make_shared<vector<int>>();
    }
    return result;
}

int main()
{
    TextQuery textQuery(cin);
    cout << textQuery << endl;
    string word;
    while (cin >> word)
    {
        QueryResult result = textQuery.query(word);
        cout << result << endl;
    }
    cout << "end" << endl;
    return 0;
}