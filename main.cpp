/*
	Robert T. Johnson
	Module 11 programming assignment- Mathematical solutions
	June 13, 2019
*/

// header files
#include<iostream>
#include<string>
#include"MusicGenerator.h"

// uses standard naming conventions
using namespace std;

// main program
int main() {
	// initializes instance of MusicGenerator class
	MusicGenerator musicGenerator;
	// bool value to control main loop
	bool endProgram;
	// string value to store main menu ui input value
	string input;

	do {
		// sets bool endPorgram to false
		endProgram = false;
		// main menu ui
		cout << "\nMain menu\n"
			"-----------\n"
			"1- Play music\n"
			"2- Exit program\n>";
		// stores user input to string input
		getline(cin, input);
		// condition statements to check user input
		if (input == "1") {
			//string value to store the number of iterations, used to control program's recursion
			string stringIteration;
			cout << "Enter the number of iterations\n>";
			// assigns user input to string stringIterations
			getline(cin ,stringIteration);
			// int value to convert string value to
			int intIteration;
			// try catch block to make sure string can be converted to an int value
			try {
				// converts string stringIteration to integer and assigns value to int intIteration
				intIteration = stoi(stringIteration);
				// runs playSong() function with int intIteration as parameter
				musicGenerator.playSong(intIteration);
			}
			// catches string values that cannot be converted to an integer
			catch (const invalid_argument& e) {
				cout << "\n**Invalid argument error- input must be an integer**\n";
				cin.clear();
			}
			// catches string values that are too large to be converted to integer values
			catch (const out_of_range& e) {
				cout << "\n**Out of range error- input is too large**\n";
				cin.clear();
			}			
		}
		else if (input == "2") {
			// changes endProgram to true to exit loop
			endProgram = true;
		}
		else {
			// if no conditions are met then invalid input error is printed to screen
			cout << "\n**Invalid input error**\n";
			cin.clear();
		}
		// loop contines as long as bool endProgram is false
	} while (!endProgram);

	// prints goodbye message to screen
	cout << "\nGoodbye!\n";
	// pauses screen, used windows method as sound already uses windows only functions
	Sleep(500);

	// exits program
	return 0;
}