#include <iostream>
#include <string>
#include "SpellingCorrector.h"
#include "SpellingCorrector.cpp"
#include "hashtable.c"

using namespace std;

SpellingCorrector corrector;

void Correct(const string& wrong, const string& expected)
{
  const bool isCorrect = corrector.correct(wrong) == expected;
  cout << "(" << wrong << ") == (" << expected << ") = (" << std::boolalpha << isCorrect << ")" << endl;
}

int main()
{
  corrector.load("big.txt");

	string request;
	while (request != "quit")
	{
		cout << "Enter a word\n";
		cin >> request;

		string correct(corrector.correct(request));

		if (correct != "")
			if(correct==request)
			cout<< "correct word"<<"\n\n";
			else
			cout << "You meant: " << correct << "?\n\n\n";
		else
			cout << "No correction suggestion\n\n\n";
			break;
	}
	cin.get();
	return 0;
}
