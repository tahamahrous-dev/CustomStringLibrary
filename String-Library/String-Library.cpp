// String-Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
  
	clsString S1;
	clsString S2("Taha");

	S1.Value = "Mahrous Saleh";


	cout << "S1 = " << S1.Value << endl;
	cout << "S2 = " << S2.Value << endl;


	cout << "Number Of Words: " << S1.CountWords() << endl;
	cout << "Number Of Words: " << S1.CountWords("Mohammed Squer Abu-Hdahoud") << endl;
	cout << "Number Of Words: " << clsString::CountWords("Custom String Library C++") << endl;




    clsString S3("hi how are you?");

    cout << "\nS 3 = " << S3.Value << endl;
    cout << "String Length = " << S3.Length() << endl;

     S3.PrintFirstLetterOfEachWord();

    S3.UpperFirstLetterOfEachWord();
    cout << S3.Value << endl;

    S3.LowerFirstLetterOfEachWord();
    cout << S3.Value << endl;

    S3.UpperAllString();
    cout << S3.Value << endl;

    S3.LowerAllString();
    cout << S3.Value << endl;



    cout << "\nAfter Inverting a : " << clsString::InvertLetterCase('a') << endl;

    S3.Value = "AbCdEfg";

    S3.InvertAllLettersCase();
    cout << S3.Value << endl;




    cout << "\nCapital Letters Count : "
        << clsString::CountLetters("Abderrazzak Rachedi", clsString::CapitalLetters) << endl;

    S3.Value = "Welcome to Yemen every one";
    cout << "\nString 3 = " << S3.Value << endl;

    cout << "Capital Letters Count :" << S3.CountCapitalLetters() << endl;
    cout << "Small Letters Count :" << S3.CountSmallLetters() << endl;


    cout << "Vowels Count :" << S3.CountVowels() << endl;
    S3.PrintAllVowels();

    cout << "\nLetter E(e)Count :" << S3.CountSpecificLetter('E', false) << endl;
    cout << "Is Letter A Vowel? " << clsString::IsVowel('a') << endl;

    cout << "Words Count : " << S3.CountWords() << endl;
    S3.PrintWords();



    vector<string> vString = S3.Split();

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }


    //Tirms
    S3.Value = "    Abderrazzak Rachedi     ";
    cout << "\nString     = " << S3.Value;

    S3.Value = "    Abderrazzak Rachedi     ";
    S3.TrimLeft();
    cout << "\n\nTrim Left  = " << S3.Value;

    S3.Value = "    Abderrazzak Rachedi     ";
    S3.TrimRight();
    cout << "\nTrim Right = " << S3.Value;

    S3.Value = "    Abderrazzak Rachedi     ";
    S3.Trim();
    cout << "\nTrim       = " << S3.Value;



    //Joins
    vector <string> vString1 = { "Mohammed","Taha","Hassania","Abderrazzak" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1);


    string arrString[] = { "Mohammed","Taha","Hassania","Abderrazzak" };

    cout << "\n\nJoin String From Array: \n";
    cout << clsString::JoinString(arrString, 4);



    S3.Value = "Taha Rachedi Abu-Hahdoud";
    cout << "\n\nString     = " << S3.Value;

    S3.ReverseWordsInString();
    cout << "\nReverse Words : " << S3.Value << endl;


    S3.Value = "Taha Rachedi Abu-Hahdoud";
    S3.ReplaceWord("Abu-Hahdoud", "Sbe3");
    cout << "\nReplace : " << S3.Value << endl;



    S3.Value = "A comprehensive **console-based banking system** with secure user authentication.";
    cout << "\nString     = " << S3.Value;

    S3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << S3.Value << endl;



	system("pause >0");
	return 0;
}