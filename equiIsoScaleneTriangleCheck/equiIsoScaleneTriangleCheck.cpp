#include <iostream>
using namespace std;

int main()
{
    // User enters side lengths of a triangle (a,b,c)
    // Program should determine and display whether that triangle is Equilateral, Isosceles or Scalene

    float a, b, c;

    cout << "a, b, c: ";
    cin >> a >> b >> c;

    if (a == b && b == c) 
    {
        cout << "\nThis is an Equilateral Triangle\n";
    }
    else
    {
        if (a != b && a != c && b != c) 
        {
            cout << "\nThis is an Scalene Triangle\n";
        }
        else
        {
            cout << "\nThis is an Isosceles Triangle\n";
        }
    }
}
