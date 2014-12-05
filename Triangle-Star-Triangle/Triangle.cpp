#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a = 1, b = 1;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= a; b++)
		{
			cout << "*";
		}
		cout << endl;
	}
	_getch();
}
