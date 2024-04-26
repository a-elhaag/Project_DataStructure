#include "Functions.h"

void Functions::print(string text) { // Change the color of the text to blue
    for (char c : text) {
        cout << "\033[1m\033[34;3m" << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(30)); // Delay between each character
    }
    cout << "\033[0m";
}

void Functions::print_error(string text) { // Change the color of the text to red
    for (char c : text) {
        cout << "\033[1m\033[31;3m" << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(30)); // Delay between each character
    }
    cout << "\033[0m";
}

void Functions::print_success(string text) { // Change the color of the text to yellow
    for (char c : text) {
        cout << "\033[1m\033[33;3m" << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(30)); // Delay between each character
    }
    cout << "\033[0m";
}

int Functions::check_int() {
    int num;
    while (!(cin >> num) || cin.peek() != '\n') {
        cin.clear();
        cin.ignore();
        Functions::print_error("Invalid input. Please enter an integer: ");
    }
    return num;
}
