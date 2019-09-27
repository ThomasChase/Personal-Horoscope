// This is the Personal Horoscope program (PersonalHoroscope.cpp)
// Written by: Thomas Chase
// Date: 26 September 2019
// Sources: None

#include <iostream>  //used for input/output
#include <string>  //used for using strings

using namespace std;

int main()
{
    // stating strings required for program
    char reply;  //using to indicate the user is intending to close the program
    string name;  //store the users inputed name
    string astro;   //storing the inputed sign
    string subject;  //storing the inputed subject the user is studying

    //Beginning of the program
    cout << "Welcome to Thomas Chase's Crystal Ball!" << endl;
    cout << "What is your name please, " << endl;
    cin >> name;  //assigning the users input as their name
    cout << "Hello " << name << " , my name is Thomas." << endl; //recalling the new stored name in string "name"
    cout << "What is you astrological sign, " << name << "? ";
    cin >> astro;  //assigning the users specified sign
    cout << "What are you studying, " << name << "? ";
    cin >> subject; // assigning their subject
    cout << "Well, " << name << ", your horoscope for " << astro << " says you will do very well in " << subject << " this term." << endl;  //assigning and displaying all stored strings collected form the user
    cout << "Good luck!" << endl;

    //Stopping the program from auto ending so the user can read their horoscope.
    cout << "Press any key, fallowed by 'Enter', to end the program once you are done reading you horoscope." << endl;
    cin >> reply;
    return 0;

}
