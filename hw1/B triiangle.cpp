#include <iostream>

using std::cout;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    if (a < b + c && b < a + c && c < a + b) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}