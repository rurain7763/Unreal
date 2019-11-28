#pragma once

#include"iostream"
#include"string"
#include"map"
#define TMap std::map

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
	
	bool IsIsogram(FString) const;
	bool IsLowercase(FString) const;
};

inline BullCowGame::BullCowGame() { Reset(); }

inline int BullCowGame::GetMaxTries() const 
{
	TMap<int32, int32> wordLenghthToMaxTries{ {3,4} ,
	{4,7},{5,2} ,{6,5} };

	return wordLenghthToMaxTries[GetHiddenWordLength()]; 
}
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

inline bool BullCowGame::IsIsogram(FString guess) const
{
	if (guess.length() <= 1) return true;

	TMap<char, bool> word;

	for (auto letter : guess) {		
		letter = tolower(letter);

		if (word[letter])
		{
			return false;
		}

		else 
		{
			word[letter] = true;
		}
	}

	return true;
}

inline bool BullCowGame::IsLowercase(FString guess) const
{
	if (guess.length() == 0) return false;

	for (auto letter : guess) 
	{
		if (!islower(letter)) return false;
	}

	return true;
}

inline EGuessStatus BullCowGame::CheckGuessValidity(string guess) const
{
	if (!IsIsogram(guess))
	{
		return EGuessStatus::Not_Isogram;
	}

	else if (!IsLowercase(guess))
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


