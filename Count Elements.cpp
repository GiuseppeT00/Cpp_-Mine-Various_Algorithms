#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

int countElements(vector<int>& arr) {
    unordered_set<int> S;
    unordered_set<int> ::iterator itr;
    int n = 0;
    for (int k : arr) S.insert(k);
    for (itr = S.begin(); itr != S.end(); itr++)
        if (S.find(*(itr)+1) != S.end())
            n++;
    return n;
}

int main() {
    vector<int> v = { 1,3,2,3,5,0 };
    cout << countElements(v);

    return 0;
}