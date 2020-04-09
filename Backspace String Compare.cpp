#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_set>
using namespace std;

void compute(stack<char>& S, string& s) {
    for (char c : s) {
        if (c != '#') S.push(c);
        else if (!S.empty()) S.pop();
    }
    s.clear();
    while (!S.empty()) {
        s += S.top();
        S.pop();
    }
}

bool backspaceCompare(string S, string T) {
    if (S.size() == 0 && T.size() == 0) return true;
    stack<char> Stack;
    compute(Stack, S);
    compute(Stack, T);  
    if (S == T) return true;
    else return false;
}

int main() {
    //string S = "ab#c", T = "ad#c"; //true
    //string S = "ab##", T = "c#d#"; //true
    //string S = "a##c", T = "#a#c"; //true
    string S = "a#c", T = "b"; //false

    if (backspaceCompare(S, T)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}