#include <iostream>
#include <string>

using namespace std;

constexpr int WORD_LENTGH = 5;
constexpr int NUMBER_OF_GUESSES = 5;

void printIntro();
void getguess();
bool askContinuePlaying();

int main()
{

	do {
		printIntro();
		getguess();
	} while (askContinuePlaying() == true);
	return 0;
}
void printIntro()
{
	//printf("Welcome to bulls and Cows \n");
	cout << "Welcome to bulls and Cows \n";
	cout << "a fun word game abou guessing Isograms \n";
	cout << "can you guess the " << WORD_LENTGH << " charater word" << endl;
	return;

}
void getguess()
{
	int guesses = 0;
	string guess = "";
	while (guesses < NUMBER_OF_GUESSES) {
		cout << "input your guess\n";
		getline(cin, guess, '\n');
		cout << "guess was : " << guess << endl;
		guesses++;
	}
}
bool askContinuePlaying()
{
	string input = "";
	cout << "countinue playing?" << endl;
	getline(cin, input, '\n');

	return ((input[0] == 'y') || (input[0] == 'Y'));

}