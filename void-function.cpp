#include <iostream>
#include <string>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl; // no return, but takes a parameter
}

int main() {
    greet("Masaoud");
    return 0;
}