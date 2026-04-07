// Problems 31 to 35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandomGenerator(int From, int To) {

	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;

}

// Problem 31 [ Shuffel Ordered Array ]

void SwapNumbers(int& Num1, int& Num2) {

	int Temp;

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

}

int ReadPositiveNumber(string Message) {

	int Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void OrderedArrayToN(int OrderedArray[100],int UserInput) {

	for (int i = 0; i < UserInput; i++) {

		OrderedArray[i] = i + 1;
	}
}

void PrintArrayElements(int Array[100], int UserInput) {

	for (int i = 0; i < UserInput; i++) {

		cout << Array[i] << " ";
	}

	cout << "\n";
}

void ShuffelArray(int OrderedArray[100], int UserInput) {

	for (int i = 0; i < UserInput; i++) {

		 SwapNumbers(OrderedArray[RandomGenerator(1, UserInput)-1], OrderedArray[RandomGenerator(1, UserInput) - 1 ]);
	}

}



// Problem 32 [ Copy array in reverse order ]

void GetRandomArray(int Array[100], int ArrayLength) {

	for (int i = 0; i < ArrayLength; i++) {

		Array[i] = RandomGenerator(1, 100);
	}
}

void GetReverseArray(int Array[100],int ReverseArray[100], int ArrayLength) {

	for (int i = 0; i < ArrayLength; i++) {

		ReverseArray[i] = Array[ArrayLength - 1-i];
	}
}


//Problem 33 [ Fill Array with keys ]

string GetKeys(int Number) {
	string Key = "";
	int Counter = 0;

	for (int i = 1; i <= Number; i++) {

		Counter++;

		for (int j = 1; j <= 4; j++) {

			for (int b = 1; b <= 4; b++) {

				Key = Key + char(RandomGenerator(65, 90));
			}

			if (j == 4)
				Key = Key;
			else
				Key = Key + "-";
		}


		return Key;

		Key = "";
	}
}

void FillKeysByInput(string KeysArray[100], int UserInput) {


	for (int i = 0; i < UserInput; i++) {

		KeysArray[i] = GetKeys(UserInput);

	}
}

void PrintKeysArray(string KeysArray[100], int UserInput) {

	cout << "Array Elements : \n\n\n";

	for (int i = 0; i < UserInput; i++) {

		cout << "Array [" << i << "] : " << KeysArray[i] << endl;
	}
}


// Problem 34 [ Return number index in array ]

int GetNumberIndexInArray(int Array[100], int ArrayLength,int& UserNumber) {

	
	cout << "Please enter a number to look for : \n";
	cin >> UserNumber;

	for (int i = 0; i < ArrayLength; i++) {

		if (UserNumber == Array[i]) {
			
			return i;

		}
	
	}

	return 0;
}


void PrintNumberIndex(int Index, int UserNumber) {

	cout << "Number you are looking for is : " << UserNumber << endl;

	if (Index == 0) {

		cout << "The Number is not found :( \n";
		
	}
	else {

		cout << "The Number found at position : " << Index << endl;
		cout << "The Number order is : " << Index + 1 << endl;
	}

}



// Problem 35 [ Check Number in array ] based on 34


bool CheckNumberInArray(int Index) {

	if (Index != 0) {

		return 1;
	}
	else {

		return 0;
	}
}



// Problem 36 [ 







int main()
{
	// This is to seed rand function
	srand((unsigned)time(NULL));


	// Problem 31

	int OrderedArray[100];
	int UserInput = ReadPositiveNumber("Please Enter how many numbers you want in the array : \n");

	OrderedArrayToN(OrderedArray, UserInput);

	cout << "Array Elements Before Shuffel : \n";

	PrintArrayElements(OrderedArray, UserInput);


	ShuffelArray(OrderedArray, UserInput);

	cout << "\nArray Elements After Shuffel : \n";

	PrintArrayElements(OrderedArray, UserInput);


	cout << "\n\n*****************************************************\n\n\n\n";

	// Problem 32


	int RandomArray[100], ReverseRandomArray[100], ArrayLength;

	ArrayLength = ReadPositiveNumber("Please Enter Array Length");

	GetRandomArray(RandomArray, ArrayLength);

	cout << "Array 1 Elements : \n";
	PrintArrayElements(RandomArray, ArrayLength);

	GetReverseArray(RandomArray, ReverseRandomArray, ArrayLength);

	cout << "Array 2 Elements after copying array 1 in Reverse order : \n";

	PrintArrayElements(ReverseRandomArray, ArrayLength);


	cout << "\n\n*****************************************************\n\n\n\n";

	

	//Problem 33

	string KeysArray[100];
	int KeysNumber = ReadPositiveNumber("Please enter how many keys you want : \n");

	FillKeysByInput(KeysArray, KeysNumber);
	PrintKeysArray(KeysArray, KeysNumber);


	cout << "\n\n*****************************************************\n\n\n\n";


	// Problem 34


	int Array1[100], UserNumber;

	int NumberOfElements = ReadPositiveNumber("Please Enter many elements you want : \n");

	GetRandomArray(Array1, NumberOfElements);

	cout << "Array 1 Elements : \n";
	PrintArrayElements(Array1, NumberOfElements);

	int Index = GetNumberIndexInArray(Array1, NumberOfElements, UserNumber);

	PrintNumberIndex(Index, UserNumber);

	cout << "\n\n*****************************************************\n\n\n\n";



	// Problem 35 

	if (CheckNumberInArray(Index)) {

		cout << "Yes, the number is found \n";
	}
	else {
		cout << "No, the number is NOT found :-( \n";
	}


	// Problem 36 






}

