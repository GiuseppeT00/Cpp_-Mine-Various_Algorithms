#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int min = floor(nums.size() / 3);
    vector<int> V;
    unordered_map<int, int> M;
    for (int i = 0; i < nums.size(); i++) {
        if (M.find(nums[i]) != M.end())
            M[nums[i]]++;
        M.insert({ nums[i],1 });
        if (M[nums[i]] > min) {
            V.push_back(nums[i]);
            M[nums[i]] = INT32_MIN;
        }
    }
    return V;
}

int main() {
    vector<int> v = { 3,2,3 };
    vector<int> res = majorityElement(v);
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";

    return 0;
}