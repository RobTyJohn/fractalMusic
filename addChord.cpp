/*
	Robert T. Johnson
	Module 11 programming assignment- Mathematical solutions
	June 13, 2019
*/

// header files
#include"MusicGenerator.h"

// uses standard naming conventions
using namespace std;

// addChord() function definitions
void MusicGenerator::addChord(string note) {
	// takes parameter value and adds individual notes of the specified chord sequence to vector<string> feed
	if (note == "A") {
		feed.push_back("A");
		feed.push_back("C");
		feed.push_back("E");
		feed.push_back("C");
	}
	else if (note == "B") {
		feed.push_back("B");
		feed.push_back("D");
		feed.push_back("F");
		feed.push_back("D");
	}
	else if (note == "C") {
		feed.push_back("C");
		feed.push_back("E");
		feed.push_back("G");
		feed.push_back("E");
	}
	else if (note == "D") {
		feed.push_back("D");
		feed.push_back("F");
		feed.push_back("A");
		feed.push_back("F");
	}
	else if (note == "E") {
		feed.push_back("E");
		feed.push_back("G");
		feed.push_back("B");
		feed.push_back("G");
	}
	else if (note == "F") {
		feed.push_back("F");
		feed.push_back("A");
		feed.push_back("C");
		feed.push_back("A");
	}
	else if (note == "G") {
		feed.push_back("G");
		feed.push_back("B");
		feed.push_back("D");
		feed.push_back("B");
	}
	else {
		// if invalid parameter is passed function prints error message
		cout << "\n**Note error**\n";
	}
}