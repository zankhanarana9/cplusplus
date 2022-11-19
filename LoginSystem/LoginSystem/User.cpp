#pragma once
#include <fstream> // read/write files
#include <string>
#include "User.h"
#include <iostream>

using namespace std;

class User
{
	void Register()
	{
		string username, password;

		cout << "Select a username: ";
		cin >> username;

		cout << "Enter a password: ";
		cin >> password;

		//creates a file
		ofstream file("c:\\" + username + ".txt");

		file << username << password << endl;
		file.close();
	}

	int Login()
	{
		bool status = IsLoggedIn();
		if (!status)
		{
			cout << "Username or pasasword incorrect";
			system("PAUSE");
			return 0;
		}
		else
		{
			cout << "Successfully logged in.";
			system("PAUSE");
			return 1;
		}
	}

	bool IsLoggedIn()
	{
		string username, password, un, pw;
		cout << "Enter username: ";
		cin >> username;
		cout << "Enter password: ";
		cin >> password;

		ifstream read("c:\\" + username + ".txt");
		getline(read, un);
		getline(read, pw);

		if (un == username && pw == password)
		{
			return true;
		}

		return false;
	}
};
