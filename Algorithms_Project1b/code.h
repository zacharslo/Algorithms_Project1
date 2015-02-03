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
    for(int i = 0; i < (code.size()); i++) {
    	cout << "Enter digit [" << i+1 << "]: ";
        input >> code[i];
    }
}

class code {
	public:
		code();
		void setCode() {cin >> secretCode;}
		void setCode(const vector<int> code) {secretCode = code;}
		void setCode(const code newCode) {secretCode = newCode.getCode();}
		vector<int> getCode() const {return secretCode;}
		void displayCode() const {cout << secretCode;}
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
	secretCode[1] = 2;
	secretCode[2] = 3;
	secretCode[3] = 4;
//	cout << secretCode;
}

//increases the code by 1 (each digit from 1 to 6)
void code::increment() {
	if (secretCode[3] < 8) {
		secretCode[3]++;
	}
	if (secretCode[3] == 7) {
		if (secretCode[2] < 8) {
			secretCode[2]++;
			secretCode[3] = 1;
		}
		if (secretCode[2] == 7) {
			if (secretCode[1] < 8) {
				secretCode[1]++;
				secretCode[2] = 1;
			}
			if (secretCode[1] == 7) {
				if (secretCode[0] < 8) {
					secretCode[0]++;
					secretCode[1] = 1;
				}
			}
		}
	}
}
