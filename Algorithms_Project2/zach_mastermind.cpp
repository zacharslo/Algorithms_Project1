
#include <iostream>
#include <vector>
#include "mastermind.h"

using namespace std;

int main()
{
    int a = 4; //4 digits in code
    int b = 0;
    
    //Welcome Splash Screen
    cout << "Welcome to MASTERMIND\nBy Andrew and Zach\n\nWould you like to play a game?\nPress [ENTER] to continue.\n";
    cin.ignore();
    
    //user inputs for maximum of sequence
    cout << "Enter the maximum value to be used to be used in the secret code: ";
    cin >> b;
    
    cout << endl;
    
    mastermind game(a, b); // initializing the mastermind class game with a,b
    game.Run();
    
    return 0;
} //end main


