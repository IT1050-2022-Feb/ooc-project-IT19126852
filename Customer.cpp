#include "Customer.h"
#include <iostream>
using namespace std;

void Customer::Customers(int cusID, string cusName, string add, int tel) {
	CustomerID = cusID;
	CustomerName = cusName;
	Address = add;
	Contact = tel;
}

void cancelReservation(Reservation *r) {

}
void bookReservation(Reservation *r) {

}
void Customer::displayDetails() {
	cout << endl << "Customer ID" << CustomerID << endl;
	cout << endl << "Customer Name" << CustomerName << endl;
	cout << endl << "Customer Address" << Address << endl;
	cout << endl << "Customer Contact" << Contact << endl;
}
