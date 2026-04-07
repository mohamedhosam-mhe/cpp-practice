// Problems 21 to 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int RandomGenerator(int From, int To) {

	int RandomNumber;

	RandomNumber = rand() % (To - From - 1) + From;

	return RandomNumber;
}

// Problem 21 [ Generate keys on User input ] keys is 16 capital characters every 4 separated by -

int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message ;
		cin >> Number;
	} while (Number < 0);

	return Number;
}


void PrintKeys(int Number) {
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
		
		
		cout << "Key [" << Counter << "] : " << Key << endl;

		Key = "";
	}
}


// Problem 22 [ Repeated Element Count in Array ]


void EnterArrayElements(int ArrayEntery[100], int& ArrayLength) {
	
	cout << "Enter The Number of Elements : " << endl;
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++) {

		cout << "Elemnent [" << i+1 << "] : ";
		cin >> ArrayEntery[i];

	}

	
}

void PrintArray(int ArrayEntery[100], int ArrayLength) {

	cout << "Original array : ";
	for (int i = 0; i < ArrayLength; i++) {

		cout << ArrayEntery[i] << " ";
	}

	cout << "\n";
}


int NumberRepeated(int NumberToCheck,int ArrayEntery[100], int ArrayLength) {

	int counter = 0;

	for (int i = 0; i < ArrayLength; i++) {

		if (ArrayEntery[i] == NumberToCheck) {

			counter++;
		}

	}

	return counter;
}



// Problem 23 [ Fill array with random numbers from 1 to 100 ] User input how many number should be in the array


int GetArrayElements(int ArrayElements[100], int UserInput) {

	for (int i = 0; i < UserInput; i++) {

		ArrayElements[i] = RandomGenerator(1, 100);
		
	}

	return ArrayElements[100];

}


void PrintArrayElements(int ArrayElements[100], int UserInput) {


	for (int i = 0; i <= UserInput - 1; i++) {

		cout << ArrayElements[i] << " ";
		
	}

	cout << "\n";
}


// Program 24 [ Max of Random Array ]

int CheckMaxOfArray(int ArrayElements[100], int UserInput) {

	int Max =0;

	for (int i = 0; i <= UserInput-1; i++) {

		if (ArrayElements[i] > Max) {

			Max = ArrayElements[i];
		}

	}

	return Max;
}



// Problem 25 [ Min of random array ]

int CheckMinOfArray(int ArrayElement[100], int UserInput) {

	int Min = ArrayElement[0];

	for (int i = 0; i <= UserInput-1; i++) {

		if (ArrayElement[i] < Min) {

			Min = ArrayElement[i];
		}

	}

	return Min;
}


// Problem 26 [ Sum of Random Array ]


int SumOfRandomArray(int ArrayElement[100], int UserInput) {

	int Sum = 0;

	for (int i = 0; i <= UserInput - 1; i++) {

		Sum = Sum + ArrayElement[i];
	}

	return Sum;
}


// Problem 27 [ Average of random array ]

float AvgOfRandomArray(int ArrayElements[100], int UserInput) {

	return (float)SumOfRandomArray(ArrayElements, UserInput) / UserInput;
}



// Problem 28 [ Copy of Array ]


void CopyOfArrayElements(int ArrayElement[100], int SecondArrayElement[100], int UserInput) {


	for (int i = 0; i < UserInput; i++) {

		SecondArrayElement[i] = ArrayElement[i];
	}


}



// 29 [ print Prime numbers in array 


bool PrimeNotPrime(int Number) {

	if (Number == 1) {

		return false;
	}


	for (int i = 2; i * i < Number; i++) {
		
		if (Number % i == 0) {

			return false;
		}
		else {
			return true;
		}

	}

}


void GetPrimArray(int ArrayElements[100], int PrimArray[100], int UserInput, int& CounterPrime) {

	

	for (int i = 0; i < UserInput; i++) {

		if (PrimeNotPrime(ArrayElements[i])) {

			PrimArray[CounterPrime] = ArrayElements[i];

			CounterPrime++;

		}
	}
}



// Problem 30 [ Sum of 2 arrays to third one ]


void SumOfTwoArrays(int ArrayElements[100], int AnotherArrayElements[100], int SumArray[100], int UserInput) {

	for (int i = 0; i < UserInput; i++) {

		SumArray[i] = ArrayElements[i] + AnotherArrayElements[i];
	}
}










int main()
{
	// This for seeding generating numbers 
	srand((unsigned)time(NULL));


	// Problem 21

	PrintKeys(ReadPositiveNumber("How many keys you want : \n"));

	cout << "*******************************************************\n\n\n";

	// Problem 22

	int ArrayEntery[100], ArrayLenght, NumberToCheck;


	
	EnterArrayElements(ArrayEntery,ArrayLenght);

	PrintArray(ArrayEntery, ArrayLenght);

	NumberToCheck = ReadPositiveNumber("Enter the number you want to check : ");

	cout << endl << NumberToCheck << " is repeated " << NumberRepeated(NumberToCheck, ArrayEntery, ArrayLenght) << " time(s) \n";


	cout << "*******************************************************\n\n\n";


	// Problem 23 

	int ArrayElements[100]; 
	int UserInput = ReadPositiveNumber("Please Enter a number to generate numbers in elements : \n");

	GetArrayElements(ArrayElements, UserInput);
	
	cout << "Array Elements : ";

	PrintArrayElements(ArrayElements, UserInput);

	cout << "*******************************************************\n\n\n";

	// Problem 24 

	// We will consider it continue of Porblem 23 so will continue on this because its same steps

	cout << "Max Number is : " << CheckMaxOfArray(ArrayElements, UserInput) << endl;


	cout << "*******************************************************\n\n\n";


	// Problem 25 
	// We will consider it continue of Porblem 23 so will continue on this because its same steps


	cout << "Min Number is : " << CheckMinOfArray(ArrayElements, UserInput) << endl;

	cout << "*******************************************************\n\n\n";


	// Problem 26 


	cout << "Sum of the Array Elements =  " << SumOfRandomArray(ArrayElements, UserInput) << endl;


	cout << "*******************************************************\n\n\n";


	// Problem 27 

	cout << "Average of Array Elements = " << AvgOfRandomArray(ArrayElements, UserInput) << endl;

	cout << "*******************************************************\n\n\n";

	// Problem 28 

	int SecondArray[100];

	CopyOfArrayElements(ArrayElements, SecondArray, UserInput);

	cout << "Array 2 Elements after Copy : ";

	PrintArrayElements(SecondArray, UserInput);

	cout << "*******************************************************\n\n\n";

	// Problem 29

	int PrimeArray[100];
	int PrimeCounter = 0;

	GetPrimArray(ArrayElements, PrimeArray, UserInput,PrimeCounter);

	cout << "Prime numbers in array 2 : ";
	PrintArrayElements(PrimeArray, PrimeCounter);

	cout << "*******************************************************\n\n\n";


	// Problem 30

	int AnotherArrayElements[100], SumArray[100];

	GetArrayElements(AnotherArrayElements, UserInput);

	SumOfTwoArrays(ArrayElements, AnotherArrayElements, SumArray, UserInput);

	cout << "Array 2 Elements : ";

	PrintArrayElements(AnotherArrayElements, UserInput);

	cout << "*******************************************************\n\n\n";
	 
	cout << "Sum of Array 1 and Array 2 : ";
	PrintArrayElements(SumArray, UserInput);

	cout << "*******************************************************\n\n\n";


}

