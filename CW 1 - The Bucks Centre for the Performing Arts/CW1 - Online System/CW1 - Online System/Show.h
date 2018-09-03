#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show
{
public:
	void DisplayShow();
	void SelectShow();
protected:
	bool initial = true;
	int pickShow = 0;
};

void show::DisplayShow()
{
	if (initial)
	{
		cout << endl;
		cout << endl;
		cout << "List of upcoming events..." << endl;
		cout << "Select a show: " << endl;
		cout << endl;
		cout << "1: High School Musical 1 Our Fan Base is Under 14 Years Old 28/01/17" << endl;
		cout << "2: High School Musical 2 We Can't Even Believe The First One Sold 15/02/17" << endl;
		cout << "3: High School Musical 3 Guess What We Made Another One 28/02/17" << endl;
		cout << "4: High School Musical 4 These Actors Are Definitely Too Old For High School 12/03/17" << endl;
		cout << endl;
	}
	
	cout << "Select a show (Enter 1/2/3/4): " << endl;
	cin >> pickShow;
	cout << endl;

	if (!initial)
		SelectShow();

	initial = false;
}

void show::SelectShow()
{
	switch (pickShow)
	{
	case 1: cout << "You have chosen High School Musical 1" << endl;
		break;
	case 2: cout << "You have chosen High School Musical 2" << endl;
		break;
	case 3: cout << "You have chosen High School Musical 3" << endl;
		break;
	case 4: cout << "You have chosen High School Musical 4" << endl;
		break;
	default: cout << "Invalid Input" << endl, DisplayShow();
	}
}