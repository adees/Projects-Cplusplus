#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int a = 1, b = 1, c;
	cout << "Enter any number : \n";
	cin >> c;

	for (a = 1; a <= c; a++) 
	// a strarts from 1 and is less then the number you entered. a++ shows the increment ( a=a+1 ).
	b = b*a; 
	// b is equal to 1 x the value of a ( a=a+1 || a=a+2 || a=a+3 ) 
	  {
		cout << "The factorial is : " << b << endl;
	   }
	_getch(); 
	return 0;
}
