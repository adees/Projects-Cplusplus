#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a = 1, b = 1;
	// Assigns certain values to variables that will be used further in program.
	for (a = 1; a <= 5; a++)
	// Assigns values used in 'For' loop. A begins with one and is equal or less then 5.
	// a++ shows increment in value of a . 1 value is added in each step.
	{
		for (b = 1; b <= a; b++)
	// Assigned value begins with 1 to b.
// Value of b will always be less then or equal to a in each step. Meaning in each step value of b will be as 1,2,3,4,5.
		{
			cout << "*";
		}
		cout << endl;
	}
	_getch();
}
