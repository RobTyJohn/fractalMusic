/*
	Robert T. Johnson
	Module 11 programming assignment- Mathematical solutions
	June 13, 2019
*/

// header files
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>

// uses standard naming conventions
using namespace std;

// Music Generator class declarations
class MusicGenerator {
public:
	// default constructor
	MusicGenerator();
	// playSong() function takes parameter to control the number of times the program will run
	// plays each chord stored in vector<string> feed
	void playSong(int iterator);
	// playChord() function plays individual chord based upon the parameter passed to the function
	void playChord(string note);
	// addChord() function adds new chord to vector<string> feed
	void addChord(string note);
private:
	// floating values used to  store note frequencies
	float a, b, c, d, e, f, g, c5, d5, e5, g5;
	// container to hold chords to play
	vector<string> feed;
	// integer value to keep track of current program iteration
	int location;
	// integer value to set the maximum number of allowable iterations
	int maxIterations;
	// integer value to set how long a note will play for
	int noteLength;
};
