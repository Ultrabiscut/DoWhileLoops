#include <iostream>
using namespace std;

/*

We use a DO...WHILE loop when we don't know or can't determine how many times the loop 
must iterate, but it must execute AT LEAST ONCE

Syntax:

		do
		{
			statement(s)
		}while (expression); //don't forget the semi-colon!


*/


int main()
{
	//declare variables
	int iGuess;
	int iSecret = 4;
	char cResp;

	//prompt the user for their guess

	//if the iGuess == iSecret
	//	display "You win!"
	//else
	//	display "You lose..."

	do
	{
		cout << "Enter a number between 1 and 10: ";
		cin >> iGuess;

		if (iGuess == iSecret)
			cout << "You win!" << endl;
		else
			cout << "You lose..." << endl;

		do
		{
			//ask them if they want to play again
			cout << "Play again? (y/n): ";
			cin >> cResp;
			cResp == toupper(cResp);
		} while ((cResp != 'y') && (cResp != 'n'));

	} while (cResp == 'y');


	return 0;
}