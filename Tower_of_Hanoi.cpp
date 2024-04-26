#include "Tower_of_Hanoi.h"

Tower_of_Hanoi::Tower_of_Hanoi(int num) : start(num, "start"), end(num, "end"), other(num, "other") {
    NumberOfDisks = num;
    NumberOfMoves = 0;
    StackFill(start, end, other);
    DisplayAll();
    Start_Solve(NumberOfDisks, start, end, other, NumberOfMoves);
    DisplayAll();
}


void Tower_of_Hanoi::Start_Solve(int NumberOfDisks, Stack& start, Stack& end, Stack& other, int& NumberOfMoves) {
    if (NumberOfDisks == 1) {
        move(start, end);
        NumberOfMoves++;
        cout << "Move disk from tower " << start.getName() << " to tower " << end.getName() << endl;
        return;
    }
    Start_Solve(NumberOfDisks - 1, start, other, end, NumberOfMoves);
    move(start, end);
    NumberOfMoves++;
    cout << "Move disk from tower " << start.getName() << " to tower " << end.getName() << endl;
    Start_Solve(NumberOfDisks - 1, other, end, start, NumberOfMoves);
}

void Tower_of_Hanoi::DisplayAll() {
    cout << "first row state now is : \n";
    start.display();
    cout << "Secound row state now is : \n";
    other.display();
    cout << "Third row state now is : \n";
    end.display();
    cout << "Number of moves now equal: " << NumberOfMoves << endl;
}

void Tower_of_Hanoi::StackFill(Stack& start, Stack& end, Stack& other) {
    for (int i = NumberOfDisks; i > 0; i--) {
        start.push(i);
    }
}



