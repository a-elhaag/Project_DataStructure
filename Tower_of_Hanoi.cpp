#include "Tower_of_Hanoi.h"


Tower_of_Hanoi::Tower_of_Hanoi(int num) : start(num, "start"), end(num, "end"), other(num, "other") {
    NumberOfDisks = num;
    NumberOfMoves = 0;
    StackFill(start, end, other);
    DisplayAll();
	cout << endl;
    Start_Solve(NumberOfDisks, start, end, other, NumberOfMoves);
}


void Tower_of_Hanoi::Start_Solve(int NumberOfDisks, Stack& start, Stack& end, Stack& other, int& NumberOfMoves) {
    if (NumberOfDisks == 1) {
        move(start, end);
        NumberOfMoves++;
        Functions::print("\nMove disk from tower " + start.getName() + " to tower " + end.getName());
		cout << endl;
		DisplayAll();
		cout << endl;
        return;
    }
    Start_Solve(NumberOfDisks - 1, start, other, end, NumberOfMoves);
    move(start, end);
    NumberOfMoves++;
    Functions::print("\nMove disk from tower " + start.getName() + " to tower " + end.getName());
	cout << endl;
    DisplayAll();
	cout << endl;
    Start_Solve(NumberOfDisks - 1, other, end, start, NumberOfMoves);
}

void Tower_of_Hanoi::DisplayAll() {
    Functions::print_success("\nfirst row state now is :\n");
    start.display();
    Functions::print_success("\nSecound row state now is :\n");
    other.display();
    Functions::print_success("\nThird row state now is :\n");
    end.display();
    Functions::print_success("\nNumber of moves now equal: " + to_string(NumberOfMoves));
}

void Tower_of_Hanoi::StackFill(Stack& start, Stack& end, Stack& other) {
    for (int i = NumberOfDisks; i > 0; i--) {
        start.push(i);
    }
}
