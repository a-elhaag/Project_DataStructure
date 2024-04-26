#pragma once
#include <iostream>
#include "Functions.h"
#include "Stack.h"

using namespace std;

class Tower_of_Hanoi
{
private:
    int NumberOfDisks;
    int NumberOfMoves;
    Stack start;
    Stack end;
    Stack other;

public:
    Tower_of_Hanoi(int NumberOfDisks);
    void StackFill(Stack& start, Stack& end, Stack& other);
    void Start_Solve(int NumberOfDisks, Stack& start, Stack& end, Stack& other, int& NumberOfMoves);
    void move(Stack& s1, Stack& s2) { s2.push(s1.pop()); }
    void DisplayAll();

};
