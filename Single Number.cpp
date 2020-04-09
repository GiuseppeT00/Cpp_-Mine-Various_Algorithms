#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> M;
    for (int i : nums)
    {
        if (M.find(i) != M.end()) M[i]++;
        M.insert({ i,1 });
    }
    for (int i : nums)
        if (M[i] == 1) return i;
}

int main() {
    vector<int> v = { 4,1,2,1,2 };
    cout << singleNumber(v);

    return 0;
}