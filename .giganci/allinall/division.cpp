#include <iostream> // access to functions with input and output operations
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    using std::cout;
    int questions = 10;
    int correct = 8;
    double score = double(correct) / questions;
    score *= 100;

    cout << score << '%';
}