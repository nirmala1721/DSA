#include<iostream>
using namespace std;

int power(int x, int n) {
    if(n == 0) return 1;         // base case
    return x * power(x, n - 1);  // recursive call
}

int main() {
    int x, n;
    cout << "Enter base number (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    int result = power(x, n);  // call the function
    cout << x << " raised to the power " << n << " is: " << result << endl;

    return 0;
}
