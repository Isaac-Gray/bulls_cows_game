#pragma once
#include <string>

struct BullCowCount {
	int bulls = 0;
	int cows = 0;
};

class Bull_cow_game {
public:
	Bull_cow_game();
	// resets game parameters 
	void Reset(); // TODO make return
	//retrun max tries
	int GetMaxTries() const;
	// return current tries
	int GetCurrentGuess() const;
	int NumberOfPlayers(int input);// TODO add a two player and one player option
	//checks if the game is won
	bool CheckGuess(std::string guess) const; //is game won
	void Guess();
	// tells the user the number of bulls and cows
	BullCowCount SubmittGuess(std::string guess);



private:
	int myCurrentTry;
	int myMaxTries;
	std::string wordToGuess;

};