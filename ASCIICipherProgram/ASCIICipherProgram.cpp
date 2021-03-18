#include <iostream>
using namespace std;

int main()
{
	char c1, c2, c3, c4, c5;
	cout << "Enter 5 letters: "<< endl;

	cin >> c1 >> c2 >> c3 >> c4 >> c5;

	cout << "\nASCII message: " << int(c1) << " " << int(c2)
		<< " "<< int(c3) << " " << int(c4) << " " << int(c5) << endl;

	cout << "\nThe +1 shifted cipher is " << char(int(c1)+1) << char(int(c2)+1) << char(int(c3)+1) << char(int(c4)+1) << char(int(c5)+1) << endl;

	//system("pause>0");
}

