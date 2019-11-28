#include"BullCowGame.h"

using FText = std::string;

void PrintIntro();
void PlayGame();
string GetValidGuess();
bool AskToPlayAgain();
void PrintGameSummary();

BullCowGame BCGame;

int main() 
{
	do 
	{
		//introduce game
		PrintIntro();

		PlayGame();
	}

	while (AskToPlayAgain());

	return 0;
}

void PlayGame()
{
	BCGame.Reset(); 

	//loop for the number of turns asking for guesses
	while(!BCGame.isGameWin() && BCGame.GetCurrentTry() <= BCGame.GetMaxTries()) 
	{
		string guess = GetValidGuess();
		
		FBullCowCount bullCowCount = BCGame.SubmitValidGuess(guess);
		
		cout << "Bulls = " << bullCowCount.Bulls
			<< ". Cows = " << bullCowCount.Cows
			<< "\n\n";
	}

	PrintGameSummary();

	return;
}

void PrintIntro()
{
	cout << "\n\nWelcome to Bulls and Cows!" << endl;
	cout << "Can you guess the "
		<< BCGame.GetHiddenWordLength()
		<< " letter isogram I'm thingking of?\n"
		<< endl;

	return;
}

string GetValidGuess() 
{
	string guess = "";
	EGuessStatus status = EGuessStatus::Invalid_Status;

	do {
		//get guess word

		cout << "Try: " << BCGame.GetCurrentTry() << ". Enter your guess: ";

		cin >> guess;

		status = BCGame.CheckGuessValidity(guess);

		switch (status)
		{
		case EGuessStatus::Not_Isogram:
			cout << "Please enter a word without repeating letter.\n";
			break;

		case EGuessStatus::Wrong_Length:
			cout << "Please enter a " <<
				BCGame.GetHiddenWordLength() << " letter word.\n";
			break;

		case EGuessStatus::Not_Lowercase:
			cout << "Please enter all lowercase letters.\n";
			break;
		}

		cout << "\n";

	} while (status != EGuessStatus::OK);
	
	return guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? (y/n)";
	
	string response = "";
	cin >> response;
	
	cout << endl;

	return (response[0] == 'y' || response[0] == 'Y');
}

void PrintGameSummary() 
{
	if (BCGame.isGameWin())
	{
		cout << "\n\n<You won the game!>\n\n";
	}

	else 
	{
		cout << "\n\n<Bad luck>\n\n";
	}
}