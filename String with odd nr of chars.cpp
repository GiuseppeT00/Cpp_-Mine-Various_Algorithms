#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string generateTheString(int n) {
    string s;
    if (n % 2 == 0) {
        for (int i = 0; i < n - 1; i++) s += 'a';
        return s + 'b';
    }
    else {
        for (int i = 0; i < n; i++) s += 'a';
        return s;
    }
}

int main() {
    int n;
    cin >> n;
    cout << generateTheString(n) << endl;

    return 0;
}