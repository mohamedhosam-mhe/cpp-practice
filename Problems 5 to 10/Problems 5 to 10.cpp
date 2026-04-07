// Problems 5 to 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Problem 6 [ Some of Digits ] like Problem 5, but I'll make it abuhadhud way 

int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int SumOfDigits(int Number) {

	int Reminder = 0, Sum = 0;

	while (Number > 0) {

		Reminder = Number % 10;
		Number = Number / 10;
		Sum += Reminder;

	}

	return Sum;
}

void PrinSumofDigits(int TotalSum) {

	cout << "Total Sum of Digits is : " << TotalSum << endl;
}



// Problem 7 [ Print Reversed Number ]

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

void PrintReversedNumber(int ReversedNumber) {

	cout << endl << ReversedNumber << endl;
}

// Problem 8 [ Print Frequency of Number ]

int FrequenceyOfDigit(int Number, int Digit) {

	int Reminder = 0, SumDigit = 0;

	while (Number > 0) {

		Reminder = Number % 10;
		Number = Number / 10;
		if (Reminder == Digit) {

			SumDigit++;
		}	
	}

	return SumDigit;
}


// Problem 9 [ Print all numbers frequencies ]


void PrintDigitstoCheckfrequency(int Number) {

	for (int i = 0; i < 10; i++) {

		int SumofFrequency;
		SumofFrequency = FrequenceyOfDigit(Number, i);
		
		if (SumofFrequency > 0) {

			cout << "Digit " << i << " Frequency is : " << SumofFrequency << endl;

		}
	}


}


// Problem 10 [ print Number from left to right line by line ]

void PrintDigitsInOrder(int Number) {

	int Reminder = 0;

	while (Number > 0) {

		Reminder = Number % 10;
		Number = Number / 10;
		cout << Reminder << endl;
	}
}







int main()
{
	//Problem 6
	int Number = ReadPositiveNumber("Please Entre Positive Number To Sum It's Digits : ");

	PrinSumofDigits(SumOfDigits(Number));

	cout << "**************************************************************** \n\n\n";


	// Problem 7

	int NumberToReverse = ReadPositiveNumber("Please Entre Positive Number To Get Back Reversed : ");

	PrintReversedNumber(NumberReversed(NumberToReverse));


	cout << "**************************************************************** \n\n\n";


	// Problem 8 

	int Number1 = ReadPositiveNumber("Please Entre Positive Number To Sum Specific Digit Digits : ");
	int Digit = ReadPositiveNumber("Please Enter The Digit You want to Count : ");
	int Frequency = FrequenceyOfDigit(Number1, Digit);
	cout << "Digit " << Digit << " Frequency is : " << Frequency << endl;


	cout << "**************************************************************** \n\n\n";

	// Problem 9

	int Number2 = ReadPositiveNumber("Please Entre Positive Number To Sum All Digit Digits : ");

	PrintDigitstoCheckfrequency(Number2);

	cout << "**************************************************************** \n\n\n";

	// Problem 10

	PrintDigitsInOrder(NumberReversed(ReadPositiveNumber("Enter a Number to reverse in order")));



}

