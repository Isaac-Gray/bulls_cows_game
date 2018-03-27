#include <iostream>
#include <string>
#include "Bull_cow_game.h"

constexpr int WORD_LENTGH = 5;
Bull_cow_game BCgame;

void PrintIntro();
void GetGuess();
bool AskContinuePlaying();

int main()
{

	do {
		PrintIntro();
		//TODO Sumarize game
		GetGuess();
	} while (AskContinuePlaying() == true);
	return 0;
}
void PrintIntro()
{
	//printf("Welcome to bulls and Cows \n");
	std::cout << "Welcome to bulls and Cows \n";
	std::cout << "a fun word game abou guessing Isograms \n";
	std::cout << "can you guess the " << WORD_LENTGH << " charater word" << std::endl;
	return;

}


void GetGuess()
{
	std::string guess = "";
	while (BCgame.GetCurrentGuess() < BCgame.GetMaxTries()) {
		std::cout << "input your guess\n";
		std::getline(std::cin, guess, '\n');//TODO check guess
		BullCowCount BullCowCount = BCgame.SubmittGuess(guess);
		std::cout << "Try " << BCgame.GetCurrentGuess() << " guess was : " << guess << "\n";
		std::cout << "Bulls="<<BullCowCount.bulls << " Cows= " << BullCowCount.cows << std::endl;
	}

	std::cout << "" << std::endl;
	BCgame.Reset();
}
bool AskContinuePlaying()
{
	std::string input = "";
	std::cout << "countinue playing?" << std::endl;
	std::getline(std::cin, input, '\n');

	return ((input[0] == 'y') || (input[0] == 'Y'));

}