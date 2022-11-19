#include <iostream>
#include <fstream>

using namespace std;

bool IsLoggedIn()
{
	string username, password, un, pw;
	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;

	ifstream read("c:\\" + username + ".txt");
	getline(read,un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}

	return false;
}



int main()
{
	int choice;

	while (true)
	{
		cout << "1: Register\n2:Login\nYour choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1: Register();
			break;

		case 2: return Login();

		default:
			break;
		}
	}
}

