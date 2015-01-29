#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

//Masterming game made by Andrew Blum and Zach Sloane
//Project 1a

class code {
	public:
		code();
		void setCode();
		void getCode();
		void printCode();
		void increment();
		
		
		void displaycode();
		bool check_correct ();
		bool check_incorrect ();
	
	private:
		vector<int> secretCode;
};

class response {
public:
	void setResponse();
	void getResponse();
	void printResponse();
	
	bool win(const code secret);
	void compare(const code secret);

private:
	vector<int> guessResponse;
};

class mastermind {
	public:
		mastermind();
		void playgame();
		bool consistentWithPreviousGuesses(const code guess);
		
	private:
		code secretCode; //the player's secret code
		code p; //the last guess that was made
		response r; //the response to the last guess
		code g; //the current guess
		
		vector<code> S; //possible solutions
		
		vector<code> guesses; //list of all previous guesses
		vector<response> responses; //list of all previous responses
};

void mastermind::playgame() {
	//Introduce the game to the player.
	cout << "Welcome to Mastermind.\nThis game was developed by Andrew Blum and Zach Sloan.\n\nTo play the game, please think of a 4 digit code with each digit being a number between 1 and 6.\n(example: [4] [1] [4] [6])\n";
	
	code secretCode;
	secretCode.getCode();
	
	//Consistency
	
	
	
	//Wait for [wait] seconds before closing
	clock_t start_time, current_time;
	int wait = 2;
	
	start_time = clock();
	do {
		current_time = clock();
	} while((current_time - start_time) / CLOCKS_PER_SEC < wait);
}

bool mastermind::consistentWithPreviousGuesses(const code guess) {
	
	
}

int main(){
	mastermind game;
	game.playgame();
}
