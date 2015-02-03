#include <stdlib.h>
#include <iostream>
#include <vector>
#include "code.h"

using namespace std;

//<< operator overloaded in code class which is included.


class response {
public:
	response();
	void setResponse();
	vector<int> getResponse() const {return reply;}
	void displayResponse() const {cout << "Your response to my last guess was: " << reply << ".\n";}
	void displayResponses(const int i) const {cout << "R #" << i << ": " << reply;}

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
		cout << "What is the response to my guess?\nHow many digits were correct and in the correct location? ";
		cin >> reply[0];
		cout << "How many digits were correct but not in the correct location? ";
		cin >> reply[1];
		cout << "Your response was " << reply << " Is this correct? (y/n)";
		cin >> checkCorrect;
	} while (checkCorrect != 'y' && checkCorrect != 'Y');
}

