#include "Functions.h"

void Functions::print(string text) { // Change the color of the text to blue
    cout << "\033[1m\033[34;3m" << text;
    cout << "\033[0m";
}

void Functions::print_error(string text) { // Change the color of the text to red
    cout << "\033[1m\033[31;3m" << text;
    cout << "\033[0m";
}

void Functions::print_success(string text) { // Change the color of the text to green
    cout << "\033[1m\033[32;3m" << text;
    cout << "\033[0m";
}

int Functions::check_int() {
    int x;
    while (!(cin >> x)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        print_error("Invalid input. Please enter an integer: ");
    }
    return x;
}