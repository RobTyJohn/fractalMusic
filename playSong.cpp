/*
	Robert T. Johnson
	Module 11 programming assignment- Mathematical solutions
	June 13, 2019
*/

// header files
#include"MusicGenerator.h"

// uses standard naming conventions
using namespace std;

// playSong() function definitions
void MusicGenerator::playSong(int iterator) {
	// assigns parameter value to int maxIterations
	maxIterations = iterator;
	// sets the current size of vector<string> feed to int value
	int feedSize = feed.size();
	// checks to see how many times function has ran compared to the maximum number of times it can run
	if (location >= maxIterations) {
		// resets values to defaults if function has ran maximum number of times
		location = 0;
		feed.clear();
		feed.push_back("C");
		// exits function
		return;
	}
	// continues if function has not ran maximum number of times 
	else {
		// plays each chord sequence stored in vector<string> feed
		for (int i = 0; i < feedSize; i++) {
			// runs playChord() function to play chord at current location in vector<string> feed
			playChord(feed[i]);
		}
		// increases location iterator after current feed has played
		location++;
		// recursion, function starts itself over and will either reach it's maximum on next run or will play new feed
		playSong(iterator);
	}
}