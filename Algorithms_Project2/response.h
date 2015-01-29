#include <stdlib.h>
#include <iostream>
#include <vector>
#include "code.h"

using namespace std;

//<< operator overloaded in code class which is included.
/*
//overloaded == operator
ostream& operator== (const vector<int>& code1, const vector<int>& code2)
{
    bool output = true;
	if (code1.size() == code2.size()) {
    	for (int i = 0; i < code1.size(); i++) {
    		if (code1[i] != code2[i]) {
    			output = false;
			}
		}
	}
	if (code1.size() != code2.size()) {
		output = false;
	}
    return output;
}

//overloaded = operator
ostream& operator= (const response& newResponse) {
    newVector = vector<int>(ptr.size()+1);
    for (int i = 0; i < ptr.size() - 1; i++) {
    	newVector[i] = ptr[i];
	}
	newVector[ptr.size()] = newResponse;
	delete ptr;
	return newVector;
}*/

class response {
public:
	response();
	void setResponse();
	vector<int> getResponse() const {return reply;}
	void printResponse() const {cout << "Your response to my last guess was: " << reply << ".\n";}

private:
	vector<int> reply;
};

response::response() {
	vector<int> a(2);
	reply = a;
	reply[0] = 0;
	reply[1] = 0;
}

void response::setResponse() {
	char checkCorrect;
	do {
		cout << "What is the response to my guess?\n How many digits were correct and in the correct location? ";
		cin >> reply[0];
		cout << "How many digits were correct but not in the correct location? ";
		cin >> reply[1];
		cout << reply << "Is this correct? (y/n)";
		cin >> checkCorrect;
	} while (checkCorrect != 'y' || checkCorrect != 'Y');
}

