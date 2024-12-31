#include<iostream>
using namespace std;

int fib(int n) {
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive calculation
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    // Print the Fibonacci sequence up to n terms
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}
