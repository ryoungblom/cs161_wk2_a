/***************************
Name: Reuben Youngblom
Date: October 5th 2016
Description: Assignment 2a, averages
***************************/

#include <iostream>
using namespace std;

int main()  //main function
{

    double a, b, c, d, e;  //creates variables to store user-inputted numbers
    
    cout << "please enter five numbers, pressing enter after each:" << endl;  //promts user to enter numbers
    
    cin >> a;  //takes input as numbers
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    
    cout << "thanks! i will compute the average" << endl;
    
    double average = ((a+b+c+d+e)/5); //calculates the average. Is a double so it can return a decimal if need be
    
    cout << "your average is " << average << "." << endl;   //prints the average

    return 0;
}

