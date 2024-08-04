#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251>nul");

	// chapter 1

	// 1
	/*int survivos, lives, score;
	int i, b, x;*/

	// 2
	/*cout << "Seven divided by three is " << 7 / 3 << endl;
	cout << "Seven divided by three is " << 7.0 / 3 << endl;
	cout << "Seven divided by three is " << 7.0 / 3.0 << endl;*/

	// 3 
	/*int scoreOne = 0, scoreTwo = 0, scoreTree = 0, averageValue = 0;
	cout << "\n\nEnter the points for the first attempt\n";
	cin >> scoreOne;
	cout << "Enter the points for the second attempt\n";
	cin >> scoreTwo;
	cout << "Enter the points for the third attempt\n";
	cin >> scoreTree;
	averageValue = (scoreOne + scoreTwo + scoreTree) / 3;
	cout << "The average value is: " << averageValue;*/



	// chapter 2

	//// 1
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
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber, tries = 0, guessedNumber;
	cout << "\tWelcome to Guess My Number\n\n";
	cout << "Enter an odd number: ";
	cin >> secretNumber;
	do {
		guessedNumber = rand() % 100;
		tries++;
		cout << "\ntry " << tries << " Number: " << guessedNumber;
		if (guessedNumber == secretNumber) {
			cout << "\nPC win";
			break;
		}
	} while (true);







	system("pause>nul");
	return 0;
}
