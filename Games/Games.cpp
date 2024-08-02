#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251>nul");

	// chapter 1

	// 1
	int survivos, lives, score;
	int i, b, x;

	// 2
	cout << "Seven divided by three is " << 7 / 3 << endl;
	cout << "Seven divided by three is " << 7.0 / 3 << endl;
	cout << "Seven divided by three is " << 7.0 / 3.0 << endl;

	// 3 
	int scoreOne = 0, scoreTwo = 0, scoreTree = 0, averageValue = 0;
	cout << "\n\nEnter the points for the first attempt\n";
	cin >> scoreOne;
	cout << "Enter the points for the second attempt\n";
	cin >> scoreTwo;
	cout << "Enter the points for the third attempt\n";
	cin >> scoreTree;
	averageValue = (scoreOne + scoreTwo + scoreTree) / 3;
	cout << "The average value is: " << averageValue;

	system("pause>nul");
	return 0;
}
