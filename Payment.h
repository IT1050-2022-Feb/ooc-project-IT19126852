#include <string>
#include "Reservation.h"
using namespace std;

class Payment
{
private:
	int PaymentID;
	double Discont;
	double TotalPayement;
	Reservation res;
	Customer cus;

public:
	void Payments(int payID,double disc, double total, Reservation r, Customer c);

	void calculatePayemnet(double disc,double total);
	void displayDetails();
};
