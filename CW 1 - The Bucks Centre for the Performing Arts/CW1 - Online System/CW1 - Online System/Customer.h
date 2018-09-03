#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class customer
{
public:
	void GetLogin();
	void GetProfile();
private:
	string email, password, e[10], p[10];
	bool check = false, first = true;
	int num = 0;
};

void customer::GetLogin()
{
	cout << "Enter Email: ";
	getline(cin, email);
	e[num] = email;
	cout << endl;

	cout << "Enter Password: ";
	getline(cin, password);
	p[num] = password;
	cout << endl;

	num++;

	if(!first)
	{
		for (int i = 0; i <= num; i++)
		{
			if (email == e[i] && password == p[i])
			{
				check = true;
			}
		}
	}
	first = false;
}

void customer::GetProfile()
{
	string firstname, surname, address1, address2, postcode, vcode;
	int mobile = 0;

	if (check == true)
	{
		cout << "Welcome Back, please enter verification code: ";
		getline(cin, vcode);
		cout << endl;
	}
	else
	{
		cout << "Create new Profile" << endl;
		cout << "First Name: ";
		getline(cin, firstname);
		cout << endl;
		cout << "Surname: ";
		getline(cin, surname);
		cout << endl;
		cout << "Address Line 1: ";
		getline(cin, address1);
		cout << endl;
		cout << "Address Line 2: ";
		getline(cin, address2);
		cout << endl;
		cout << "Postcode: ";
		getline(cin, postcode);
		cout << endl;
		cout << "Mobile Number: ";
		cin >> mobile;
		cout << endl;
	}
}