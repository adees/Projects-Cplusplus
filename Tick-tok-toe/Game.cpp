/*
Tick tok toe
A game by Syed adees.
Buit version 1.0
*/

#include<iostream>
#include<conio.h>
// using libraries
using namespace std;

class tictac
{
protected:
// declaration
	char x[3][3];
	// declaring values for a 2 dimentional array to be used in the program.
	int a, b;
public:
	tictac(){
		for (int i = 0; i <= 2; i++){
			for (int j = 0; j <= 2; j++){
				x[i][j] = 0;
				// using for loop 
			}
		}
	}
	void player1(){
// assigning the second main function
		do{

			char c;
			int a;

			system("cls");
// so that the program clears the screen before going further
			diagram();

			cout << "\n\n\t\t\tplayer 1's turn" << endl;
			cout << "\t\t\tRow:";
			cin >> a;
			if (a <= 2 && a >= 0){
				cout << "\t\t\tcolumn:";
				cin >> b;
				if (b <= 2 && b >= 0){
					if (x[a][b] == '*' || x[a][b] == '0'){
						cout << "\n\t\t\tRow and Column have already been selected" << endl;
						int c;
						c = _getch();
						player1();
						// using for loop and assigning certain words to be writen in the program when such a statement is considered true. and if not considered true then moe tthe next statement
					}
					else {
						x[a][b] = '*';
					}
					int k = check();
					if (k == 0){
						x[a][b] = '*';
						cout << "\n\n\t\t\tTreat: Player 1 wins !!";
						cout << "\n\t\t\t"; system("pause"); system("cls");
						c = _getch();
						break;
					}
					else if (k == 1){
						x[a][b] = '0';
						cout << "\n\n\t\t\tTreat: Player 2 wins !!";
						cout << "\n\t\t\t"; system("pause"); system("cls");
						c = _getch();
						break;
					}
					else{
						player2();
						break;
					}
				}
				cout << "\n\t\t\tPlz Enter the Valid Column" << endl;
				int t;
				t = _getch();
				player1();
			}
			cout << "\n\t\t\tPlz Enter the Valid Row" << endl;
			int t;
			t = _getch();
			player1();
		} while (a = -1);

	}
	void player2(){
		do{
			char s;
			system("cls");
			diagram();
			int a;
			cout << "\n\n\t\t\tPlayer 2's turn" << endl;
			cout << "\t\t\tRow:";
			cin >> a;
			if (a <= 2 && a >= 0){
				cout << "\t\t\tColumn:";
				cin >> b;
				if (b <= 2 && b >= 0){
					if (x[a][b] == '*' || x[a][b] == '0'){
						cout << "\n\t\t\tRow and Column have already been select." << endl;
						int c;
						c = _getch();
						player2();
					}
					else {
						x[a][b] = '0';
					}
					int q = check();
					if (q == 0){
						x[a][b] = '*';
						cout << "\n\n\t\t\tTreat Player 1 wins !!";
						cout << "\n\t\t\t"; system("pause"); system("cls");
						s = _getch();
						break;
					}
					else if (q == 1){
						x[a][b] = '0';
						cout << "\n\n\t\t\tTreat Player 2 wins !!";
						cout << "\n\t\t\t"; system("pause"); system("cls");
						s = _getch();
						break;
					}
					else{
						player1();
					}
				}
				cout << "\n\t\t\tPlz Enter the Valid Column" << endl;
				int u;
				u = _getch();
				player2();
			}
			cout << "\n\t\t\tPlz Enter the Valid Row" << endl;
			int u;
			u = _getch();
			player2();
		} while (a = -1);

	}
	int check(){

		if ((x[0][0] == '0' && x[1][0] == '0' && x[2][0] == '0') || (x[0][1] == '0' && x[1][1] == '0' && x[2][1] == '0') || (x[0][2] == '0' && x[1][2] == '0' && x[2][2] == '0') || (x[0][0] == '0' && x[0][1] == '0' && x[0][2] == '0') || (x[1][0] == '0' && x[1][1] == '0' && x[1][2] == '0') || (x[2][0] == '0' && x[2][1] == '0' && x[2][2] == '0') || (x[0][0] == '0' && x[1][1] == '0' && x[2][2] == '0') || (x[0][2] == '0' && x[1][1] == '0' && x[2][0] == '0')){

			return 1;
		}
		else if ((x[0][0] == '*' && x[1][0] == '*' && x[2][0] == '*') || (x[0][1] == '*' && x[1][1] == '*' && x[2][1] == '*') || (x[0][2] == '*' && x[1][2] == '*' && x[2][2] == '*') || (x[0][0] == '*' && x[0][1] == '*' && x[0][2] == '*') || (x[1][0] == '*' && x[1][1] == '*' && x[1][2] == '*') || (x[2][0] == '*' && x[2][1] == '*' && x[2][2] == '*') || (x[0][0] == '*' && x[1][1] == '*' && x[2][2] == '*') || (x[0][2] == '*' && x[1][1] == '*' && x[2][0] == '*')){

			return 0;
		}
		else
			cout << "  ";
	}
	void diagram(){
		cout << "\t\t\tWelCome To My Game." << endl;
		cout << "\t\t\t  Tick Tack Toe.\n";
		cout << "\n\n\t\t\t     0       1       2" << endl;
		cout << "\t\t\t  +-------+-------+-------+\n";
		cout << "\t\t\t0 |   " << x[0][0] << "   |   " << x[0][1] << "   |   " << x[0][2] << "   |     " << endl;
		cout << "\t\t\t  +-------+-------+-------+\n";
		cout << "\t\t\t1 |   " << x[1][0] << "   |   " << x[1][1] << "   |   " << x[1][2] << "   |     " << endl;
		cout << "\t\t\t  +-------+-------+-------+\n";
		cout << "\t\t\t2 |   " << x[2][0] << "   |   " << x[2][1] << "   |   " << x[2][2] << "   |     " << endl;
		cout << "\t\t\t  +-------+-------+-------+\n";
		cout << "\n";
	}
};
int main(){

	system("cls");
	tictac user1;
	user1.player1();
	_getch();
	return 0;
}
