/*
Program that calculates the slope of line that connects two line 
segments. Mainly x1,y1,x2,y2.
The slope of formuale is mentioned. 

Program by Syed Adees Gillani.
*/

#include<iostream>
#include<conio.h>
//library of the function
using namespace std;

int main()
{
	float a, b, c, d, e, f;
	// float is used to give the integers a decimal value. 
	cout << "Welcome to my program\n\n";
	cout << "Program to calculate the slope of line connecting two points\n\n";
    begin:
    /* Below program is labeled through begin: . Begin is the name assigned to
       the below program. through this name the goto statement recognizes where
       to go when the goto statement is used. */
	cout << "Enter the value of x1\n";
	cin >> a;
	cout << "Enter the value of x2\n";
	cin >> b;
	cout << "Enter the value of y1\n";
	cin >> c;
	cout << "Enter the value of y2\n";
	cin >> d;
	e = d - c;
	f = b - a;
	cout << "The value of the slope for the points ( " << a << "," << c << " ) and ( "
		<< b << "," << d << " ) is " << e / f << endl << endl;
		// values are mentioned in cout and arthematic operation is performed.
	if (e / f >= 1) { cout << "The resultant slope is positive\n"; }
	if (e / f < 0) { cout << "The resultant slope is negative\n"; }
	if (e / f== 0) { cout << "The resultant slope is zero"; }
	if (e == 0 && f == 0) { cout << "The resultant slope is undefined\n\n"; system("pause"); system("cls"); goto begin; }
	// system cls is used to clear screen after the line or program is executed.
	cout << endl;
	goto begin;
	/*
	   program returns to the beginning where the begin statement was assigned and 
	   executes the program from that place again and again for a limited or infinite number of time.
	   */
	_getch();
	return 0;
}
