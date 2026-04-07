// Problems 16 to 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;




// Problem 16 [ Print All Words from AAA to ZZZ ] 

//void PrintAllLetters() {
//
//	string word = "";
//
//	for (int i = 65; i <= 90; i++) {
//
//		for (int j = 65; j <= 90; j++) {
//
//			for (int b = 65; b <= 90; b++) {
//				
//				word = word + char(i);
//				word = word + char(j);
//				word = word + char(b);
//
//				cout << word << endl;
//
//				word = "";
//				
//			}
//		}
//		
//	}	
//
//}

// Problem 17 [ Guess 3 letters Password ] User Prints the password and we are trying to guess it using previous question

string UserInput(string Message) {

	string UserPassword;

	cout << Message << endl;
	cin >> UserPassword;

	return UserPassword;
}

bool PasswordGuesser(string UserPassword) {

	int Trails = 0; 
	string word = "";

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int b = 65; b <= 90; b++) {

				word = word + char(i);
				word = word + char(j);
				word = word + char(b);
				
				Trails++;
				cout << "Trail [" << Trails << "]  :  " << word << endl;

				if (word == UserPassword) {

					cout << "\n\n\nPassword is : " << word << endl << "Found after  " << Trails << "  Trail(s) \n";

					return true;
					break;
				}

				word = "";

			}
		}
	}
}


//Problem 18 [ Encrypt / Decrypt Text ]


string EncryptText(string Text, short EncryptionKey) {

	string EncryptedText = "";
	for (int i = 0; i <= Text.length(); i++) {

		Text[i] = char((int)Text[i] + EncryptionKey);
		EncryptedText = EncryptedText + Text[i];
	}

	return EncryptedText;
}

string DecryptText(string Text, short EncryptionKey) {

	string DecryptedText;
	for (int i = 0; i <= Text.length(); i++) {

		Text[i] = char((int)Text[i] - EncryptionKey);
		DecryptedText = DecryptedText + Text[i];
	}

	return DecryptedText;
}

// Problem 19 [ Random 3 Numbers from 1 to 10]

int RandomNumber(int From, int To) {

	int randNumber = rand() % (To - From + 1) + From;

	return randNumber;
}


//Problem 20 [ generate random small letter, capital letter, special c, digit in order ]


enum enType	{ SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enType UserType) {

	int RandNumber;
	char answer;

	if (enType::SmallLetter == UserType) {

		RandNumber = RandomNumber(97, 122);
		return char(RandNumber);
	}
	else if (enType::CapitalLetter == UserType) {

		RandNumber = RandomNumber(65, 90);
		return char(RandNumber);
	}
	else if (enType::SpecialCharacter == UserType) {

		RandNumber = RandomNumber(33, 47);
		return char(RandNumber);
	}
	else {

		RandNumber = RandomNumber(48, 57);
		return char(RandNumber);
	}

}









int main()
{


	// Problem 16 

	//PrintAllLetters();


	// Problem 17

	PasswordGuesser(UserInput("Please Enter Password 3 Letters ( All Capital ) "));

	cout << "**********************************************\n\n\n";

	// Problem 18

	short EncryptionKey = 2;

	string UserText = UserInput("Please Enter Any Text");
	string EncryptedText = EncryptText(UserText, EncryptionKey);
	string DecryptedText = DecryptText(EncryptedText, EncryptionKey);

	cout << "Text Before Encryption : " << UserText << endl;
	cout << "Text After Encryption : " << EncryptedText << endl;
	cout << "Text After Decryption : " << DecryptedText << endl; 

	cout << "**********************************************\n\n\n";


	// Problem 19

	// Seeds the random number generator in C++ , Called only once 
	// this code we must type to let random generator gives us different generations every execution

	srand((unsigned)time(NULL));

	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	
	cout << "**********************************************\n\n\n";


	// Problem 20 

	cout << GetRandomCharacter(enType::SmallLetter) << endl;
	cout << GetRandomCharacter(enType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enType::Digit) << endl;





}

