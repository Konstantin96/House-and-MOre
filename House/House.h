#pragma once
#include <string>
using namespace std;

class Address {
	string street;
	int flat_number;
public:
	Address() {
		street = "";
		flat_number = 0;
	}
	Address(string street, int flat_number) {
		this->street = street;
		this->flat_number = flat_number;
	}
	//accesors
	string getStreet() { return street; }
	int getFlatNumber() { return flat_number; }
	//mutators
	void setStreet(string street)	{
		this->street = street;
	}
	void setFlat_number(int flat_number) {
		this->flat_number = flat_number;
	}
};

class House {
private:
	int reg_no;
	Address house_addr;
	int floor;
	int room_number;
	double area;
public:
	House() :house_addr() {
		reg_no = 0;
		house_addr;
		room_number = 0;
		area = 0;
	}
	House(int reg_no, string street, int flat_number, int floor, int room_number, double area) :house_addr(street, flat_number) {
		this->reg_no = reg_no;
		this->floor = floor;
		this->room_number = room_number;
		this->area = area;
	}
	int getReg_number() {
		return reg_no;
	}
	int getFloor() {
		return floor;
	}
	int getRoom_number() {
		return room_number;
	}
};

