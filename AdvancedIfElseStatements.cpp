// AdvancedIfElseStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //User should enter the side lengths of a triangle
    //Program should determine what kind of triangle it is: equilateral, isosceles or scalene
    
    float a, b, c;
    cout << "Enter the length of the sides of your triangle in the following format(please, obmit the commas): a, b, c: ";
    cin >> a >> b >> c;
    
    if(a==b && b==c){
        cout << "Equiateral Triangle";
    }
    else {
        if (a != b && a != c && b != c) {
            cout << "Scalene Triangle";
        }
        else {
            cout << "Isosceles Triangle";
        }
    }
   

    cout << "\nThanks!";




    system("pause>0");
}

