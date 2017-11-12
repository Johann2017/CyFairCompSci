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
		cout << "e works!";
	}
	if (key == 'f')
	{
		cout << "f works!";
	}
	if (key == 'g')
	{
		cout << "g works!";
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
		cout << "c works!";
	}
	if (key == 'd')
	{
		cout << "d works!";
	}
	if (key == 'e')
	{
		cout << "e works!";
	}
	if (key == 'f')
	{
		cout << "f works!";
	}
	if (key == 'g')
	{
		cout << "g works!";
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