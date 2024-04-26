#include <iostream>
#include "Functions.h"
#include "Stack.h"
#include "Tower_of_Hanoi.h"
#include<limits>
#include <windows.h>
#include <conio.h> // Add this header for _getch() function

using namespace std;


int main() {

	cout << "\033[32m   /\\		   /\\		   /\\   \n\033[0m"; // Green
	cout << "\033[33m  /  \\		  /  \\		  /  \\  \n\033[0m"; // Yellow
	cout << "\033[94m /____\\		 /____\\		 /____\\  \n\033[0m"; // Bright Blue
	cout << "\033[31m |~~~~|		 |~~~~|		 |~~~~| \n\033[0m"; // Red
	cout << "\033[31m |~~~~|		 |~~~~|		 |~~~~| \n\033[0m";
	cout << "\033[31m |~~~~|		 |~~~~|		 |~~~~| \n\033[0m"; // Red
	cout << "\033[96m ~~~~~~		 ~~~~~~		 ~~~~~~ \n\033[0m"; // Cyan
	Functions::print("Welcome to the Tower of Hanoi\n\n\n");

	Functions::print("press any key to continue...");
	_getch();
    system("cls");


    bool continuePlaying = true;

    while (continuePlaying) {
        Functions::print("Enter the number of disks: ");
        int num = Functions::check_int();
        Tower_of_Hanoi game(num);
		cout << endl;
        Functions::print("press any key to continue...");
        _getch(); 
        system("cls");

        Functions::print("\n\nPress N to exit:\n\n");
        system("cls");
        char choice = _getch();

        if (choice == 'N' || choice == 'n') {
            continuePlaying = false;
        }
    }
	return 0;
}
