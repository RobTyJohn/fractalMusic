/*
	Robert T. Johnson
	Module 11 programming assignment- Mathematical solutions
	June 13, 2019
*/

// header files
#include"MusicGenerator.h"

// uses standard naming conventions
using namespace std;

// default constructor definitions
MusicGenerator::MusicGenerator() {
	// prints program title to screen
	cout << "\tFractal Music Generator\n";

	// assigns frequency values
	a = 440.00;
	b = 493.88;
	c = 261.63;
	d = 293.66;
	e = 329.63;
	f = 349.23;
	g = 392.00;
	c5 = 523.25;
	d5 = 587.33;
	e5 = 659.26;
	g5 = 783.99;

	// sets the initial program seed 
	feed.push_back("C");
	// sets default values for iterators that control program
	location = 0;
	int maxIterations = 0;
	// sets the length of each note 1000 mills= 1 sec. per note
	noteLength = 1000;
}