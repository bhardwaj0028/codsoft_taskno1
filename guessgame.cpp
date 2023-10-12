
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number;
	int guess;
	int count_tries = 0;
	srand(time(0)); 
	number = rand() % 100 + 1; 
	cout << " |*|*|*    Number Guessing Game    *|*|*|\n\n";

	do
	{
		cout << "Take a Guess, what the number could be between 1 and 100 ";
		cin >> guess;
		count_tries++;

		if (guess > number)
			cout << " You Guessed Too high!\n\n";
		else if (guess < number)
			cout << " You Guessed Too low!\n\n";
		else
			cout << "\n  || Correct Guess ||  You got it in " << count_tries << " guesses. \n";
	} while (guess != number);

	return 0;
}