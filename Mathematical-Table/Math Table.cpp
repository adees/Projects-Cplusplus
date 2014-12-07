/* 
Mathamatical Table.cpp
Purpose : Calculates the Table of the desired number.
@author : Syed Adees.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a,i,c,b;
	
	// Assigned variables used in program.
	
	cout <<"Enter any Number :\n";
	cin>>i;
	cout <<"Enter the Times number should multiply :\n";
	cin>>c;
	cout <<"Enter the Times number should begin multiply :\n";
	cin>>b;
	
	// Required integers. 3 integers to be provided by the User.
	
	for (a=b; a<=c ; a++)
    cout<<i<<"*"<<a<<" = "<<i*a<<endl;  
    
    /*
    Used the 'For' Loop .
    Assigned Certain values to variables.
    a is equal to b and begins with the value assigned to b.
    a is less then or equal to c and the value of c is variable. 
    a++ shows increment in a by 1 meaning a=a+1.
    cout << "Display the value of i" << "The value of a" << "=" << Multiply i by a and display the ans.
    */
    
	getch();
}
