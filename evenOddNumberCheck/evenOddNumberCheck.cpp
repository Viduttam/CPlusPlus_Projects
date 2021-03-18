#include <iostream>
using namespace std;

int main()
{
    // User enters an integer number
    // Program writes out if the number is even or odd

    int number;
    cout << "Please type a number: ";
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << "\n" << number << " is an Even number";
    }
    else
    {
        cout << number << " is an Odd number" << endl;
    }
}
