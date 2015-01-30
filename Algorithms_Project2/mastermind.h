#include <stdlib.h>
#include <iostream>
#include <vector>
//#include "code.h"
#include "response.h"

using namespace std;

class mastermind {
	public:
		mastermind();
//		void displayGuess() const {cout << guess;}
//		void displaySecretCode() const {cout << secretCode;}
		void setResponse() {reply.setResponse();}
		vector<code> getSolutions() const {return S;}
		vector<code> getGuesses() const {return guesses;}
		vector<response> getResponses() const {return responses;}
    	code agentGuess();
		bool consistentWithPreviousGuesses(const code guess);
    
	private:
		code secretCode; //the player's secret code
		code guess; //the current guess
		response reply; //the current response
		
		vector<code> S; //list of possible solutions
		vector<code> guesses; //list of all previous guesses
		vector<response> responses; //list of all previous responses
};

//initializes mastermind
mastermind::mastermind() {
    secretCode.setCode();
//    cout << secretCode.getCode()[0] << secretCode.getCode()[1] << secretCode.getCode()[2] << secretCode.getCode()[3];
//    S = guess.increment();
}

//choose a code to guess
code mastermind::agentGuess() {
	vector<int> newGuess(4);
	newGuess[0] = 6;
	newGuess[1] = 5;
	newGuess[2] = 4;
	newGuess[3] = 3;
	
	guess.setCode(newGuess);
	return guess;
}
