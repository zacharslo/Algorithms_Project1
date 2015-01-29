#include <stdlib.h>
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

//overload << operator
ostream& operator<< (ostream& output, const vector<int>& code) {
    output << "(";
	for (int i = 0; i < (code.size() - 1); i++) {
        output << code[i] << ", ";
	}
	output << code.back() << ")";
    return output;
}

//overload >> operator
istream& operator>> (istream& input, vector<int>& code) {
	cout << "Enter your secret code.\n";
    for(int i = 0; i < (code.size() - 1); i++) {
    	cout << "Enter digit [" << i+1 << "]: ";
        input >> code[i];
    }
}

class code {
	public:
		code();
		void setCode() {cin >> secretCode;}
		vector<int> getCode() const {return secretCode;}
		void printCode() const {cout << secretCode;}
		void increment();
		
		int checkCorrect(const vector<int>& guess);
		int checkIncorrect(const vector<int>& guess);
	    bool Error(const vector<int>&);
	    
	private:
		vector<int> secretCode;
};

//initiates code
code::code() {
	vector<int> a(4);
	secretCode = a;
	secretCode[0] = 1;
	secretCode[1] = 1;
	secretCode[2] = 1;
	secretCode[3] = 1;
}

//increases the code by 1 (from 1 to 6)
void code::increment() {
	if (secretCode[3] < 6) {
		secretCode[3]++;
	}
	else {
		if (secretCode[2] < 6) {
			secretCode[2]++;
			secretCode[3] = 1;
		}
		else {
			if (secretCode[1] < 6) {
				secretCode[1]++;
				secretCode[2] = 1;
			}
			else {
				if (secretCode[0] < 6) {
					secretCode[0]++;
					secretCode[1] = 1;
				}
			}
		}
	}
}


//Zach's Code:

//checks secret code against guesses for correct digits in the correct position
int code::checkCorrect(const vector<int>& guess) {
    
    int numCorrect = 0; //number of correct digits initialized as 0
    
    for (int i = 0; i < secretCode.size(); i++) //checks user's guess against eat digit in secret code
    {
        if (secretCode[i]==guess[i])
            numCorrect++;
    }
    
    return numCorrect; //returns the number of correct digits in the correct position
}


//checks secret code against guesses for correct digits in incorrect position(not repeating)
int code::checkIncorrect(const vector<int>& guess) {
    vector<int> temp(guess.size(), 1);
    int numCorrect = 0;
    
    for (int i = 0; i < secretCode.size(); i++) //iterates through secret code
    {
        for (int e = 0; e < guess.size(); e++) //checks each digit of the secret code against the guess
        {
            if (temp[e])
            {
                if (secretCode[i] == guess[e])
                {
                    temp[e] = 0; //non-repeating feature for guesses in incorrect position
                    
                    numCorrect++;
                    break;
                }
            }
        }
    }
    return numCorrect;
}

//validates that each digit of the guess is below the max guess value
bool code::Error(const vector<int>& guess)
{
    if(guess.size() != 4)
        return true;
    
    //iterates through guess to check that it's within range
    for (int i = 0; i < guess.size(); i++)
    {
        if (guess[i] > 6)
        {
            cout << "Some guesses weren't in the correct range.\r\n";
            return true; //error
        }
    }
    return false; //guess is within range
}
