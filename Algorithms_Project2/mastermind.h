#include <stdlib.h>
#include <iostream>
#include <vector>
#include "code.h"
#include "response.h"

using namespace std;

//Zach's code

class mastermind {
	public:
		mastermind();
    	code agentGuess();
		void playGame2();
		bool consistentWithPreviousGuesses(const code guess);
    
	private:
		code secretCode; //the player's secret code
		code guess; //the current guess
		
		vector<code> S; //list of possible solutions
		
		vector<code> guesses; //list of all previous guesses
		vector<response> responses; //list of all previous responses
};

//initializes secret code length and range of 10
mastermind::mastermind() {
    
}

//runs mastermind game until allowed tries is reached
void mastermind::playGame2() {
	//Welcome Splash Screen
    cout << "Welcome to MASTERMIND\nDeveloped by Andrew and Zach\n\nWould you like to play a game?\nPress [ENTER] to continue.\n";
    cin.ignore();
    
    //The Rules are explained
    cout << "In this version of Mastermind, roles have been switched.\nYou will come up with the code and the computer will guess it.\nTo play the game, please think of a 4 digit code with each digit being a number between 1 and 6.\n(example: (4, 1, 4, 6)\n";
    
	code secretCode;
	secretCode.getCode();
    
    
    
	
	
}
