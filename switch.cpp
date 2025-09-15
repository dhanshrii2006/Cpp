#include <iostream> // For std::cin and std::cout

int main() {
    int a = 10, b = 5;
    char op;
    std::cin >> op; // Take operator input from user
    switch(op) {
        case '+': std::cout << a+b; break;
        case '-': std::cout << a-b; break;
        case '*': std::cout << a*b; break;
        case '/': std::cout << a/b; break;
        default: std::cout << "Invalid";
    }
    return 0;
}
