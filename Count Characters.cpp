#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int countCharacters(vector<string>& words, string chars) {
    unordered_map<char, int> M, temp;
    int cnt = 0;
    for (char c : chars) M[c]++;
 
    for (string str : words)
    {
        temp = M;
        bool found = true;
        for (char c : str)
        {
            if (temp.find(c) != temp.end()) {
                if (temp[c] <= 0) {
                    found = false;
                    break;
                }
                temp[c]--;
            }
            else {
                found = false;
                break;
            }
        }       
        if(found) cnt += str.size();
    }
    return cnt;
}

int main() {
    vector<string> V = { "hello","world","leetcode" };
    for (string s : V) cout << s << " ; ";
    cout << "\nGiven: welldonehoneyr" << endl;
    cout << countCharacters(V, "welldonehoneyr") << endl;

    return 0;
}