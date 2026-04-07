// Problems 36 to 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


// Problem 36 [ Add array element semi-dynamic ]

int ReadPositiveNumber(string Message)  {

	int Number;
	do {

		cout << Message;
		cin >> Number;

	} while (Number < 0);
	

	return Number;
}

int ReadNumber() {
	int Number;
	cout << "Please Add Number :  \n";
	cin >> Number;

	return Number;
}

void PrintArrayElements(int Arr[100], int ArrLength) {

	for (int i = 0; i < ArrLength; i++) {

		cout << Arr[i] << " ";
	}
}


void AddArrayElements(int Number, int Array[100], int& ArrLength) {
	ArrLength++;
	Array[ArrLength - 1] = Number;
}
void InputUserNumberInArray(int Array1[100], int& ArrLength) {

	bool Addmore = true;

	do {

		AddArrayElements(ReadNumber(), Array1, ArrLength);

		cout << "Do you want to add more numbers : [0] No , [1] yes ? \t";
		cin >> Addmore;
	} while (Addmore);

}



// Problem 37 [ fill array of random numbers [100] and copy it using to another array using add array element function ]


int RandomGenerator(int From, int To) {

	int RandomNumber;

	RandomNumber = rand() % (To - From - 1) + From;

	return RandomNumber;
}



void FillArrayWithRandomNumbers(int Array[100], int ArrLength) {

	for (int i = 0; i < ArrLength; i++) {

		Array[i] = RandomGenerator(1, 100);
	}
}


void CopyArrayElementsUsingAddElementFunction(int Array[100], int CArray[100], int ArrayLength, int& ArrayDestenationLength) {
	
	for (int i = 0; i < ArrayLength; i++) {
		
		AddArrayElements(Array[i], CArray, ArrayDestenationLength);
	}
}



// Problem 38 [ make a random array like last problem and only copy the odd numbers ]


// We will use the generated array from last problem 

bool CheckOdd(int Number) {

	if (Number % 2 == 0) {

		return 0;
	}
	else {
		return 1;
	}

}


void CopyOnlyOddNumbersArray(int SourceArr[100], int DestinationArr[100], 
	int SourceArrayLength, int& DestinationArrayLength) {

	for (int i = 0; i < SourceArrayLength; i++) {
		
		if (CheckOdd(SourceArr[i])) {

			AddArrayElements(SourceArr[i], DestinationArr, DestinationArrayLength);
		}

	}

}


// Problem 39 [ make a random array like last problem and only copy the Prime numbers ]



bool CheckPrime(int Number) {

	if (Number < 2) {

		return 0;
	}

	for (int i = 2; i < sqrt(Number); i++) {


		
		if (Number % i == 0) {

			return 0;
		}
	}

	return 1;
}


void CopyPrimeArray(int SourceArr[100], int PrimeArray[100], int SourceArrayLength, int& PrimeArrayLength) {

	for (int i = 0; i < SourceArrayLength; i++) {
		if (CheckPrime(SourceArr[i])) {

			AddArrayElements(SourceArr[i], PrimeArray, PrimeArrayLength);
		}
	}
}



// Problem 40 [ Fill array with number manually and then make a copy of distincit numbers only ]


// we will use above functions to make our array 

bool CheckAvailability(int Number, int Array[100],int ArrayLength) {

	for (int i = 0; i < ArrayLength; i++) {

		if (Array[i] == Number) {

			return 0;
		}
	}

	return 1;
}

void FillDistinctiArray(int NewArray[100], int DistincitArray[100], int ArrayLength, int& ArrayDestenationLength) {
	
	
	for (int i = 0; i < ArrayLength; i++) {

		if (CheckAvailability(NewArray[i], DistincitArray, ArrayLength)) {

			AddArrayElements(NewArray[i], DistincitArray, ArrayDestenationLength);
		}
	}


}








int main()
{

	// This for seeding the rand function to get new generations every time 
	srand((unsigned)time(NULL));




	int Array1[100];
	int ArrLength = 0;

	InputUserNumberInArray(Array1, ArrLength);
	
	cout << "Array Length : " << ArrLength << endl;

	PrintArrayElements(Array1, ArrLength);


	cout << "\n\n\n ********************************************************************\n\n\n";
	// Problem 37


	int InputArrayLength = ReadPositiveNumber("Please Enter a Number to use as array length : \t");

	int Array[100], CArray[100];

	int DestinationArrayLength = 0;


	FillArrayWithRandomNumbers(Array, InputArrayLength);

	CopyArrayElementsUsingAddElementFunction(Array, CArray, InputArrayLength,DestinationArrayLength);


	cout << "Array 1 Elements : \n\n";

	PrintArrayElements(Array, InputArrayLength);

	cout << "\n\nArray 2 Elements : \n";

	PrintArrayElements(CArray, DestinationArrayLength);

	cout << "\n\n\n ********************************************************************\n\n\n";


	// Problem 38



	int DestinationArrayLengthOdd = 0;
	
	int OddArray[100];



	CopyOnlyOddNumbersArray(Array, OddArray, InputArrayLength, DestinationArrayLengthOdd);

	cout << "First Array with all Numbers : \n\n";

	PrintArrayElements(Array, InputArrayLength);

	
	cout << "\n\nSecond Array with Only Odd Numbers : \n\n";

	PrintArrayElements(OddArray, DestinationArrayLengthOdd);


	cout << "\n\n\n ********************************************************************\n\n\n";


	// Problem 39

	int PrimeArrayLength = 0;

	int PrimeArray[100];


	CopyPrimeArray(Array, PrimeArray, InputArrayLength, PrimeArrayLength);

	cout << "This is The first array : \n\n";

	PrintArrayElements(Array, InputArrayLength);


	cout << "\nThis is the Prime Numbers ONLY : \n\n";

	PrintArrayElements(PrimeArray, PrimeArrayLength);


	cout << "\n\n\n ********************************************************************\n\n\n";




	// Problem 40

	int NewArray[100], DistincitArray[100], NewArrayLength=0, DistincitArrayLength=0;


	InputUserNumberInArray(NewArray, NewArrayLength);


	FillDistinctiArray(NewArray, DistincitArray, NewArrayLength, DistincitArrayLength);


	cout << "\n\n Array 1 Elements : \n";

	PrintArrayElements(NewArray, NewArrayLength);

	cout << "\n\n Array 1 Distincit Elements : \n";

	PrintArrayElements(DistincitArray, DistincitArrayLength);






}

