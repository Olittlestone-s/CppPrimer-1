/*
// print each line in text up to the first blank line
for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    for(auto& ch : *it)
        ch = toupper(ch);
for (auto it = text.cbegin(); it != text.cend(); ++it)
    cout << *it << endl;
*/
