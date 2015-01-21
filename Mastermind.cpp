#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

class setup {
public:
//	setup(const int, const int, const int, const int, const int, const int);
	void setNumRange(const int newRange){range = newRange;}
	void setGuesses(const int newGuesses){guesses = newGuesses;}
	void set_1(const int newDigit){digit_1 = newDigit;}
	void set_2(const int newDigit){digit_2 = newDigit;}
	void set_3(const int newDigit){digit_3 = newDigit;}
	void set_4(const int newDigit){digit_4 = newDigit;}
	int getRange() const{return range;}
	int getGuesses() const{return guesses;}
	int get_1() const{return digit_1;}
	int get_2() const{return digit_2;}
	int get_3() const{return digit_3;}
	int get_4() const{return digit_4;}

private:
	int digit_1;
	int digit_2;
	int digit_3;
	int digit_4;
	int range;
	int guesses;
};

/*   ------- The code below is used for custom games. Currently they are unused and therefore commented out. -------
class custom_setup_digit {
public:
	custom_setup_digit();
	void set(const int newDigit){digit = newDigit;}
	int get() const{return digit;}

private:
	int digit;
};

class custom_setup_range {
public:
	custom_setup_range();
	void set(const int newRange){range = newRange;}
	int get() const{return range;}

private:
	int range;
};

class custom_setup_guesses {
public:
	custom_setup_guesses();
	void set(const int newGuesses){guesses = newGuesses;}
	int get() const{return guesses;}

private:
	int guesses;
};
*/

class guess {
public:
	void set_1(const int newGuess){guess_1 = newGuess;}
	void set_2(const int newGuess){guess_2 = newGuess;}
	void set_3(const int newGuess){guess_3 = newGuess;}
	void set_4(const int newGuess){guess_4 = newGuess;}
	int get_1() const{return guess_1;}
	int get_2() const{return guess_2;}
	int get_3() const{return guess_3;}
	int get_4() const{return guess_4;}

private:
	int guess_1;
	int guess_2;
	int guess_3;
	int guess_4;
};

/*   ------- The code below is used for custom games. Currently they are unused and therefore commented out. -------
class custom_guess {
public:
	custom_guess();
	void set(const int newGuess){guess = newGuess;}
	int get() const{return guess;}

private:
	int guess;
};
*/

int main(){
	//Welcome Splash Screen
	cout << "Welcome to MASTERMIND\nby Andrew and Zach\n\n\nWould you like to play a game?\nPress [ENTER] to continue.\n";
	cin.ignore();
	
	//Variable setup
	int range = 6;
	int guesses = 10;
	int i = 0;
	string player;
	string playagain;
	setup game;								// ---------------------------------------------------------------------------------- FIX THIS LINE ---------------------------------------------------------------------------------
	srand((unsigned)time(0));
	guess first;
	guess second;
	guess third;
	guess fourth;
	guess fifth;
	guess sixth;
	guess seventh;
	guess eighth;
	guess ninth;
	guess tenth;
	int guess;
	
	//Asking for player setup input
	cout << "What is your name?\n";
	cin >> player;
	
	//Game with repeat function
	do{
	i++;
	cout << "test" << i << "\n";
	
	game.setNumRange(range);
	game.setGuesses(guesses);
	game.set_1((rand() % range) + 1);
	game.set_2((rand() % range) + 1);
	game.set_3((rand() % range) + 1);
	game.set_4((rand() % range) + 1);
	
	//Testing output
	cout << game.get_1() << "\n" << game.get_2() << "\n" << game.get_3() << "\n" << game.get_4() << "\n\n";
	
	//First guess
	cout << "What is your first guess?\n(Number 1 through" << range << ".\n";
	
	cout << "First number:";
	cin >> guess;
	first.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	first.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	first.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	first.set_4(guess);
	
	//Check guess against random
	
	//Second guess
	cout << "What is your second guess?\n";
	
	cout << "First number:";
	cin >> guess;
	second.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	second.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	second.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	second.set_4(guess);
	
	//Third guess
	cout << "What is your third guess?\n";
	
	cout << "First number:";
	cin >> guess;
	third.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	third.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	third.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	third.set_4(guess);
	
	//Fourth guess
	cout << "What is your fourth guess?\n";
	
	cout << "First number:";
	cin >> guess;
	fourth.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	fourth.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	fourth.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	fourth.set_4(guess);
	
	//Fifth guess
	cout << "What is your fourth guess?\n";
	
	cout << "First number:";
	cin >> guess;
	fifth.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	fifth.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	fifth.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	fifth.set_4(guess);
	
	//Sixth guess
	cout << "What is your sixth guess?\n";
	
	cout << "First number:";
	cin >> guess;
	sixth.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	sixth.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	sixth.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	sixth.set_4(guess);
	
	//Seventh guess
	cout << "What is your seventh guess?\n";
	
	cout << "First number:";
	cin >> guess;
	seventh.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	seventh.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	seventh.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	seventh.set_4(guess);
	
	//Eighth guess
	cout << "What is your eighth guess?\n";
	
	cout << "First number:";
	cin >> guess;
	eighth.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	eighth.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	eighth.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	eighth.set_4(guess);
	
	//Ninth guess
	cout << "What is your ninth guess?\n";
	
	cout << "First number:";
	cin >> guess;
	ninth.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	fourth.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	ninth.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	ninth.set_4(guess);
	
	//Tenth guess
	cout << "What is your tenth guess?\n";
	
	cout << "First number:";
	cin >> guess;
	tenth.set_1(guess);
	
	cout << "Second number:";
	cin >> guess;
	tenth.set_2(guess);
	
	cout << "Third number:";
	cin >> guess;
	tenth.set_3(guess);
	
	cout << "Fourth number:";
	cin >> guess;
	tenth.set_4(guess);
	
	//Play again function
	cout << "Would you like to play again? (y/n)\n";
	cin >> playagain;
	
	//Prints an error if playagain is an invalid value.
	if(playagain != "y" && playagain != "Y" && playagain != "n" && playagain != "N"){
		cout << "ERROR: invalid input recieved. Exiting program.\n\n";
	}
	
	} while(playagain == "y" || playagain == "Y");
	
	
	//exit program
	cout << "Thank you for playing!\n";
	
	clock_t start_time, current_time;
	
	start_time = clock();
	do {
		current_time = clock();
	} while((current_time - start_time) / CLOCKS_PER_SEC < 2);
	
	cout << "\ndone";
	return 0;
}
