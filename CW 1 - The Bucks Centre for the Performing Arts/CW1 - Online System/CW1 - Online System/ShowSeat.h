#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class showSeat
{
public:
	void Initialise();
	void DisplaySeats();
	int GetSeats();
protected:
	char Seat[10][10];
	int ArrayRows[10], ArrayColumns[10], ticketcount = 0;
};

void showSeat::Initialise()
{
	cout << endl;

	for (int Rows = 0; Rows < 10; Rows++)
	{
		for (int Columns = 0; Columns < 10; Columns++)
		{
			Seat[Rows][Columns] = 'A';
		}
	}
}

void showSeat::DisplaySeats()
{
	cout << "Column:  0   1   2   3   4   5   6   7   8   9" << endl;
	for (int Rows = 0; Rows < 10; Rows++)
	{
		cout << "Row: " << Rows << "   ";
		for (int Columns = 0; Columns < 10; Columns++)
		{
				cout << Seat[Rows][Columns] << "   ";
		}
		cout << endl;
	}
}

int showSeat::GetSeats()
{
	cout << endl;
	cout << "How many tickets would you like?" << endl;
	cin >> ticketcount;
	cout << endl;

	for (int i = 1; i < (ticketcount + 1); i++)
	{
		cout << "Ticket: " << i << endl;
		cout << "Pick your desired seat row: " << endl;
		cin >> ArrayRows[i];
		cout << endl;
		cout << "Pick your desired seat column: " << endl;
		cin >> ArrayColumns[i];
		cout << endl;

		for (int Rows = 0; Rows < 10; Rows++)
		{
			for (int Columns = 0; Columns < 10; Columns++)
			{
				if (Seat[Rows][Columns] == 'A')
				{
					Seat[ArrayRows[i]][ArrayColumns[i]] = 'H';
				}
			}
		}
	}
	return ticketcount;
}