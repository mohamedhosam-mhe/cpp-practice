// Problem 11 to 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Problem 11 [ Check palindrom Number ] read from right to left same way 


int ReadPositiveNumber(string Message) {
	
	int Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}
int NumberReversed(int Number) {

	int Reminder = 0, ReversedNumber = 0;

	while (Number > 0) {

		Reminder = Number % 10;
		Number = Number / 10;
		ReversedNumber = ReversedNumber + Reminder;

		if (Number > 0) {

			ReversedNumber = ReversedNumber * 10;
		}
	}

	return ReversedNumber;
}

void PrintPalindromNumber(int ReversedNumber, int Number) {

	if (ReversedNumber == Number)
		cout << "Yes, it's palindrom number \n";
	else
		cout << "No, it's NOT palindrom number \n";
}  // we can make it bool function to check


// Problem 12 [ Print inverted Pattern ]


void PrintInvertedPattern(int Number) {

	for (int i = Number; i > 0; i--) {

		for (int b = 1; b <= i; b++) {

			cout << i;
		}
		
		cout << endl;
	}
}


// Problem 13 [ Print Number Pattern ] Same as 12 but ooposite order

void PrintNumberPattern(int Number) {

	for (int i = 1; i <= Number; i++) {

		for (int b = 1; b <= i; b++) {

			cout << i;
		}
		
		cout << endl;
	}
}

// Problem 14 [ Inverted Letter Pattern ]

void PrintInvertedLetterPattern(int Number) {

	for (int i = 65 + Number -1 ; i >= 65; i--) {

		for (int j = 1; j <= Number - (65 + Number - 1-i) ; j++) {

			cout << char(i);
		}
		
		cout << "\n";
	}
}


// Problem 15 [ Letter Pattern ]

void PrintLetterPattern(int Number) {


	for (int i = 65; i <= 65 + Number - 1; i++) {

		for (int j = 1; j <= i - 65 +1; j++) {

			cout << char(i);
		}

		cout << "\n";
	}

	
}








int main()
{


	// Problem 11 

	int Number = ReadPositiveNumber("Please Enter a Number To Check if it Palendrom : ");
	int ReversedNumber = NumberReversed(Number);

	PrintPalindromNumber(ReversedNumber, Number);

	cout << "********************************************************* \n\n\n";

	// Problem 12

	int InvertedPattern = ReadPositiveNumber("Please Enter a Number to make inverted pattern : ");

	PrintInvertedPattern(InvertedPattern);

	cout << "********************************************************* \n\n\n";

	// Problme 13 

	int NumberPattern = ReadPositiveNumber("Please Enter a Number to make Number pattern : ");

	PrintNumberPattern(NumberPattern);

	cout << "********************************************************* \n\n\n";

	// Problem 14

	int InvertedLetterPattern = ReadPositiveNumber("Please Enter a Number to make Inverted Letter pattern : ");

	PrintInvertedLetterPattern(InvertedLetterPattern);

	// Problem 15

	int LetterPattern = ReadPositiveNumber("Please Enter a Number to make  Letter pattern : ");

	PrintLetterPattern(LetterPattern);

}

