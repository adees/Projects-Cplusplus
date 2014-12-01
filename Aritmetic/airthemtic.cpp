#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main()
{
	float A, B, C, D;
	cout << "Enter The First Number\n";
	cin >> A;

	cout << "Enter The Second Number\n";
	cin >> B;

	cout << "Enter The Third Number To Calculate Percentage\n";
	cin >> C;

	cout << "Enter The Number That You Want to Take Percentage Of Third Number From\n";
	cin >> D;
    
	cout << "The result of Addition is:  " << A + B << endl;
	cout << "The result of Subtraction is:  " << A - B << endl;
	cout << "The result of Division is:  " << A / B << endl;
	cout << "The result of Multiplication is:  " << A * B << endl;
	cout << "The Square of first number is:  " << A * A << endl;
	cout << "The Square of Second number is:  " << B * B << endl;
	cout << "The Square of First number Multiplied by Second number is:  " << A * A * B * B << endl;
	cout << "The Percentage of Third number are:  " << (C * 100) / D; cout << "%" << endl;
	cout << "The radius of circle is: " << 2 * (3.14) * A << endl;
	_getch();

}
