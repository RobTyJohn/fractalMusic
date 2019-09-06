/*
	Robert T. Johnson
	Module 11 programming assignment- Mathematical solutions
	June 13, 2019
*/

// header files
#include"MusicGenerator.h"

// uses standard naming conventions
using namespace std;

// playChord() function definitions
void MusicGenerator::playChord(string note) {
	// function checks parameter value in order to determine which chord sequence to play
	if (note == "A") {
		// Beep() function is a windows function that makes a beep sound at a fequency set by the first parameter and for a length of time in millis set by the second parameter
		Beep(a, noteLength);
		Beep(c5, noteLength);
		Beep(e5, noteLength);
		Beep(c5, noteLength);
	}
	else if (note == "B") {
		Beep(b, noteLength);
		Beep(e5, noteLength);
		Beep(g5, noteLength);
		Beep(e5, noteLength);
	}
	else if (note == "C") {
		Beep(c, noteLength);
		Beep(e, noteLength);
		Beep(g, noteLength);
		Beep(e, noteLength);
	}
	else if (note == "D") {
		Beep(d, noteLength);
		Beep(f, noteLength);
		Beep(a, noteLength);
		Beep(f, noteLength);
	}
	else if (note == "E") {
		Beep(e, noteLength);
		Beep(g, noteLength);
		Beep(b, noteLength);
		Beep(g, noteLength);
	}
	else if (note == "F") {
		Beep(f, noteLength);
		Beep(a, noteLength);
		Beep(c5, noteLength);
		Beep(a, noteLength);
	}
	else if (note == "G") {
		Beep(g, noteLength);
		Beep(b, noteLength);
		Beep(d5, noteLength);
		Beep(b, noteLength);
	}
	else {
		// if invalid parameter is passed function prints error message
		cout << "\n**Play note error**\n";
	}
	// after chord sequnce is played, addChord() function add the notes played to vector<string> feed
	addChord(note);
}