#include <stdlib.h>
#include <iostream>
#include <vector>
//#include "code.h"

using namespace std;
/*
//overload << operator
ostream& operator<< (ostream& output, const vector<int>& code) {
    for (int i = 0; i < code.size(); i++) {
        output << code[i] << " ";
	}
    return output;
}

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
	void setResponse(const code secret);
	vector<int> getResponse() const {return reply;}

private:
	vector<int> reply;
};

response::response() {
	reply[0] = 0;
	reply[1] = 0;
}

void response::setResponse(const code secret) {
	
}
