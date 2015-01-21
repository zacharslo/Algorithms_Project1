#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

//Masterming game made by Andrew Blum and Zach Sloane

class code {
	public:
		void displaycode();
		bool check_correct ();
		bool check_incorrect ();
		void set_1(const int newDigit){digit_1 = newDigit;}
		void set_2(const int newDigit){digit_2 = newDigit;}
		void set_3(const int newDigit){digit_3 = newDigit;}
		void set_4(const int newDigit){digit_4 = newDigit;}
		int get_1() const{return digit_1;}
		int get_2() const{return digit_2;}
		int get_3() const{return digit_3;}
		int get_4() const{return digit_4;}
	
	private:
		int digit_1;
		int digit_2;
		int digit_3;
		int digit_4;
};

void code::displaycode() {
	cout << "Game Over.\nThe secret code is: " << digit_1 << " " << digit_2 << " " << digit_3 << " " << digit_4 << "\n";
}

class response {
public:
	void set_1(const int newGuess){guess_1 = newGuess;}
	void set_2(const int newGuess){guess_2 = newGuess;}
	void set_3(const int newGuess){guess_3 = newGuess;}
	void set_4(const int newGuess){guess_4 = newGuess;}
	int get_1() const{return guess_1;}
	int get_2() const{return guess_2;}
	int get_3() const{return guess_3;}
	int get_4() const{return guess_4;}
	bool win(const code secret);
	void compare(const code secret);

private:
	int guess_1;
	int guess_2;
	int guess_3;
	int guess_4;
};

bool response::win(const code secret) {
	if(guess_1 == secret.get_1() && guess_2 == secret.get_2() && guess_3 == secret.get_3() && guess_4 == secret.get_4()) {
		return true;
	}
	return false;
}

void response::compare(const code secret) {
	bool reply = true;
	
	//Check first digit
	if(guess_1 == secret.get_1()){
		cout << "Congradulations, your first digit (" << guess_1 << ") is correct!\n";
		reply = false;
	}
	
	if(guess_1 == secret.get_2() && guess_1 != secret.get_1() && guess_2 != secret.get_2() && reply){
		cout << "There is a " << guess_1 << " in there somewhere, but it isn't the first digit....\n";
		reply = false;
	}
	
	if(guess_1 == secret.get_3() && guess_1 != secret.get_1() && guess_3 != secret.get_3() && reply){
		cout << "There is a " << guess_1 << " in there somewhere, but it isn't the first digit....\n";
		reply = false;
	}
	
	if(guess_1 == secret.get_4() && guess_1 != secret.get_1() && guess_4 != secret.get_4() && reply){
		cout << "There is a " << guess_1 << " in there somewhere, but it isn't the first digit....\n";
		reply = false;
	}
	if(reply){
		cout << guess_1 << " is incorrect. Please try another number.\n";
	}
	
	reply = true;
	//Check second digit
	if(guess_2 == secret.get_2()){
		cout << "Congradulations, your second digit (" << guess_2 << ") is correct!\n";
		reply = false;
	}
	
	if(guess_2 == secret.get_1() && guess_2 != secret.get_2() && guess_1 != secret.get_1() && reply){
		cout << "There is a " << guess_2 << " in there somewhere, but it isn't the second digit....\n";
		reply = false;
	}
	
	if(guess_2 == secret.get_3() && guess_2 != secret.get_2() && guess_3 != secret.get_3() && reply){
		cout << "There is a " << guess_2 << " in there somewhere, but it isn't the second digit....\n";
		reply = false;
	}
	
	if(guess_2 == secret.get_4() && guess_2 != secret.get_2() && guess_4 != secret.get_4() && reply){
		cout << "There is a " << guess_2 << " in there somewhere, but it isn't the second digit....\n";
		reply = false;
	}
	if(reply){
		cout << guess_2 << " is incorrect. Please try another number.\n";
	}
	
	reply = true;
	//Check third digit
	if(guess_3 == secret.get_3()){
		cout << "Congradulations, your third digit (" << guess_3 << ") is correct!\n";
		reply = false;
	}
	
	if(guess_3 == secret.get_1() && guess_3 != secret.get_3() && guess_1 != secret.get_1() && reply){
		cout << "There is a " << guess_3 << " in there somewhere, but it isn't the third digit....\n";
		reply = false;
	}
	
	if(guess_3 == secret.get_2() && guess_3 != secret.get_3() && guess_2 != secret.get_2() && reply){
		cout << "There is a " << guess_3 << " in there somewhere, but it isn't the third digit....\n";
		reply = false;
	}
	
	if(guess_3 == secret.get_4() && guess_3 != secret.get_3() && guess_4 != secret.get_4() && reply){
		cout << "There is a " << guess_3 << " in there somewhere, but it isn't the third digit....\n";
		reply = false;
	}
	if(reply){
		cout << guess_3 << " is incorrect. Please try another number.\n";
	}
	
	reply = true;
	//Check fourth digit
	if(guess_4 == secret.get_4()){
		cout << "Congradulations, your fourth digit (" << guess_4 << ") is correct!\n";
		reply = false;
	}
	
	if(guess_4 == secret.get_1() && guess_4 != secret.get_4() && guess_1 != secret.get_1() && reply){
		cout << "There is a " << guess_4 << " in there somewhere, but it isn't the fourth digit....\n";
		reply = false;
	}
	
	if(guess_4 == secret.get_2() && guess_4 != secret.get_4() && guess_2 != secret.get_2() && reply){
		cout << "There is a " << guess_4 << " in there somewhere, but it isn't the fourth digit....\n";
		reply = false;
	}
	
	if(guess_4 == secret.get_3() && guess_4 != secret.get_4() && guess_3 != secret.get_3() && reply){
		cout << "There is a " << guess_4 << " in there somewhere, but it isn't the fourth digit....\n";
		reply = false;
	}
	if(reply){
		cout << guess_4 << " is incorrect. Please try another number.\n";
	}
}

class mastermind {
	public:
		void playgame();
		
	private:
};

void mastermind::playgame() {
	//Welcome Splash Screen
	cout << "Welcome to MASTERMIND\nBy Andrew and Zach\n\nWould you like to play a game?\nPress [ENTER] to continue.\n";
	cin.ignore();
	
	//Variable setup
	int digit;
	string player;
	string playagain;
	code secret;
	srand((unsigned)time(0));
	response guess;
	
	//Asking for player setup input
	cout << "What is your name?\n";
	cin >> player;
	
	secret.set_1((rand() % 6) + 1);
	secret.set_2((rand() % 6) + 1);
	secret.set_3((rand() % 6) + 1);
	secret.set_4((rand() % 6) + 1);
	
	for(int i = 0; i < 10; i++) {
		cout << "\nGuess " << i + 1 << ":\n";
		//Read in digits to guess	
		cout << "First digit:";
		cin >> digit;
		guess.set_1(digit);
		
		cout << "Second digit:";
		cin >> digit;
		guess.set_2(digit);
		
		cout << "Third digit:";
		cin >> digit;
		guess.set_3(digit);
		
		cout << "Fourth digit:";
		cin >> digit;
		guess.set_4(digit);
		
		//compare
		guess.compare(secret);
		
		if(guess.win(secret)){
			break;
		}
	}
	
	if(guess.win(secret)){
		cout << "\nCongratulations! You have guessed all digits correctly! You have won the game!\n";
	}
	//Display the secret code
	else {
		secret.displaycode();
	}
	
	//exit program
	cout << "\nThank you for playing MASTERMIND!\nBy Andrew and Zach";
	
	//Wait for [wait] seconds before closing
	clock_t start_time, current_time;
	int wait = 2;
	
	start_time = clock();
	do {
		current_time = clock();
	} while((current_time - start_time) / CLOCKS_PER_SEC < wait);
}

int main(){
	mastermind game;
	game.playgame();
}
