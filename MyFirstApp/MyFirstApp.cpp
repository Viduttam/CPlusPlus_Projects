// MyFirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "I am Vengeance!"<< endl;

    float annualSalary;
    cout << "Please enter your annual salary" << endl;
    cin >> annualSalary;

    float monthlySalary = annualSalary / 12.0;
    cout << "Your monthly salary is " << monthlySalary << endl;

    cout << "In 10 years, you will earn " << annualSalary * 10.0;

    char character = 'v';

    system("pause>0");
}

