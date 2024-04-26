#pragma once
#include<iostream>
#include<string>
#include<limits>
#include <windows.h>
#include <thread>
#include <chrono>



using namespace std;

class Functions {
public:
    static void print(string text);
    static void print_error(string text);
    static void print_success(string text);
    static int check_int();
};

