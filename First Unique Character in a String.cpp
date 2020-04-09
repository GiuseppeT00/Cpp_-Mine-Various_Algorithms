#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    if (s.size() == 1) return 0;

    unordered_map<char, pair<int, int>> M;
    for (int i = 0; i < s.size(); i++) {
        if (M.find(s[i]) != M.end()) M[s[i]].second++;
        M.insert({ s[i], pair<int,int>(i,1) });
    }
    for (int i = 0; i < s.size(); i++) if (M[s[i]].second == 1) return i;

    return -1;
}

int main() {
    string s;
    cin >> s;
    cout << firstUniqChar(s) << endl;

    return 0;
}