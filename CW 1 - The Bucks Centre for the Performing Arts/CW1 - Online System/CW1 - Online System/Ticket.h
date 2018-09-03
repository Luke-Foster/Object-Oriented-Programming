#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Show.h"

using namespace std;

class ticket
{
	public :
		void SetPrice(int counter);
		void Deselect();
		void Pay();
		void PrintTicket();
	protected :
		int ticket_number = 0, adult = 0, student = 0, child = 0, senior = 0, response = 0;
		float ticket_total = 0, adultPrice = 14.99, studentPrice = 11.99, childPrice = 7.99, seniorPrice = 9.99;
		char CardNumber[16], ExpiryDate[5], CSC[3];
		string name;
		show x;
};

void ticket::SetPrice(int counter)
{
	ticket_number = counter;
	cout << endl;
	cout << "You have chosen " << ticket_number << " ticket(s) to buy..." << endl;
	cout << endl;

	cout << "How many child tickets? 7.99" << endl;
	cin >> child;
	cout << endl;
	cout << "How many student tickets? 11.99" << endl;
	cin >> student;
	cout << endl;
	cout << "How many adult tickets? 14.99" << endl;
	cin >> adult;
	cout << endl;
	cout << "How many senior citizen tickets? 9.99" << endl;
	cin >> senior;

	if (ticket_number == (child + student + adult + senior))
	{
		ticket_total = (adult * adultPrice) + (student * studentPrice) + (child * childPrice) + (senior * seniorPrice);
		cout << endl;
		cout << "The total for your " << ticket_number << " ticket(s) comes to " << ticket_total << endl;
	}
	else if (ticket_number < (child + student + adult + senior))
	{
		cout << endl;
		cout << "You've selected too many tickets.." << endl;
		SetPrice(counter);
	}
	else if (ticket_number > (child + student + adult + senior))
	{
		cout << endl;
		cout << "You've not selected enough tickets.." << endl;
		SetPrice(counter);
	}
	else
	{
		cout << endl;
		cout << "Invalid Input" << endl;
		SetPrice(counter);
	}
}

void ticket::Deselect()
{
	cout << endl;
	cout << "Would you like to buy these tickets? (1 = yes  or  2 = no)" << endl;
	cin >> response;
	cout << endl;

	switch (response)
	{
	case 1: cout << "You have chosen to buy the ticket(s)." << endl, cout << endl, system("PAUSE");
		break;
	case 2: cout << "You have chosen to NOT buy the ticket(s)." << endl, exit(0);
		break;
	default: cout << "Invalid Input" << endl, Deselect();
	}
}

void ticket::Pay()
{
	system("cls");
	cout << "Total: " << ticket_total << " pounds" << endl;
	cout << endl;
	cout << "Enter Name Printed on Card: ";
	cin >> name;
	cout << endl;
	cout << "Enter Card Number: ";
	cin >> CardNumber;
	cout << endl;
	cout << "Enter Expiry Date: ";
	cin >> ExpiryDate;
	cout << endl;
	cout << "Enter Card Security Code: ";
	cin >> CSC;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Your card has been approved" << endl;
	cout << endl;
	system("PAUSE");
}

void ticket::PrintTicket()
{
	system("cls");
	cout << "Ticket for High School Musical" << endl;

}