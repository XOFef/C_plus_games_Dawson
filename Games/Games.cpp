#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1251>nul");

	// chapter 1

	// 1
	//int survivos, lives, score;
	//int i, b, x;

	//// 2
	//cout << "Seven divided by three is " << 7 / 3 << endl;
	//cout << "Seven divided by three is " << 7.0 / 3 << endl;
	//cout << "Seven divided by three is " << 7.0 / 3.0 << endl;

	//// 3 
	//int scoreOne = 0, scoreTwo = 0, scoreTree = 0, averageValue = 0;
	//cout << "\n\nEnter the points for the first attempt\n";
	//cin >> scoreOne;
	//cout << "Enter the points for the second attempt\n";
	//cin >> scoreTwo;
	//cout << "Enter the points for the third attempt\n";
	//cin >> scoreTree;
	//averageValue = (scoreOne + scoreTwo + scoreTree) / 3;
	//cout << "The average value is: " << averageValue;



	// chapter 2

	// 1
	//enum level {Easy, Normal, Hard};
	//cout << "Difficulty Levels\n\n";
	//cout << "1 - Easy\n";
	//cout << "2 - Normal\n";
	//cout << "3 - Hard\n\n";
	//int choice;
	//cout << "Choice: ";
	//cin >> choice;
	//switch (choice-1)
	//{
	//case level::Easy:
	//	cout << "You picked Easy\n";
	//	break;
	//case level::Normal:
	//	cout << "You picked Normal\n";
	//	break;
	//case level::Hard:
	//	cout << "You picked Hard\n";
	//	break;
	//default:
	//	cout << "You made an illegal choice\n";
	//	break;
	//}

	//// 2
	//int x = 0; // True - int x = 1;
	//while (x)
	//{
	//	++x;
	//	cout << x << endl;
	//}

	// 3
	//srand(static_cast<unsigned int>(time(0)));
	//int secretNumber, tries = 0, guessedNumber;
	//int arr[100];
	//cout << "\tWelcome to Guess My Number\n\n";
	//cout << "Enter an odd number: ";
	//cin >> secretNumber;
	//do {
	//	guessedNumber = rand() % 101;
	//	tries++;
	//	cout << "\ntry " << tries << " Number: " << guessedNumber << endl;
	//	if (guessedNumber == secretNumber) {
	//		cout << "\nPC win";
	//		break;
	//	}
	//} while (true);



		// chapter 3

	// 1
	/*srand(static_cast<unsigned int>(time(0)));
	int point = 0;
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's what the game is all about."}
	};
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\tWelcom to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' fot a hint.\n";
	cout << "Enter 'quit' to quit the game.\n";
	cout << "The jumble is: " << jumble;
	string guess;
	cout << "\n\nTour guess: ";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit")) {
		if (guess == "hint") {
			cout << theHint;
			point -= 2;
		}
		else {
			cout << "Sorry, that's not it.";
		}
		cout << "\n\nYour guess: ";
		cin >> guess;
	}
	if (guess == theWord) {
		point += theWord.size();
		cout << "\nThat's it! You guessed it! You scored: " << point << " points\n";
	}
	cout << "\nThanks for plaing.";*/

	// 2
	//string phrase = "Game";
	//for (int i = 0; i < phrase.size(); ++i) // false - <=
	//{
	//	cout << "Character at position " << i+1 << " is: " << phrase[i] << endl; // false - i
	//}

	// 3
	const int ROWS = 2;
	const int COLUMNS = 2;
	char board[ROWS][COLUMNS] =
	{
		{'O', 'X', 'O'},
		{' ', 'X', 'X'}
	}




	system("pause>nul");
	return 0;
}
