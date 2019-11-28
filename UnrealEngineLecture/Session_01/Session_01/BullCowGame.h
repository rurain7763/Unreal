#pragma once
#include"iostream"
#include"string"

using namespace std;

using FString = string;
using int32 = int;

enum class EGuessStatus{
	Invalid_Status,
	OK,
	Not_Isogram,
	Wrong_Length,
	Not_Lowercase
};

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class BullCowGame 
{
public:
	BullCowGame();

	int GetMaxTries() const;
	bool isGameWin() const;
	int GetCurrentTry() const;
	int32 GetHiddenWordLength() const;

	EGuessStatus CheckGuessValidity(string) const;
	void Reset(); // TODO : return value
	
	FBullCowCount SubmitValidGuess(FString);

private:
	int currentTry;
	int maxTries;
	FString hiddenWord;
	bool b;
};

inline BullCowGame::BullCowGame() { Reset(); }

inline int BullCowGame::GetMaxTries() const { return maxTries; }
inline int BullCowGame::GetCurrentTry() const { return currentTry; }
inline int32 BullCowGame::GetHiddenWordLength() const
{
	return hiddenWord.length();
}

void BullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	const FString HIDDEN_WORD = "planet";

	b = false;
	hiddenWord = HIDDEN_WORD;
	currentTry = 1;
	maxTries = MAX_TRIES;

	return;
}

inline FBullCowCount BullCowGame::SubmitValidGuess(FString guess)
{
	currentTry++;
	b = false;

	FBullCowCount bullCowCount;

	for (int32 i = 0; i < (int)hiddenWord.length(); i++) 
	{
		if (hiddenWord[i] == guess[i]) bullCowCount.Bulls++;

		for (int32 j = 0;  j < (int)guess.length(); j++)
		{
			if (hiddenWord[i] == guess[j]) bullCowCount.Cows++;
		}
	}

	if (bullCowCount.Bulls == GetHiddenWordLength()) b = true;

	return bullCowCount;
}

inline bool BullCowGame::isGameWin() const
{
	return b;
}

inline EGuessStatus BullCowGame::CheckGuessValidity(string guess) const
{
	if (false) 
	{
		return EGuessStatus::Not_Isogram;
	}

	else if (false)
	{
		return EGuessStatus::Not_Lowercase;
	}

	else if (guess.length() != GetHiddenWordLength())
	{
		return EGuessStatus::Wrong_Length;
	}

	else {
		return EGuessStatus::OK;
	}
}


