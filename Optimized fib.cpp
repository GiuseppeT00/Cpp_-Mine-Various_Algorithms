#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int fib(int N) {
    if (N < 2) return N;
    static int V[31] = { 0 };
    if(V[N] == 0) V[N] = fib(N - 1) + fib(N - 2);
    return V[N];
}

int main() {
    int N;
    cin >> N;

    cout << fib(N) << endl;

    return 0;
}