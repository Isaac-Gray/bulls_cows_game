#include "Bull_cow_game.h"

Bull_cow_game::Bull_cow_game()
{
	Reset();
}

void Bull_cow_game::Reset()
{
	myCurrentTry = 1;
	myMaxTries = 5;
	wordToGuess = "world";
}

int Bull_cow_game::GetMaxTries() const
{
	return  myMaxTries;
}

int Bull_cow_game::NumberOfPlayers(int input)
{
	return 0;
}

bool Bull_cow_game::CheckGuess(std::string guess) const
{
	return false;
}

int Bull_cow_game::GetCurrentGuess() const
{
	return myCurrentTry;
}

void Bull_cow_game::Guess()
{
	myCurrentTry++;
}

BullCowCount Bull_cow_game::SubmittGuess(std::string guess)
{
	Guess();
	// TODO run check guess to make sure it's a vaild guess
	// MAYBE print order of bulls/cows
	BullCowCount BullCowCount;
	int wordlenght = wordToGuess.length();
	int guessLenght = guess.length();
	for (int i=0; i < wordlenght; i++) {
		
		for (int j=0; j < guessLenght; j++) {
			if ((wordToGuess[i] == guess[j]) && (i == j)) {
				
				BullCowCount.bulls++;
				
			}
			else if ((wordToGuess[i] != guess[j]) && (i == j)) {
				
				BullCowCount.cows++;
			}

		}
		
	}
	return BullCowCount;
}
