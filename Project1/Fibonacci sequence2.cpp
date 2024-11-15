#include <iostream>
using namespace std;

static long long fib(int n) {
    if (n <= 1) return n;  // Base case for fib(0)
    return fib(n - 1) + fib(n - 2);  // Recursive step for n >= 2
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    }
    else {
        cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    }
    return 0;
}