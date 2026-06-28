#include "game.h"
#include <iostream>
#include <string>
#include<stdbool.h>

int gun::numberOfGuns = 0;

gun::gun() {
	ammo = 0;
	name = "unknown";
	fireRate = 0.0;
	isAutomatic = false;
	++numberOfGuns;

}
gun::gun(int a, string b, float c, bool d) {
	ammo = a;
	name = b;
	fireRate = c;
	isAutomatic = d;
	++numberOfGuns;

}

//gun::gun(const gun& gun1) {
//	ammo = gun1.ammo;
//	name = gun1.name;
//	fireRate = gun1.fireRate;
//	isAutomatic = gun1.isAutomatic;
//	++numberOfGuns;
//}

int gun::get_ammo() {
	return ammo;
}

void gun::set_ammo(int a) {
	ammo = a;
}

string gun::get_name() {
	return name;
}

void gun::set_name(string b) {
	name = b;
}

float gun::get_firerate() {
	return fireRate;
}

void gun::set_firerate(float c) {
	fireRate = c;
}

bool gun::get_isautomatic() {
	return isAutomatic;
}

void gun::set_isautomatic(bool d) {
	isAutomatic = d;
}

int gun::get_numberofguns() {
	return numberOfGuns;
}

gun gun:: operator +(gun gun1) {
	gun resaultgun;
	resaultgun.name = this->name + gun1.name;
	resaultgun.ammo = this->ammo + gun1.ammo;
	resaultgun.fireRate = this->fireRate * gun1.fireRate;
	resaultgun.isAutomatic = this->isAutomatic || gun1.isAutomatic;
	numberOfGuns++;
	return resaultgun;
}

void gun:: operator +=(gun gun1) {

	this->name = this->name + gun1.name;
	this->ammo = this->ammo + gun1.ammo;
	this->fireRate = this->fireRate * gun1.fireRate;
	this->isAutomatic = this->isAutomatic || gun1.isAutomatic;

}


bool gun::operator == (gun gun1) {

	if (this->name == gun1.name && this->ammo == gun1.ammo && this->fireRate == gun1.fireRate && this->isAutomatic == gun1.isAutomatic)
		return true;

	else
		return false;

}


bool gun::operator != (gun gun1) {

	if (this->name != gun1.name && this->ammo != gun1.ammo && this->fireRate != gun1.fireRate && this->isAutomatic != gun1.isAutomatic)
		return true;

	else
		return false;

}

gun& gun::operator =(gun gun1) {
	this->ammo = gun1.ammo;
	this->name = gun1.name;
	this->fireRate = gun1.fireRate;
	this->isAutomatic = gun1.isAutomatic;

	return *this;

}

gun gun::operator --() {
	if (this->ammo > 0)
		--this->ammo;

	return *this;

}

gun gun:: operator --(int) {
	gun old = *this;


	if (this->ammo > 0)
		--this->ammo;

	return old;
}

gun gun::operator ++() {
	if (this->ammo > 0)
		++this->ammo;

	return *this;

}

gun gun:: operator ++(int) {
	gun old = *this;


	if (this->ammo > 0)
		++this->ammo;

	return old;
}

gun& gun::operator [](int a) {

	this->ammo = this->ammo + a;
	--numberOfGuns;
	return *this;

}

gun gun::operator *(int a) {
	gun tmp;
	tmp.ammo = a * this->ammo;
	return tmp;
}

gun gun::operator /(int a) {
	gun tmp;
	if (a != 0) {
		tmp.ammo = (this->ammo)/a;
		return tmp;
	}

	else
		return tmp;
}

void gun::operator *=(int a) {

	this->ammo = a * this->ammo;
}

void gun::operator /=(int a) {

	if (a != 0)
		this->ammo = (this->ammo)/a;

	else
		return;
}

istream& operator >>(istream& in, gun& gun1) {

	cout << "enter name" << endl;
	in >> gun1.name;

	cout << "enter ammo" << endl;
	in >> gun1.ammo;

	cout << "enter firerate " << endl;
	in >> gun1.fireRate;

	cout << "Is it automatic? (1 for Yes, 0 for No): " << endl;
	int temp;
	in >> temp;
	gun1.isAutomatic = (temp == 1);

	return in;
}


ostream& operator <<(ostream& out, gun& gun1) {
	string answer;

	out << "name is :" << gun1.name << endl;

	out << "ammo is:" << gun1.ammo << endl;

	out << "firerate is:" << gun1.fireRate << endl;

	if (gun1.isAutomatic == 1)
		answer = "yes";
	else
		answer = "no";

	out << "is it automatic?" << answer << endl;

	return out;
}


