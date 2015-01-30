#include "mastermind.h"

class game {
	public:
		void playGame2();
};

//runs mastermind game until allowed tries is reached
void game::playGame2() {
	//Welcome Splash Screen
    cout << "Welcome to MASTERMIND2\nDeveloped by Andrew and Zach\n\nWould you like to play a game?\nPress [ENTER] to continue.\n";
    cin.ignore();
    
    //The Rules are explained
    cout << "In this version of Mastermind, roles have been switched.\nYou will come up with the code and the computer will guess it.\nTo play the game, please think of a 4 digit code.\n Each digit should be a number between 1 and 6.\n(example: (4, 1, 4, 6)\n\n";
    
    //initiate game objects
    mastermind game;
    
    //Check with user if guess is correct
    for (int i = 0; i < 10; i++) {
	    cout << "\nIs your code " << game.agentGuess().getCode() << "?\n"; 
	    game.setResponse();
	    
	}
}
