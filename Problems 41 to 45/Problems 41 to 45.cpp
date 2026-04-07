// Problems 41 to 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


// Check if Array is palendrom or NOT ( Palendrom means to read it from the beginning to the last and opposite wise the same 

// like 10 10 30 10 10


int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);
	

	return Number;
}

void FillArray(int Array[100], int& ArrayLength) {

	ArrayLength = 6;

	Array[0] = 10;
	Array[1] = 20;
	Array[2] = 30;
	Array[3]= 30;
	Array[4]= 20;
	Array[5]= 10;
}


void PrintArray(int Array[100], int ArrayLength) {

	for (int i = 0; i < ArrayLength; i++) {

		cout << Array[i] << " ";
	}

	cout << "\n";
}


bool IsPalindromArray(int Array[100], int ArrayLength) {

	for (int i = 0; i < ArrayLength; i++) {

		if (Array[i] != Array[ArrayLength - i - 1]) {

			return false;
		}
	}

	return true;

}




// Problem 42 [ Count Odd Numbers in Array ]


int ReadNumber() {

	int Number;

	cout << "Please Add Number : \t";
	cin >> Number;

	return Number;
}

int RandomNumberGenerator(int From, int To) {

	int Number = rand() % (To - From +1) + From;
	
	return Number;
}

void FillArrayWithRandomNumbers(int Array[100], int ArrayLength) {


	for (int i = 0; i < ArrayLength; i++) {

		Array[i] = RandomNumberGenerator(1, 100);	

	}

}


int CalculateOddInArray(int Array[100], int ArrayLength) {


	int Result = 0;

	for (int i = 0; i < ArrayLength; i++) {

		if (Array[i] % 2 != 0) {

			Result += Array[i];
		}
	}

	return Result;
}



// Problem 43 [ Count Even Numbers in Array ]

// We will use the last array also to count even


int CalculateEvenInArray(int Array[100], int ArrayLength) {


	int Result = 0;

	for (int i = 0; i < ArrayLength; i++) {

		if (Array[i] % 2 == 0) {

			Result += Array[i];
		}
	}

	return Result;
}



// Problem 44 [ Count only positive numbers ]


void FillArrayWithRandomNumbersIncludeNegative(int Array[100], int ArrayLength) {


	for (int i = 0; i < ArrayLength; i++) {

		Array[i] = RandomNumberGenerator(-100, 100);

	}

}


int CalculatePositiveInArray(int Array[100], int ArrayLength) {


	int Result = 0;

	for (int i = 0; i < ArrayLength; i++) {

		if (Array[i] >= 0) {

			Result += Array[i];
		}
	}

	return Result;
}



// Problem 45 [ Count only negative numbers ]

// we will use previous array 



int CalculateNegativeInArray(int Array[100], int ArrayLength) {


	int Result = 0;

	for (int i = 0; i < ArrayLength; i++) {

		if (Array[i] < 0) {

			Result += Array[i];
		}
	}

	return Result;
}






int main()
{


	// This too seed the rand function

	srand((unsigned)time(NULL));



	// Problem 41
	

	int Array1[100], ArrayLength;

	FillArray(Array1, ArrayLength);

	PrintArray(Array1, ArrayLength);

	if (IsPalindromArray(Array1, ArrayLength)) {

		cout << "\nThis is Palindrom Array.\n";
	}
	else {

		cout << "\n NOT Palindrom Array. \n";
	}


	cout << "\n\n\n ***************************************************************************  \n\n\n";



	// Problem 42


	int RandomArray[100];

	int RandomArrayLength = ReadPositiveNumber("Please Enter how many elements you want in the array : ");

	FillArrayWithRandomNumbers(RandomArray, RandomArrayLength);


	cout << "Array Elements : ";
	PrintArray(RandomArray, RandomArrayLength);

	cout << "Odd Number Count is  : \t";

	cout << CalculateOddInArray(RandomArray, RandomArrayLength) << endl;


	cout << "\n\n\n ***************************************************************************  \n\n\n";
	 

	// Problem 43 

	cout << "Even Numbers Count is : \t";

	cout << CalculateEvenInArray(RandomArray, RandomArrayLength) << endl;



	cout << "\n\n\n ***************************************************************************  \n\n\n";




	// Problem 44 


	int ArrayPositiveNegative[100];

	int ArrayPostitiveNegativeLength = ReadPositiveNumber("Please Enter How many numbers to fill positive negative array : ");

	FillArrayWithRandomNumbersIncludeNegative(ArrayPositiveNegative, ArrayPostitiveNegativeLength);

	cout << "Array Elements : \t";

	PrintArray(ArrayPositiveNegative, ArrayPostitiveNegativeLength);

	cout << "Positive Number Count is : \t ";

	cout << CalculatePositiveInArray(ArrayPositiveNegative, ArrayPostitiveNegativeLength) << endl;


	cout << "\n\n\n ***************************************************************************  \n\n\n";



	// Problem 45 

	
	cout << "Negative Number Count is : \t ";

	cout << CalculateNegativeInArray(ArrayPositiveNegative, ArrayPostitiveNegativeLength) << endl;




}

