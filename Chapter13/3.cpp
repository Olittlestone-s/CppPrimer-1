#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
unordered_map<int, int> memo; // <func_id: cost>
int dfs(int func_id, const vector<int> &frame_sizes, const vector<vector<int>> &calls, unordered_set<int> &visited){
    if (visited.count(func_id))
        return -1;
    if (memo.count(func_id))
        return memo[func_id];
    if (func_id > frame_sizes.size())
        return 0;
    int current_frame_size = frame_sizes[func_id];
    int max_sub_frame_size = 0;
    visited.insert(func_id);
    for (int call_id : calls[func_id])
    {
        int cost = dfs(call_id, frame_sizes, calls, visited);
        if (cost == -1)
            return -1;
        if (cost > max_sub_frame_size){
            max_sub_frame_size = cost;
        }
    }
    return memo[func_id] = current_frame_size + max_sub_frame_size;
}

int main(){
    int n;
    cin >> n;
    vector<int> call_cnts(n, 0);
    for (int i = 0; i < n; ++i){
        cin >> call_cnts[i];
    }
    vector<int> frame_sizes(n + 1, 0);
    vector<vector<int>> calls(n + 1, vector<int>());
    for (int i = 0; i < n; ++i){
        int func_id;
        cin >> func_id;
        cin >> frame_sizes[func_id];
        for (int j = 0; j < call_cnts[i]; ++j){
            int call;
            cin >> call;
            calls[func_id].push_back(call);
        }
    }
    unordered_set<int> visited;
    int res = dfs(1, frame_sizes, calls, visited);
    switch(res){
        case -1:
            cout << "R" << endl;
            return 0;
        case -2:
            cout << "NA" << endl;
            return 0;
        default:
            cout << res << endl;
    }
    return 0;
}

/*
5 2 3 1 0 0
1 20 2 3
2 30 3 4 5
3 50 4
4 60
5 80

3 1 1 1
1 20 2
2 20 3
3 20 1
*/