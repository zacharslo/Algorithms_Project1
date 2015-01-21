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
	cout << "Welcome to MASTERMIND\nBy Andrew and Zach\n\n\nWould you like to play a game?\nPress [ENTER] to continue.\n";
	cin.ignore();
	
	//Variable setup
	int range = 6;
	int guesses = 10;
	int i = 0;
	string player;
	string playagain;
	setup game;
	srand((unsigned)time(0));
	guess pguess;
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
	int digit;
	bool reply;
	
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
	
	//Guesses with saving function
	cout << "What is your first guess?\n(Number 1 through " << range << ").\n";
	for(int i = 0; i < guesses; i++){
		if (i == 1){
			cout << "\nWhat is your second guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 2){
			cout << "\nWhat is your third guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 3){
			cout << "\nWhat is your fourth guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 4){
			cout << "\nWhat is your fifth guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 5){
			cout << "\nWhat is your sixth guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 6){
			cout << "\nWhat is your seventh guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 7){
			cout << "\nWhat is your eighth guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 8){
			cout << "\nWhat is your ninth guess?\n(Number 1 through " << range << ").\n";
		}
		if (i == 9){
			cout << "\nWhat is your tenth guess?\n(Number 1 through " << range << ").\n";
		}
		
		//Read in digits to guess	
		cout << "First digit:";
		cin >> digit;
		pguess.set_1(digit);
		
		cout << "Second digit:";
		cin >> digit;
		pguess.set_2(digit);
		
		cout << "Third digit:";
		cin >> digit;
		pguess.set_3(digit);
		
		cout << "Fourth digit:";
		cin >> digit;
		pguess.set_4(digit);
		
		reply = true;
		//Check guess against random
		//Check first digit
		if(pguess.get_1() == game.get_1()){
			cout << "Congradulations, your first digit (" << pguess.get_1() << ") is correct!\n";
			reply = false;
		}
		
		if(pguess.get_1() == game.get_2() && pguess.get_1() != game.get_1() && pguess.get_2() != game.get_2()){
			cout << "There is a " << pguess.get_1() << " in there somewhere, but it isn't the first digit....\n";
			reply = false;
		}
		
		if(pguess.get_1() == game.get_3() && pguess.get_1() != game.get_1() && pguess.get_3() != game.get_3()){
			cout << "There is a " << pguess.get_1() << " in there somewhere, but it isn't the first digit....\n";
			reply = false;
		}
		
		if(pguess.get_1() == game.get_4() && pguess.get_1() != game.get_1() && pguess.get_4() != game.get_4()){
			cout << "There is a " << pguess.get_1() << " in there somewhere, but it isn't the first digit....\n";
			reply = false;
		}
		if(reply){
			cout << pguess.get_1() << " is incorrect. Please try another number.\n";
		}
		
		reply = true;
		//Check second digit
		if(pguess.get_2() == game.get_2()){
			cout << "Congradulations, your second digit (" << pguess.get_2() << ") is correct!\n";
			reply = false;
		}
		
		if(pguess.get_2() == game.get_1() && pguess.get_2() != game.get_2() && pguess.get_1() != game.get_1()){
			cout << "There is a " << pguess.get_2() << " in there somewhere, but it isn't the second digit....\n";
			reply = false;
		}
		
		if(pguess.get_2() == game.get_3() && pguess.get_2() != game.get_2() && pguess.get_3() != game.get_3()){
			cout << "There is a " << pguess.get_2() << " in there somewhere, but it isn't the second digit....\n";
			reply = false;
		}
		
		if(pguess.get_2() == game.get_4() && pguess.get_2() != game.get_2() && pguess.get_4() != game.get_4()){
			cout << "There is a " << pguess.get_2() << " in there somewhere, but it isn't the second digit....\n";
			reply = false;
		}
		if(reply){
			cout << pguess.get_2() << " is incorrect. Please try another number.\n";
		}
		
		reply = true;
		//Check third digit
		if(pguess.get_3() == game.get_3()){
			cout << "Congradulations, your third digit (" << pguess.get_3() << ") is correct!\n";
			reply = false;
		}
		
		if(pguess.get_3() == game.get_1() && pguess.get_3() != game.get_3() && pguess.get_1() != game.get_1()){
			cout << "There is a " << pguess.get_3() << " in there somewhere, but it isn't the third digit....\n";
			reply = false;
		}
		
		if(pguess.get_3() == game.get_2() && pguess.get_3() != game.get_3() && pguess.get_2() != game.get_2()){
			cout << "There is a " << pguess.get_3() << " in there somewhere, but it isn't the third digit....\n";
			reply = false;
		}
		
		if(pguess.get_3() == game.get_4() && pguess.get_3() != game.get_3() && pguess.get_4() != game.get_4()){
			cout << "There is a " << pguess.get_3() << " in there somewhere, but it isn't the third digit....\n";
			reply = false;
		}
		if(reply){
			cout << pguess.get_3() << " is incorrect. Please try another number.\n";
		}
		
		reply = true;
		//Check fourth digit
		if(pguess.get_4() == game.get_4()){
			cout << "Congradulations, your fourth digit (" << pguess.get_4() << ") is correct!\n";
			reply = false;
		}
		
		if(pguess.get_4() == game.get_1() && pguess.get_4() != game.get_4() && pguess.get_1() != game.get_1()){
			cout << "There is a " << pguess.get_4() << " in there somewhere, but it isn't the fourth digit....\n";
			reply = false;
		}
		
		if(pguess.get_4() == game.get_2() && pguess.get_4() != game.get_4() && pguess.get_2() != game.get_2()){
			cout << "There is a " << pguess.get_4() << " in there somewhere, but it isn't the fourth digit....\n";
			reply = false;
		}
		
		if(pguess.get_4() == game.get_3() && pguess.get_4() != game.get_4() && pguess.get_3() != game.get_3()){
			cout << "There is a " << pguess.get_4() << " in there somewhere, but it isn't the fourth digit....\n";
			reply = false;
		}
		if(reply){
			cout << pguess.get_4() << " is incorrect. Please try another number.\n";
		}
		
		//Save guess
		if(i == 0){
			first.set_1(pguess.get_1());
			first.set_2(pguess.get_2());
			first.set_3(pguess.get_3());
			first.set_4(pguess.get_4());
		}
		if(i == 1){
			second.set_1(pguess.get_1());
			second.set_2(pguess.get_2());
			second.set_3(pguess.get_3());
			second.set_4(pguess.get_4());
		}
		if(i == 2){
			third.set_1(pguess.get_1());
			third.set_2(pguess.get_2());
			third.set_3(pguess.get_3());
			third.set_4(pguess.get_4());
		}
		if(i == 3){
			fourth.set_1(pguess.get_1());
			fourth.set_2(pguess.get_2());
			fourth.set_3(pguess.get_3());
			fourth.set_4(pguess.get_4());
		}
		if(i == 4){
			fifth.set_1(pguess.get_1());
			fifth.set_2(pguess.get_2());
			fifth.set_3(pguess.get_3());
			fifth.set_4(pguess.get_4());
		}
		if(i == 5){
			sixth.set_1(pguess.get_1());
			sixth.set_2(pguess.get_2());
			sixth.set_3(pguess.get_3());
			sixth.set_4(pguess.get_4());
		}
		if(i == 6){
			seventh.set_1(pguess.get_1());
			seventh.set_2(pguess.get_2());
			seventh.set_3(pguess.get_3());
			seventh.set_4(pguess.get_4());
		}
		if(i == 7){
			eighth.set_1(pguess.get_1());
			eighth.set_2(pguess.get_2());
			eighth.set_3(pguess.get_3());
			eighth.set_4(pguess.get_4());
		}
		if(i == 8){
			ninth.set_1(pguess.get_1());
			ninth.set_2(pguess.get_2());
			ninth.set_3(pguess.get_3());
			ninth.set_4(pguess.get_4());
		}
		if(i == 9){
			tenth.set_1(pguess.get_1());
			tenth.set_2(pguess.get_2());
			tenth.set_3(pguess.get_3());
			tenth.set_4(pguess.get_4());
		}
		
		//Output previous guesses
		if (i >= 0){
			cout << "\nYour first guess: [" << first.get_1() << "] [" << first.get_2() << "] [" << first.get_3() << "] [" << first.get_4() << "].\n";
		}
		if (i > 0){
			cout << "Your second guess: [" << second.get_1() << "] [" << second.get_2() << "] [" << second.get_3() << "] [" << second.get_4() << "].\n";
		}
		if (i > 1){
			cout << "Your third guess: [" << third.get_1() << "] [" << third.get_2() << "] [" << third.get_3() << "] [" << third.get_4() << "].\n";
		}
		if (i > 2){
			cout << "Your fourth guess: [" << fourth.get_1() << "] [" << fourth.get_2() << "] [" << fourth.get_3() << "] [" << fourth.get_4() << "].\n";
		}
		if (i > 3){
			cout << "Your fifth guess: [" << fifth.get_1() << "] [" << fifth.get_2() << "] [" << fifth.get_3() << "] [" << fifth.get_4() << "].\n";
		}
		if (i > 4){
			cout << "Your sixth guess: [" << sixth.get_1() << "] [" << sixth.get_2() << "] [" << sixth.get_3() << "] [" << sixth.get_4() << "].\n";
		}
		if (i > 5){
			cout << "Your seventh guess: [" << seventh.get_1() << "] [" << seventh.get_2() << "] [" << seventh.get_3() << "] [" << seventh.get_4() << "].\n";
		}
		if (i > 6){
			cout << "Your eighth guess: [" << eighth.get_1() << "] [" << eighth.get_2() << "] [" << eighth.get_3() << "] [" << eighth.get_4() << "].\n";
		}
		if (i > 7){
			cout << "Your ninth guess: [" << ninth.get_1() << "] [" << ninth.get_2() << "] [" << ninth.get_3() << "] [" << ninth.get_4() << "].\n";
		}
		if (i > 8){
			cout << "Your tenth guess: [" << tenth.get_1() << "] [" << tenth.get_2() << "] [" << tenth.get_3() << "] [" << tenth.get_4() << "].\n";
		}
		
		//Winning output
		if(pguess.get_1() == game.get_1() && pguess.get_2() == game.get_2() && pguess.get_3() == game.get_3() && pguess.get_4() == game.get_4()){
			cout << "\nCongratulations! You have guessed all digits correctly! You have won the game!\n";
			break;
		}
	}
	
	//Play again function
	cout << "Thank you for playing, " << player << ".\nWould you like to play again? (y/n)\n";
	cin >> playagain;
	
	//Prints an error if playagain is an invalid value.
	if(playagain != "y" && playagain != "Y" && playagain != "n" && playagain != "N"){
		cout << "ERROR: invalid input recieved. Exiting program.\n\n";
	}
	
	} while(playagain == "y" || playagain == "Y");
	
	
	//exit program
	cout << "Thank you for playing MASTERMIND!\nBy Andrew and Zach";
	
	//Wait for [wait] seconds before closing
	clock_t start_time, current_time;
	int wait = 2;
	
	start_time = clock();
	do {
		current_time = clock();
	} while((current_time - start_time) / CLOCKS_PER_SEC < wait);
	return 0;
}
