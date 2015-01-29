#include <stdlib.h>
#include <iostream>
#include <vector>
#include "code.h"
#include "response.h"

using namespace std;

//Zach's code

class mastermind
{
public:
    mastermind(int, int);
    mastermind();
    void Run();
    
    friend ostream& operator<< (ostream&, const vector<int>&);
    friend istream& operator>> (istream&, vector<int>&);
    
private:
	vector<response> previousResponses;
	vector<code> previousGuesses;
    code game;
    int trycnt;
};

//initializes secret code length and range of 10
mastermind::mastermind() : game()
{
    trycnt = 10;
}

//overloaded constructor initializes secret code range using user inputted values
mastermind::mastermind(int n, int m) : game()
{
    trycnt = 10;
}

//runs mastermind game until allowed tries is reached
void mastermind::Run()
{
    for (int i = 1; i <= trycnt; i++)
    {
        //initialize integer vector to hold user's guess
        vector<int> guess(4);
        cin >> guess;
        
        //checks that there is no error in range or length of user's guess
        if (game.Error(guess))
            continue;
        
        int correct = game.checkCorrect(guess); //number of correct digits in the correct locations

        int incorrect = game.checkIncorrect(guess); //number of correct digits in incorrect locations
        
        cout << "\n\n" << "Correct Guesses:  " << incorrect << endl;
        cout << "Correct Positions: " << correct    << endl << endl;
    }
}
