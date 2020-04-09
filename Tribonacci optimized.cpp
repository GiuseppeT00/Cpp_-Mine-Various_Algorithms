#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n < 3) return 1;
    static vector<int> V(38,0);
    if (V[n] == 0) V[n] = tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
    return V[n];
}

int main() {
    int N;
    cin >> N;
    cout << tribonacci(N) << endl;
    return 0;
}