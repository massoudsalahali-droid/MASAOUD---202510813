#include <iostream>
#include <cmath>
using namespace std;

// User-defined function 
int square(int x) {
    return x * x;
}

int main() {
    cout << "Built-in sqrt: " << sqrt(16) << endl; // built-in
    cout << "User-defined square: " << square(4) << endl; // user-defined
    return 0;  
}