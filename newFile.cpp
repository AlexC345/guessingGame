//Guessing Game C++
//This is a game where you guess a number and the program tells you whether your guessed number is too high or too low. This repeats until you guess the random number, and then prints out your # of guesses.
//Alex Cui 9/2/2025
//RULES: No global variables, No Strings, Include iostream not stdio (use new/delete instead of malloc/free)
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	//makes the playGame variable loop
	char playGame = 'y';
	while (playGame == 'y'){
		//makes a random chosen number from 0 to 100
		srand(static_cast<unsigned>(time(0)));
		int chosenNumber = rand() % 101;
		//makes a # of guesses variable
		int guesses = 1;
		cout << "Guessing game." << "\n"; //the title of the game
		int number; //gets player input of first guess
		cout << "Please enter a guessed number: ";
		cin >> number;

		while (number != chosenNumber){
			//compares guesses number to chosen number
			if (number > chosenNumber){
				cout << "Too high!" << "\n";
			}
			else if (number < chosenNumber){
				cout << "Too low!" << "\n";
			}
			//asks player for new guessed number and increase guesses by 1
			cout << "Please enter a guessed number: ";
			cin >> number;	
			guesses += 1;
			//if you guess the correct number, it breaks out of the while loop
		}
		//prints when player won and prints # of guesses
		cout << "Congratulations! You guessed the number!" << "\n";
		cout << "Guesses: " << guesses << "\n";
		//asks player if they want to play again
		cout << "Play again? (y/n): ";
		cin >> playGame;
	}
	//if they input y, the while loop starts again
	return 0;
}

