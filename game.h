#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

using namespace std;

class gun {
private:
	int ammo;
	string name;
	float fireRate;
	bool isAutomatic;
	static int numberOfGuns;

public:

	gun();

	gun(int a, string b, float c, bool d);

	//gun(const gun& gun1);

	int get_ammo();

	void set_ammo(int a);

	string get_name();

	void set_name(string b);

	float get_firerate();

	void set_firerate(float c);

	bool get_isautomatic();

	void set_isautomatic(bool d);

	int get_numberofguns();

	gun operator +(gun gun1);

	void operator +=(gun gun1);

	bool operator ==(gun gun1);

	bool operator !=(gun gun1);

	gun& operator =(gun gun1);

	gun operator --();

	gun operator --(int);

	gun operator ++();

	gun operator ++(int);

	gun& operator [](int a);

	gun operator *(int a);

	gun operator /(int a);

	void operator *=(int a);

	void operator /=(int a);

	friend istream& operator >>(istream& in, gun& gun1);
	friend ostream& operator <<(ostream& out, gun& gun1);








};


#endif

