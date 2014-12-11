/*
Program that calculates factorial using function and returns a
specified value. 

Created by syed adees
*/

#include<iostream>
#include<conio.h>
using namespace std;
int fact (int n); // function used as an extension
int main() // main function
{
	int number,factorial = 1; // store or assign values to integers or words
	cout << "Enter a number to calculate it's factorial  :  ";
	cin >> number; // stores value in number
	factorial = fact ( number); // calculates the factorial with the help of function
	cout << "The factorial of " << number << " is = " << factorial << "\n";
	_getch(); return 0;
}
/*
funtion which assigns specific value and performs main
operations. Executed before the result
*/
int fact(int n)
{
	int c, result = 1;
	for (c = 1; c <= n; c++)
		result = result * c;
	return result;
}
