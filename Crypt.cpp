// Crypt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <array>

using namespace std;

string encode(string);


int main()
{
	string mainMessage;
	int ed;


	//cout << "Are you \n1) encoding \n2) decoding?\n\n(Type 1 or 2)\n";
	//cin >> ed;
	cout << "\n\nWhat is your message?\n";
	getline(cin, mainMessage);
	encode(mainMessage);

    return 0;
}

string encode(string mainMessage)
{
	string message;
	char key;
	int strlength = strlen(mainMessage.c_str());
	char messageDecoded[999];

	for (int i = 0; i < strlength; i++)
	{
		messageDecoded[i] = mainMessage.at(i);
		cout << mainMessage.at(i);
	}

	cout << "\n\nWhat is your key letter?\n";
	cin >> key;

	if (key == 'a' || 'A')
	{
		cout << "Yay!";
	}
	if (key == 'b' || 'B')
	{
		cout << "Also Yay!";
	}
	
	return message;
}