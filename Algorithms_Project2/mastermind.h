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
		void displayGuess();
		void displaySecretCode();
		vector<code> getSolutions();
		vector<code> getGuesses();
		vector<response> getResponses();
    	code agentGuess();
		bool consistentWithPreviousGuesses(const code guess);
    
	private:
		code secretCode; //the player's secret code
		code guess; //the current guess
		
		vector<code> S; //list of possible solutions
		
		vector<code> guesses; //list of all previous guesses
		vector<response> responses; //list of all previous responses
};

//initializes mastermind
mastermind::mastermind() {
    secretCode.setCode();
    
}
