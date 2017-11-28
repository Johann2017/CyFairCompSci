// Crypt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <array>

using namespace std;

string encode(string);
string decode(string);

int main()
{
	string mainMessage;
	int ed;

	cout << "Are you \n1) encoding \n2) decoding?\n\n(Type 1 or 2)\n";
	cin >> ed;
	cin.ignore();
	cout << "\n\nWhat is your message?\n";
	getline(cin, mainMessage);
	if (ed == 1)
	{
		encode(mainMessage);
	}
	if (ed==2)
	{ 
		decode(mainMessage);
	}


	return 0;
}

string encode(string mainMessage)
{
	string message;
	char key;
	//char charspot;
	int strlength = strlen(mainMessage.c_str());
	char messageEncoded[999];


	cout << "\n\nWhat is your key letter?\n";
	cin >> key;

	if (key == 'a')
	{
		for (int i = 0; i < strlength; i++)
		{
			messageEncoded[i] = mainMessage.at(i);
			cout << messageEncoded[i];
		}
	}

	if (key == 'b')
	{
		for (int i = 0; i < strlength; i++)
		{
			
			
			if (mainMessage.at(i) == 'a')
			{
				messageEncoded[i] = 'b';
			}
			else if (mainMessage.at(i) == 'b')
			{
				messageEncoded[i] = 'c';
			}
			else if (mainMessage.at(i) == 'c')
			{
				messageEncoded[i] = 'd';
			}
			else if (mainMessage.at(i) == 'd')
			{
				messageEncoded[i] = 'e';
			}
			else if (mainMessage.at(i) == 'e')
			{
				messageEncoded[i] = 'f';
			}
			else if (mainMessage.at(i) == 'f')
			{
				messageEncoded[i] = 'g';
			}
			else if (mainMessage.at(i) == 'g')
			{
				messageEncoded[i] = 'h';
			}
			else if (mainMessage.at(i) == 'h')
			{
				messageEncoded[i] = 'i';
			}
			else if (mainMessage.at(i) == 'i')
			{
				messageEncoded[i] = 'j';
			}
			else if (mainMessage.at(i) == 'j')
			{
				messageEncoded[i] = 'k';
			}
			else if (mainMessage.at(i) == 'k')
			{
				messageEncoded[i] = 'l';
			}
			else if (mainMessage.at(i) == 'l')
			{
				messageEncoded[i] = 'm';
			}
			else if (mainMessage.at(i) == 'm')
			{
				messageEncoded[i] = 'n';
			}
			else if (mainMessage.at(i) == 'n')
			{
				messageEncoded[i] = 'o';
			}
			else if (mainMessage.at(i) == 'o')
			{
				messageEncoded[i] = 'p';
			}
			else if (mainMessage.at(i) == 'p')
			{
				messageEncoded[i] = 'q';
			}
			else if (mainMessage.at(i) == 'q')
			{
				messageEncoded[i] = 'r';
			}
			else if (mainMessage.at(i) == 'r')
			{
				messageEncoded[i] = 's';
			}
			else if (mainMessage.at(i) == 's')
			{
				messageEncoded[i] = 't';
			}
			else if (mainMessage.at(i) == 't')
			{
				messageEncoded[i] = 'u';
			}
			else if (mainMessage.at(i) == 'u')
			{
				messageEncoded[i] = 'v';
			}
			else if (mainMessage.at(i) == 'v')
			{
				messageEncoded[i] = 'w';
			}
			else if (mainMessage.at(i) == 'w')
			{
				messageEncoded[i] = 'x';
			}
			else if (mainMessage.at(i) == 'x')
			{
				messageEncoded[i] = 'y';
			}
			else if (mainMessage.at(i) == 'y')
			{
				messageEncoded[i] = 'z';
			}
			else if (mainMessage.at(i) == 'z')
			{
				messageEncoded[i] = 'a';
			}
			else if (mainMessage.at(i) == 'A')
			{
				messageEncoded[i] = 'B';
			}
			else if (mainMessage.at(i) == 'B')
			{
				messageEncoded[i] = 'C';
			}
			else if (mainMessage.at(i) == 'C')
			{
				messageEncoded[i] = 'D';
			}
			else if (mainMessage.at(i) == 'D')
			{
				messageEncoded[i] = 'E';
			}
			else if (mainMessage.at(i) == 'E')
			{
				messageEncoded[i] = 'F';
			}
			else if (mainMessage.at(i) == 'F')
			{
				messageEncoded[i] = 'G';
			}
			else if (mainMessage.at(i) == 'G')
			{
				messageEncoded[i] = 'H';
			}
			else if (mainMessage.at(i) == 'H')
			{
				messageEncoded[i] = 'I';
			}
			else if (mainMessage.at(i) == 'I')
			{
				messageEncoded[i] = 'J';
			}
			else if (mainMessage.at(i) == 'J')
			{
				messageEncoded[i] = 'K';
			}
			else if (mainMessage.at(i) == 'K')
			{
				messageEncoded[i] = 'L';
			}
			else if (mainMessage.at(i) == 'L')
			{
				messageEncoded[i] = 'M';
			}
			else if (mainMessage.at(i) == 'M')
			{
				messageEncoded[i] = 'N';
			}
			else if (mainMessage.at(i) == 'N')
			{
				messageEncoded[i] = 'O';
			}
			else if (mainMessage.at(i) == 'O')
			{
				messageEncoded[i] = 'P';
			}
			else if (mainMessage.at(i) == 'P')
			{
				messageEncoded[i] = 'Q';
			}
			else if (mainMessage.at(i) == 'Q')
			{
				messageEncoded[i] = 'R';
			}
			else if (mainMessage.at(i) == 'R')
			{
				messageEncoded[i] = 'S';
			}
			else if (mainMessage.at(i) == 'S')
			{
				messageEncoded[i] = 'T';
			}
			else if (mainMessage.at(i) == 'T')
			{
				messageEncoded[i] = 'U';
			}
			else if (mainMessage.at(i) == 'U')
			{
				messageEncoded[i] = 'V';
			}
			else if (mainMessage.at(i) == 'V')
			{
				messageEncoded[i] = 'W';
			}
			else if (mainMessage.at(i) == 'W')
			{
				messageEncoded[i] = 'X';
			}
			else if (mainMessage.at(i) == 'X')
			{
				messageEncoded[i] = 'Y';
			}
			else if (mainMessage.at(i) == 'Y')
			{
				messageEncoded[i] = 'Z';
			}
			else if (mainMessage.at(i) == 'Z')
			{
				messageEncoded[i] = 'A';
			}
			else
			{
				messageEncoded[i] = mainMessage.at(i);
			}
		}
		for (int i = 0; i < strlength; i++)
		{
			cout << messageEncoded[i];
		}
		cout << endl;
	}
	if (key == 'c')
	{
		for (int i = 0; i < strlength; i++)
		{


			if (mainMessage.at(i) == 'a')
			{
				messageEncoded[i] = 'c';
			}
			else if (mainMessage.at(i) == 'b')
			{
				messageEncoded[i] = 'd';
			}
			else if (mainMessage.at(i) == 'c')
			{
				messageEncoded[i] = 'e';
			}
			else if (mainMessage.at(i) == 'd')
			{
				messageEncoded[i] = 'f';
			}
			else if (mainMessage.at(i) == 'e')
			{
				messageEncoded[i] = 'g';
			}
			else if (mainMessage.at(i) == 'f')
			{
				messageEncoded[i] = 'h';
			}
			else if (mainMessage.at(i) == 'g')
			{
				messageEncoded[i] = 'i';
			}
			else if (mainMessage.at(i) == 'h')
			{
				messageEncoded[i] = 'j';
			}
			else if (mainMessage.at(i) == 'i')
			{
				messageEncoded[i] = 'k';
			}
			else if (mainMessage.at(i) == 'j')
			{
				messageEncoded[i] = 'l';
			}
			else if (mainMessage.at(i) == 'k')
			{
				messageEncoded[i] = 'm';
			}
			else if (mainMessage.at(i) == 'l')
			{
				messageEncoded[i] = 'n';
			}
			else if (mainMessage.at(i) == 'm')
			{
				messageEncoded[i] = 'o';
			}
			else if (mainMessage.at(i) == 'n')
			{
				messageEncoded[i] = 'p';
			}
			else if (mainMessage.at(i) == 'o')
			{
				messageEncoded[i] = 'q';
			}
			else if (mainMessage.at(i) == 'p')
			{
				messageEncoded[i] = 'r';
			}
			else if (mainMessage.at(i) == 'q')
			{
				messageEncoded[i] = 's';
			}
			else if (mainMessage.at(i) == 'r')
			{
				messageEncoded[i] = 't';
			}
			else if (mainMessage.at(i) == 's')
			{
				messageEncoded[i] = 'u';
			}
			else if (mainMessage.at(i) == 't')
			{
				messageEncoded[i] = 'v';
			}
			else if (mainMessage.at(i) == 'u')
			{
				messageEncoded[i] = 'w';
			}
			else if (mainMessage.at(i) == 'v')
			{
				messageEncoded[i] = 'x';
			}
			else if (mainMessage.at(i) == 'w')
			{
				messageEncoded[i] = 'y';
			}
			else if (mainMessage.at(i) == 'x')
			{
				messageEncoded[i] = 'z';
			}
			else if (mainMessage.at(i) == 'y')
			{
				messageEncoded[i] = 'a';
			}
			else if (mainMessage.at(i) == 'z')
			{
				messageEncoded[i] = 'b';
			}
			else if (mainMessage.at(i) == 'A')
			{
				messageEncoded[i] = 'C';
			}
			else if (mainMessage.at(i) == 'B')
			{
				messageEncoded[i] = 'D';
			}
			else if (mainMessage.at(i) == 'C')
			{
				messageEncoded[i] = 'E';
			}
			else if (mainMessage.at(i) == 'D')
			{
				messageEncoded[i] = 'F';
			}
			else if (mainMessage.at(i) == 'E')
			{
				messageEncoded[i] = 'G';
			}
			else if (mainMessage.at(i) == 'F')
			{
				messageEncoded[i] = 'H';
			}
			else if (mainMessage.at(i) == 'G')
			{
				messageEncoded[i] = 'I';
			}
			else if (mainMessage.at(i) == 'H')
			{
				messageEncoded[i] = 'J';
			}
			else if (mainMessage.at(i) == 'I')
			{
				messageEncoded[i] = 'K';
			}
			else if (mainMessage.at(i) == 'J')
			{
				messageEncoded[i] = 'L';
			}
			else if (mainMessage.at(i) == 'K')
			{
				messageEncoded[i] = 'M';
			}
			else if (mainMessage.at(i) == 'L')
			{
				messageEncoded[i] = 'N';
			}
			else if (mainMessage.at(i) == 'M')
			{
				messageEncoded[i] = 'O';
			}
			else if (mainMessage.at(i) == 'N')
			{
				messageEncoded[i] = 'P';
			}
			else if (mainMessage.at(i) == 'O')
			{
				messageEncoded[i] = 'Q';
			}
			else if (mainMessage.at(i) == 'P')
			{
				messageEncoded[i] = 'R';
			}
			else if (mainMessage.at(i) == 'Q')
			{
				messageEncoded[i] = 'S';
			}
			else if (mainMessage.at(i) == 'R')
			{
				messageEncoded[i] = 'T';
			}
			else if (mainMessage.at(i) == 'S')
			{
				messageEncoded[i] = 'U';
			}
			else if (mainMessage.at(i) == 'T')
			{
				messageEncoded[i] = 'V';
			}
			else if (mainMessage.at(i) == 'U')
			{
				messageEncoded[i] = 'W';
			}
			else if (mainMessage.at(i) == 'V')
			{
				messageEncoded[i] = 'X';
			}
			else if (mainMessage.at(i) == 'W')
			{
				messageEncoded[i] = 'Y';
			}
			else if (mainMessage.at(i) == 'X')
			{
				messageEncoded[i] = 'Z';
			}
			else if (mainMessage.at(i) == 'Y')
			{
				messageEncoded[i] = 'A';
			}
			else if (mainMessage.at(i) == 'Z')
			{
				messageEncoded[i] = 'B';
			}
			else
			{
				messageEncoded[i] = mainMessage.at(i);
			}
		}
		for (int i = 0; i < strlength; i++)
		{
			cout << messageEncoded[i];
		}
		cout << endl;
	}
	if (key == 'd')
	{
		for (int i = 0; i < strlength; i++)
		{


			if (mainMessage.at(i) == 'a')
			{
				messageEncoded[i] = 'd';
			}
			else if (mainMessage.at(i) == 'b')
			{
				messageEncoded[i] = 'e';
			}
			else if (mainMessage.at(i) == 'c')
			{
				messageEncoded[i] = 'f';
			}
			else if (mainMessage.at(i) == 'd')
			{
				messageEncoded[i] = 'g';
			}
			else if (mainMessage.at(i) == 'e')
			{
				messageEncoded[i] = 'h';
			}
			else if (mainMessage.at(i) == 'f')
			{
				messageEncoded[i] = 'i';
			}
			else if (mainMessage.at(i) == 'g')
			{
				messageEncoded[i] = 'j';
			}
			else if (mainMessage.at(i) == 'h')
			{
				messageEncoded[i] = 'k';
			}
			else if (mainMessage.at(i) == 'i')
			{
				messageEncoded[i] = 'l';
			}
			else if (mainMessage.at(i) == 'j')
			{
				messageEncoded[i] = 'm';
			}
			else if (mainMessage.at(i) == 'k')
			{
				messageEncoded[i] = 'n';
			}
			else if (mainMessage.at(i) == 'l')
			{
				messageEncoded[i] = 'o';
			}
			else if (mainMessage.at(i) == 'm')
			{
				messageEncoded[i] = 'p';
			}
			else if (mainMessage.at(i) == 'n')
			{
				messageEncoded[i] = 'q';
			}
			else if (mainMessage.at(i) == 'o')
			{
				messageEncoded[i] = 'r';
			}
			else if (mainMessage.at(i) == 'p')
			{
				messageEncoded[i] = 's';
			}
			else if (mainMessage.at(i) == 'q')
			{
				messageEncoded[i] = 't';
			}
			else if (mainMessage.at(i) == 'r')
			{
				messageEncoded[i] = 'u';
			}
			else if (mainMessage.at(i) == 's')
			{
				messageEncoded[i] = 'v';
			}
			else if (mainMessage.at(i) == 't')
			{
				messageEncoded[i] = 'w';
			}
			else if (mainMessage.at(i) == 'u')
			{
				messageEncoded[i] = 'x';
			}
			else if (mainMessage.at(i) == 'v')
			{
				messageEncoded[i] = 'y';
			}
			else if (mainMessage.at(i) == 'w')
			{
				messageEncoded[i] = 'z';
			}
			else if (mainMessage.at(i) == 'x')
			{
				messageEncoded[i] = 'a';
			}
			else if (mainMessage.at(i) == 'y')
			{
				messageEncoded[i] = 'b';
			}
			else if (mainMessage.at(i) == 'z')
			{
				messageEncoded[i] = 'c';
			}
			else if (mainMessage.at(i) == 'A')
			{
				messageEncoded[i] = 'D';
			}
			else if (mainMessage.at(i) == 'B')
			{
				messageEncoded[i] = 'E';
			}
			else if (mainMessage.at(i) == 'C')
			{
				messageEncoded[i] = 'F';
			}
			else if (mainMessage.at(i) == 'D')
			{
				messageEncoded[i] = 'G';
			}
			else if (mainMessage.at(i) == 'E')
			{
				messageEncoded[i] = 'H';
			}
			else if (mainMessage.at(i) == 'F')
			{
				messageEncoded[i] = 'I';
			}
			else if (mainMessage.at(i) == 'G')
			{
				messageEncoded[i] = 'J';
			}
			else if (mainMessage.at(i) == 'H')
			{
				messageEncoded[i] = 'K';
			}
			else if (mainMessage.at(i) == 'I')
			{
				messageEncoded[i] = 'L';
			}
			else if (mainMessage.at(i) == 'J')
			{
				messageEncoded[i] = 'M';
			}
			else if (mainMessage.at(i) == 'K')
			{
				messageEncoded[i] = 'N';
			}
			else if (mainMessage.at(i) == 'L')
			{
				messageEncoded[i] = 'O';
			}
			else if (mainMessage.at(i) == 'M')
			{
				messageEncoded[i] = 'P';
			}
			else if (mainMessage.at(i) == 'N')
			{
				messageEncoded[i] = 'Q';
			}
			else if (mainMessage.at(i) == 'O')
			{
				messageEncoded[i] = 'R';
			}
			else if (mainMessage.at(i) == 'P')
			{
				messageEncoded[i] = 'S';
			}
			else if (mainMessage.at(i) == 'Q')
			{
				messageEncoded[i] = 'T';
			}
			else if (mainMessage.at(i) == 'R')
			{
				messageEncoded[i] = 'U';
			}
			else if (mainMessage.at(i) == 'S')
			{
				messageEncoded[i] = 'V';
			}
			else if (mainMessage.at(i) == 'T')
			{
				messageEncoded[i] = 'W';
			}
			else if (mainMessage.at(i) == 'U')
			{
				messageEncoded[i] = 'X';
			}
			else if (mainMessage.at(i) == 'V')
			{
				messageEncoded[i] = 'Y';
			}
			else if (mainMessage.at(i) == 'W')
			{
				messageEncoded[i] = 'Z';
			}
			else if (mainMessage.at(i) == 'X')
			{
				messageEncoded[i] = 'A';
			}
			else if (mainMessage.at(i) == 'Y')
			{
				messageEncoded[i] = 'B';
			}
			else if (mainMessage.at(i) == 'Z')
			{
				messageEncoded[i] = 'C';
			}
			else
			{
				messageEncoded[i] = mainMessage.at(i);
			}
		}
		for (int i = 0; i < strlength; i++)
		{
			cout << messageEncoded[i];
		}
		cout << endl;
	}
	if (key == 'e')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'r')
				{ 
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'D';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
	}
	if (key == 'f')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'E';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'g')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'F';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	}
	}
	if (key == 'h')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'G';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	
	}
	if (key == 'i')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'H';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	
	}
	if (key == 'j')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'I';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	}
	
	if (key == 'k')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'J';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	
	}
	if (key == 'l')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageEncoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageEncoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageEncoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageEncoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageEncoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageEncoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageEncoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageEncoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageEncoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageEncoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageEncoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageEncoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageEncoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageEncoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageEncoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageEncoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageEncoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageEncoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageEncoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageEncoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageEncoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageEncoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageEncoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageEncoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageEncoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageEncoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageEncoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageEncoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageEncoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageEncoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageEncoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageEncoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageEncoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageEncoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageEncoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageEncoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageEncoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageEncoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageEncoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageEncoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageEncoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageEncoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageEncoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageEncoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageEncoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageEncoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageEncoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageEncoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageEncoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageEncoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageEncoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageEncoded[i] = 'K';
				}
				else
				{
					messageEncoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageEncoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'm')
	{
		cout << "m works!";
	}
	if (key == 'n')
	{
		cout << "n works!";
	}
	if (key == 'o')
	{
		cout << "o works!";
	}
	if (key == 'p')
	{
		cout << "p works!";
	}
	if (key == 'q')
	{
		cout << "q works!";
	}
	if (key == 'r')
	{
		cout << "r works!";
	}
	if (key == 's')
	{
		cout << "s works!";
	}
	if (key == 't')
	{
		cout << "t works!";
	}
	if (key == 'u')
	{
		cout << "u works!";
	}
	if (key == 'v')
	{
		cout << "u works!";
	}
	if (key == 'w')
	{
		cout << "w works!";
	}
	if (key == 'x')
	{
		cout << "x works!";
	}
	if (key == 'y')
	{
		cout << "y works!";
	}
	if (key == 'z')
	{
		cout << "z works!";
	}
	
	return message;
}


string decode(string mainMessage)
{
	string message;
	char key;
	//char charspot;
	int strlength = strlen(mainMessage.c_str());
	char messageDecoded[999];


	cout << "\n\nWhat is your key letter?\n";
	cin >> key;

	if (key == 'a')
	{
		for (int i = 0; i < strlength; i++)
		{
			messageDecoded[i] = mainMessage.at(i);
			cout << messageDecoded[i];
		}
	}

	if (key == 'b')
	{
		for (int i = 0; i < strlength; i++)
		{


			if (mainMessage.at(i) == 'a')
			{
				messageDecoded[i] = 'z';
			}
			else if (mainMessage.at(i) == 'b')
			{
				messageDecoded[i] = 'a';
			}
			else if (mainMessage.at(i) == 'c')
			{
				messageDecoded[i] = 'b';
			}
			else if (mainMessage.at(i) == 'd')
			{
				messageDecoded[i] = 'c';
			}
			else if (mainMessage.at(i) == 'e')
			{
				messageDecoded[i] = 'd';
			}
			else if (mainMessage.at(i) == 'f')
			{
				messageDecoded[i] = 'e';
			}
			else if (mainMessage.at(i) == 'g')
			{
				messageDecoded[i] = 'f';
			}
			else if (mainMessage.at(i) == 'h')
			{
				messageDecoded[i] = 'g';
			}
			else if (mainMessage.at(i) == 'i')
			{
				messageDecoded[i] = 'h';
			}
			else if (mainMessage.at(i) == 'j')
			{
				messageDecoded[i] = 'i';
			}
			else if (mainMessage.at(i) == 'k')
			{
				messageDecoded[i] = 'j';
			}
			else if (mainMessage.at(i) == 'l')
			{
				messageDecoded[i] = 'k';
			}
			else if (mainMessage.at(i) == 'm')
			{
				messageDecoded[i] = 'l';
			}
			else if (mainMessage.at(i) == 'n')
			{
				messageDecoded[i] = 'm';
			}
			else if (mainMessage.at(i) == 'o')
			{
				messageDecoded[i] = 'n';
			}
			else if (mainMessage.at(i) == 'p')
			{
				messageDecoded[i] = 'o';
			}
			else if (mainMessage.at(i) == 'q')
			{
				messageDecoded[i] = 'p';
			}
			else if (mainMessage.at(i) == 'r')
			{
				messageDecoded[i] = 'q';
			}
			else if (mainMessage.at(i) == 's')
			{
				messageDecoded[i] = 'r';
			}
			else if (mainMessage.at(i) == 't')
			{
				messageDecoded[i] = 's';
			}
			else if (mainMessage.at(i) == 'u')
			{
				messageDecoded[i] = 't';
			}
			else if (mainMessage.at(i) == 'v')
			{
				messageDecoded[i] = 'u';
			}
			else if (mainMessage.at(i) == 'w')
			{
				messageDecoded[i] = 'v';
			}
			else if (mainMessage.at(i) == 'x')
			{
				messageDecoded[i] = 'w';
			}
			else if (mainMessage.at(i) == 'y')
			{
				messageDecoded[i] = 'x';
			}
			else if (mainMessage.at(i) == 'z')
			{
				messageDecoded[i] = 'y';
			}
			else if (mainMessage.at(i) == 'A')
			{
				messageDecoded[i] = 'Z';
			}
			else if (mainMessage.at(i) == 'B')
			{
				messageDecoded[i] = 'A';
			}
			else if (mainMessage.at(i) == 'C')
			{
				messageDecoded[i] = 'B';
			}
			else if (mainMessage.at(i) == 'D')
			{
				messageDecoded[i] = 'C';
			}
			else if (mainMessage.at(i) == 'E')
			{
				messageDecoded[i] = 'D';
			}
			else if (mainMessage.at(i) == 'F')
			{
				messageDecoded[i] = 'E';
			}
			else if (mainMessage.at(i) == 'G')
			{
				messageDecoded[i] = 'F';
			}
			else if (mainMessage.at(i) == 'H')
			{
				messageDecoded[i] = 'G';
			}
			else if (mainMessage.at(i) == 'I')
			{
				messageDecoded[i] = 'H';
			}
			else if (mainMessage.at(i) == 'J')
			{
				messageDecoded[i] = 'I';
			}
			else if (mainMessage.at(i) == 'K')
			{
				messageDecoded[i] = 'J';
			}
			else if (mainMessage.at(i) == 'L')
			{
				messageDecoded[i] = 'K';
			}
			else if (mainMessage.at(i) == 'M')
			{
				messageDecoded[i] = 'L';
			}
			else if (mainMessage.at(i) == 'N')
			{
				messageDecoded[i] = 'M';
			}
			else if (mainMessage.at(i) == 'O')
			{
				messageDecoded[i] = 'N';
			}
			else if (mainMessage.at(i) == 'P')
			{
				messageDecoded[i] = 'O';
			}
			else if (mainMessage.at(i) == 'Q')
			{
				messageDecoded[i] = 'P';
			}
			else if (mainMessage.at(i) == 'R')
			{
				messageDecoded[i] = 'Q';
			}
			else if (mainMessage.at(i) == 'S')
			{
				messageDecoded[i] = 'R';
			}
			else if (mainMessage.at(i) == 'T')
			{
				messageDecoded[i] = 'S';
			}
			else if (mainMessage.at(i) == 'U')
			{
				messageDecoded[i] = 'T';
			}
			else if (mainMessage.at(i) == 'V')
			{
				messageDecoded[i] = 'U';
			}
			else if (mainMessage.at(i) == 'W')
			{
				messageDecoded[i] = 'V';
			}
			else if (mainMessage.at(i) == 'X')
			{
				messageDecoded[i] = 'W';
			}
			else if (mainMessage.at(i) == 'Y')
			{
				messageDecoded[i] = 'X';
			}
			else if (mainMessage.at(i) == 'Z')
			{
				messageDecoded[i] = 'Y';
			}
			else
			{
				messageDecoded[i] = mainMessage.at(i);
			}
		}
		for (int i = 0; i < strlength; i++)
		{
			cout << messageDecoded[i];
		}
		cout << endl;
	}
	if (key == 'c')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageDecoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageDecoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageDecoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageDecoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageDecoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageDecoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageDecoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageDecoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageDecoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageDecoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageDecoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageDecoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageDecoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageDecoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageDecoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageDecoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageDecoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageDecoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageDecoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageDecoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageDecoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageDecoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageDecoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageDecoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageDecoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageDecoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageDecoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageDecoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageDecoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageDecoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageDecoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageDecoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageDecoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageDecoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageDecoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageDecoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageDecoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageDecoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageDecoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageDecoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageDecoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageDecoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageDecoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageDecoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageDecoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageDecoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageDecoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageDecoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageDecoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageDecoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageDecoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageDecoded[i] = 'X';
				}
				else
				{
					messageDecoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageDecoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'd')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageDecoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageDecoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageDecoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageDecoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageDecoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageDecoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageDecoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageDecoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageDecoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageDecoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageDecoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageDecoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageDecoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageDecoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageDecoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageDecoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageDecoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageDecoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageDecoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageDecoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageDecoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageDecoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageDecoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageDecoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageDecoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageDecoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageDecoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageDecoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageDecoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageDecoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageDecoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageDecoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageDecoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageDecoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageDecoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageDecoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageDecoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageDecoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageDecoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageDecoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageDecoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageDecoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageDecoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageDecoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageDecoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageDecoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageDecoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageDecoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageDecoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageDecoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageDecoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageDecoded[i] = 'W';
				}
				else
				{
					messageDecoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageDecoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'e')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageDecoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageDecoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageDecoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageDecoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageDecoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageDecoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageDecoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageDecoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageDecoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageDecoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageDecoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageDecoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageDecoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageDecoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageDecoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageDecoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageDecoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageDecoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageDecoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageDecoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageDecoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageDecoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageDecoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageDecoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageDecoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageDecoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageDecoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageDecoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageDecoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageDecoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageDecoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageDecoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageDecoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageDecoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageDecoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageDecoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageDecoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageDecoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageDecoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageDecoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageDecoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageDecoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageDecoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageDecoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageDecoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageDecoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageDecoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageDecoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageDecoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageDecoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageDecoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageDecoded[i] = 'U';
				}
				else
				{
					messageDecoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageDecoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'f')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageDecoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageDecoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageDecoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageDecoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageDecoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageDecoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageDecoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageDecoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageDecoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageDecoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageDecoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageDecoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageDecoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageDecoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageDecoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageDecoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageDecoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageDecoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageDecoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageDecoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageDecoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageDecoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageDecoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageDecoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageDecoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageDecoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageDecoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageDecoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageDecoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageDecoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageDecoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageDecoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageDecoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageDecoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageDecoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageDecoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageDecoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageDecoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageDecoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageDecoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageDecoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageDecoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageDecoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageDecoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageDecoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageDecoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageDecoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageDecoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageDecoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageDecoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageDecoded[i] = 'T';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageDecoded[i] = 'U';
				}
				else
				{
					messageDecoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageDecoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'g')
	{
		{
			for (int i = 0; i < strlength; i++)
			{


				if (mainMessage.at(i) == 'a')
				{
					messageDecoded[i] = 'u';
				}
				else if (mainMessage.at(i) == 'b')
				{
					messageDecoded[i] = 'v';
				}
				else if (mainMessage.at(i) == 'c')
				{
					messageDecoded[i] = 'w';
				}
				else if (mainMessage.at(i) == 'd')
				{
					messageDecoded[i] = 'x';
				}
				else if (mainMessage.at(i) == 'e')
				{
					messageDecoded[i] = 'y';
				}
				else if (mainMessage.at(i) == 'f')
				{
					messageDecoded[i] = 'z';
				}
				else if (mainMessage.at(i) == 'g')
				{
					messageDecoded[i] = 'a';
				}
				else if (mainMessage.at(i) == 'h')
				{
					messageDecoded[i] = 'b';
				}
				else if (mainMessage.at(i) == 'i')
				{
					messageDecoded[i] = 'c';
				}
				else if (mainMessage.at(i) == 'j')
				{
					messageDecoded[i] = 'd';
				}
				else if (mainMessage.at(i) == 'k')
				{
					messageDecoded[i] = 'e';
				}
				else if (mainMessage.at(i) == 'l')
				{
					messageDecoded[i] = 'f';
				}
				else if (mainMessage.at(i) == 'm')
				{
					messageDecoded[i] = 'g';
				}
				else if (mainMessage.at(i) == 'n')
				{
					messageDecoded[i] = 'h';
				}
				else if (mainMessage.at(i) == 'o')
				{
					messageDecoded[i] = 'i';
				}
				else if (mainMessage.at(i) == 'p')
				{
					messageDecoded[i] = 'j';
				}
				else if (mainMessage.at(i) == 'q')
				{
					messageDecoded[i] = 'k';
				}
				else if (mainMessage.at(i) == 'r')
				{
					messageDecoded[i] = 'l';
				}
				else if (mainMessage.at(i) == 's')
				{
					messageDecoded[i] = 'm';
				}
				else if (mainMessage.at(i) == 't')
				{
					messageDecoded[i] = 'n';
				}
				else if (mainMessage.at(i) == 'u')
				{
					messageDecoded[i] = 'o';
				}
				else if (mainMessage.at(i) == 'v')
				{
					messageDecoded[i] = 'p';
				}
				else if (mainMessage.at(i) == 'w')
				{
					messageDecoded[i] = 'q';
				}
				else if (mainMessage.at(i) == 'x')
				{
					messageDecoded[i] = 'r';
				}
				else if (mainMessage.at(i) == 'y')
				{
					messageDecoded[i] = 's';
				}
				else if (mainMessage.at(i) == 'z')
				{
					messageDecoded[i] = 't';
				}
				else if (mainMessage.at(i) == 'A')
				{
					messageDecoded[i] = 'U';
				}
				else if (mainMessage.at(i) == 'B')
				{
					messageDecoded[i] = 'V';
				}
				else if (mainMessage.at(i) == 'C')
				{
					messageDecoded[i] = 'W';
				}
				else if (mainMessage.at(i) == 'D')
				{
					messageDecoded[i] = 'X';
				}
				else if (mainMessage.at(i) == 'E')
				{
					messageDecoded[i] = 'Y';
				}
				else if (mainMessage.at(i) == 'F')
				{
					messageDecoded[i] = 'Z';
				}
				else if (mainMessage.at(i) == 'G')
				{
					messageDecoded[i] = 'A';
				}
				else if (mainMessage.at(i) == 'H')
				{
					messageDecoded[i] = 'B';
				}
				else if (mainMessage.at(i) == 'I')
				{
					messageDecoded[i] = 'C';
				}
				else if (mainMessage.at(i) == 'J')
				{
					messageDecoded[i] = 'D';
				}
				else if (mainMessage.at(i) == 'K')
				{
					messageDecoded[i] = 'E';
				}
				else if (mainMessage.at(i) == 'L')
				{
					messageDecoded[i] = 'F';
				}
				else if (mainMessage.at(i) == 'M')
				{
					messageDecoded[i] = 'G';
				}
				else if (mainMessage.at(i) == 'N')
				{
					messageDecoded[i] = 'H';
				}
				else if (mainMessage.at(i) == 'O')
				{
					messageDecoded[i] = 'I';
				}
				else if (mainMessage.at(i) == 'P')
				{
					messageDecoded[i] = 'J';
				}
				else if (mainMessage.at(i) == 'Q')
				{
					messageDecoded[i] = 'K';
				}
				else if (mainMessage.at(i) == 'R')
				{
					messageDecoded[i] = 'L';
				}
				else if (mainMessage.at(i) == 'S')
				{
					messageDecoded[i] = 'M';
				}
				else if (mainMessage.at(i) == 'T')
				{
					messageDecoded[i] = 'N';
				}
				else if (mainMessage.at(i) == 'U')
				{
					messageDecoded[i] = 'O';
				}
				else if (mainMessage.at(i) == 'V')
				{
					messageDecoded[i] = 'P';
				}
				else if (mainMessage.at(i) == 'W')
				{
					messageDecoded[i] = 'Q';
				}
				else if (mainMessage.at(i) == 'X')
				{
					messageDecoded[i] = 'R';
				}
				else if (mainMessage.at(i) == 'Y')
				{
					messageDecoded[i] = 'S';
				}
				else if (mainMessage.at(i) == 'Z')
				{
					messageDecoded[i] = 'T';
				}
				else
				{
					messageDecoded[i] = mainMessage.at(i);
				}
			}
			for (int i = 0; i < strlength; i++)
			{
				cout << messageDecoded[i];
			}
			cout << endl;
		}
	}
	if (key == 'h')
	{
		cout << "h works!";
	}
	if (key == 'i')
	{
		cout << "i works!";
	}
	if (key == 'j')
	{
		cout << "j works!";
	}
	if (key == 'k')
	{
		cout << "k works!";
	}
	if (key == 'l')
	{
		cout << "l works!";
	}
	if (key == 'm')
	{
		cout << "m works!";
	}
	if (key == 'n')
	{
		cout << "n works!";
	}
	if (key == 'o')
	{
		cout << "o works!";
	}
	if (key == 'p')
	{
		cout << "p works!";
	}
	if (key == 'q')
	{
		cout << "q works!";
	}
	if (key == 'r')
	{
		cout << "r works!";
	}
	if (key == 's')
	{
		cout << "s works!";
	}
	if (key == 't')
	{
		cout << "t works!";
	}
	if (key == 'u')
	{
		cout << "u works!";
	}
	if (key == 'v')
	{
		cout << "u works!";
	}
	if (key == 'w')
	{
		cout << "w works!";
	}
	if (key == 'x')
	{
		cout << "x works!";
	}
	if (key == 'y')
	{
		cout << "y works!";
	}
	if (key == 'z')
	{
		cout << "z works!";
	}
	

	return message;
}