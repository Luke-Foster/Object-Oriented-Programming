#include "Customer.h"
#include "show.h"
#include "showSeat.h"
#include "ticket.h"

int main()
{
	int TicketCounter;

	customer c;
	c.GetLogin();
	c.GetProfile();

	show s;
	s.DisplayShow();
	s.SelectShow();

	showSeat ss;
	ss.Initialise();
	ss.DisplaySeats();
	TicketCounter = ss.GetSeats();
	ss.DisplaySeats();

	ticket t;
	t.SetPrice(TicketCounter);
	t.Deselect();
	t.Pay();
	t.PrintTicket();

 	system("PAUSE");
	return EXIT_SUCCESS;
}