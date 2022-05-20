

#include <iostream>
#include "Reservation.h"
#include "Customer.h"
#include "Payment.h"
#include "Room.h"
using namespace std;

int main()
{
    Customer cus1, cus2, cus3;

    cus1.Customers(001,"Dineth Jayachan","Matara",0717722);
    cus2.Customers(002, "Dineth Jayachan", "Matara", 0717722);
    cus3.Customers(003, "Dineth Jayachan", "Matara", 0717722);

    cus1.displayDetails();
    cus2.displayDetails();
    cus3.displayDetails();


    Payment* pay1;
    Payment* pay2;

    pay1 = new Payment(011, 10, 22000,cus1);
    pay2 = new Payment(022, 10, 22000,cus2);

    Room* r1;
    Room* r2;

    r1 = new Room(001,A/C,"1st floor","A001");
    r2 = new Room(002, A / C, "1st floor", "A003");

    Reservation* res1;
    Reservation* res2;

    res1 = new Reservation(001,pay1,r2,cus1);
    res2 = new Reservation(002,pay2,r2,cus2);

}
