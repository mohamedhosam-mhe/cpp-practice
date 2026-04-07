// Problems 1 to 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Problem 1  [ Multiplication Table ]

void PrintHeaderAndIndex() {

	cout << "\t\t\t Multiplication Table From 1 to 10 \n";

	for (int i = 1; i <= 10; i++) {

		cout << "\t" << i;
	}
	cout << "\n--------------------------------------------------------------------------------------\n";
}

void PrintMultiplicationTabel() {

	for (int Index = 1; Index <= 10; Index++) {

		if(Index == 10)
			cout << Index << " |";
		else
			cout << Index << "  |";


		for (int Table = 1; Table <= 10; Table++) {

			cout << "\t" << Table * Index;
		}

		cout << endl;
	}
}


//Problem 2 [ Print all prime numbers from 1 to N ]


enum enPrimNotPrim { Prime = 1, NotPrime =2 };

int ReadPositveNumber(string Message) {

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

enPrimNotPrim CheckPrime(int Number) {

	if (Number == 1)
		return enPrimNotPrim::NotPrime;


	for (int i = 2; i*i <= Number; i++) {
	
		if (Number % i == 0)
			return enPrimNotPrim::NotPrime;
		
			
	}

	return enPrimNotPrim::Prime;
}

void PrintCheckPrimeToN(int Number) {

	cout << "Prime Numbers From 1 to " << Number << "  :\n";
	cout << "-------------------------------------------------\n";

	for (int i = 1; i <= Number; i++) {

		if (CheckPrime(i) == enPrimNotPrim::Prime)

			cout << i << endl;
		
	}
}


// Problem 3 [ Check Perfect Number ]

enum enPerfectNumber {Perfect =1, NotPerfect =2};

int SumDividors(int Number) {

	int TotalSums = 0;

	for (int i = 1; i < Number; i++) {
		
		if (Number % i == 0) {

			TotalSums += i;
		}
	}
	return TotalSums;
}

enPerfectNumber CheckPerfectNumber(int TotalSums, int Number) {

	if (TotalSums == Number)
		return enPerfectNumber::Perfect;
	else
		return enPerfectNumber::NotPerfect;
}

void PrintPerfectNumber(enPerfectNumber PerfectNumber) {

	if (PerfectNumber == enPerfectNumber::Perfect)
		cout << "This is a Perfect Number . \n";
	else
		cout << "This is NOT a Perfect Number . \n";
}


// Problem 4 [ Check Perfect Numbers from 1 to N ]
// We will use last questions function and improve it 

void PrintPerfectNumbersToN(int Number) {

	for (int i = 1; i <= Number; i++) {

		enPerfectNumber CheckPerfect = CheckPerfectNumber(SumDividors(i), i);

		if (CheckPerfect == enPerfectNumber::Perfect)

			cout << i << endl;
	}

}

// Problem 5 [ Print Number in reverse order ] 1234 --> 4 3 2 1

void PrintNumberInReverse(int Number) {

	string NumberToString = to_string(Number);

	for (int i = NumberToString.length() - 1; i >= 0 ; i--) {

		cout << NumberToString[i] << endl;
	}
}







int main()
{

	// Problem 1 

	
	PrintHeaderAndIndex();
	PrintMultiplicationTabel();

	cout << "*****************************************************************************\n";

	// Problem 2 



	int Number = ReadPositveNumber("Please Enter a number : ");

	PrintCheckPrimeToN(Number);

	
	// Problem 3 


	int Perfect = ReadPositveNumber("Please Enter a Number To Check its Perfect Number or Not : ");

	PrintPerfectNumber(CheckPerfectNumber(SumDividors(Perfect),Perfect));

	// Problem 4

	int PerfectToN = ReadPositveNumber("Please Enter a Number To Check its Perfect Number or Not ( 1 to N ) : ");

	PrintPerfectNumbersToN(PerfectToN);

	// Problem 5 

	PrintNumberInReverse(ReadPositveNumber("Please Enter Number to Write in Reverse : "));
	
}

