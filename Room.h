#pragma once
#include <string>
using namespace std;

class Room
{

private:
	int RoomID;
	string RoomType;
	string Location;
	int roomNum;

public:
	void Rooms(int roomID, string type, string loc, int rnum);
	void AddRoom();
	void updateRoom();
	void displayDetails();
};

