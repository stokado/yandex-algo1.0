#include <iostream>
#include <string>

int main() {
    short troom, tcond;
    std::cin >> troom >> tcond;
    std::string mode;
    std::cin >> mode;

    if (mode == "heat") {
        if (troom >= tcond) {
            std::cout << troom;
        } else {
            std::cout << tcond;
        }
    } else if (mode == "freeze") {
        if (troom <= tcond) {
            std::cout << troom;
        } else {
            std::cout << tcond;
        }
    } else if (mode == "auto") {
        std::cout << tcond; 
    } else {
        std::cout << troom;
    }

}