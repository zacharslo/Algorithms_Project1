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
		void setSolutions();
		void setGuesses();
		void setResponses();
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
	vector<int> temp(4);
	temp[0] = 1;
	temp[1] = 1;
	temp[2] = 1;
	temp[3] = 1;
    secretCode.setCode();
	
	guess.setCode(temp);
	temp[0] = 7;
	temp[1] = 7;
	temp[2] = 7;
	temp[3] = 7;
    while(guess.getCode()[0] != temp[0] && guess.getCode()[1] != temp[1] && guess.getCode()[2] != temp[2] && guess.getCode()[3] != temp[3]) {
    	S.push_back(guess);
    	guess.increment();
	};
	
	temp[0] = 1;
	temp[1] = 1;
	temp[2] = 1;
	temp[3] = 1;
	guess.setCode(temp);
	
	for(int i = 0; i < (S.size() - 1); i++) {
		S[i].displayCode();
		cout << ", ";
	}
	S[S.size() - 1].displayCode();
	cout << ".\n";
}

//adds a response to the responses list
void mastermind::setResponses() {
	responses.push_back(reply);
	
	/*   To display responses list.
	for(int i = 0; i < (responses.size() - 1); i++) {
		responses[i].displayResponses(i + 1);
		cout << ", ";
	}
	responses[responses.size() - 1].displayResponses(responses.size());
	cout << ".\n";*/
}

//choose a code to guess
code mastermind::agentGuess() {
	vector<int> newGuess(4);
	newGuess = guess.getCode();
	int i = 0;
	int a;
	int b;
	int c;
	int d;
	while (i < 4) {
		if(reply.getResponse()[0] == 1 || reply.getResponse()[1] == 1) {
			i++;
			if (i == 1) {
				a = guess.getCode()[0];
			}
			if (i == 2) {
				b = guess.getCode()[0];
			}
			if (i == 3) {
				c = guess.getCode()[0];
			}
			if (i == 4) {
				d = guess.getCode()[0];
			}
			guess.getCode()[0]++;
			guess.getCode()[1]++;
			guess.getCode()[2]++;
			guess.getCode()[3]++;
		}
	}
	
	newGuess[0] = a;
	newGuess[1] = b;
	newGuess[2] = c;
	newGuess[3] = d;
	
	newGuess[0] = b;
	newGuess[1] = a;
	newGuess[2] = c;
	newGuess[3] = d;
	
	newGuess[0] = b;
	newGuess[1] = c;
	newGuess[2] = a;
	newGuess[3] = d;
	
	newGuess[0] = b;
	newGuess[1] = c;
	newGuess[2] = d;
	newGuess[3] = a;
		
		
	guess.setCode(newGuess);
	return guess;
}
