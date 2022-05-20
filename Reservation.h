#include <string>
#include "Room.h"
#include "Payment.h"
#include "Customer.h"
using namespace std;

class Reservation
{
private:
	int ReservationID;
	Room rom;
	Payment pay;
	Customer cus;
	
public:
	void Reservations(int resID,Room r, Payment p, Customer c);
	void displayDetails();
};


