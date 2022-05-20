#include <string>
#include "Reservation.h"
using namespace std;


class Customer
{
	private:
		int CustomerID;
		string CustomerName;
		string Address;
		int Contact;
		Reservation* res[];

	public:
		void Customers(int cusID, string cusName, string add, int tel);
		void cancelReservation(Reservation * r);
	    void bookReservation(Reservation * r);
		void displayDetails();

};

