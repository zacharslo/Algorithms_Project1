#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

//Masterming game made by Andrew Blum and Zach Sloane
//Project 1a

class code {
	public:
		void increment();
		
		
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

class mastermind {
	public:
		void playgame();
		
	private:
};

void mastermind::playgame() {
	//guess p: guess before last, guess r: last guess, guess g: this/current guess
	response p;
	response r;
	response g;
	
	//Consistency
	S;
	
	
	
	//Wait for [wait] seconds before closing
	clock_t start_time, current_time;
	int wait = 2;
	
	start_time = clock();
	do {
		current_time = clock();
	} while((current_time - start_time) / CLOCKS_PER_SEC < wait);
}
}

int main(){
	mastermind game;
	game.playgame();
}
