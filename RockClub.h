#ifndef RockBar_h
#define RockBar_h
#include<iostream>
#include"String.h"
#include"Club.h"
#include"User.cpp"
using namespace std;

class RockClub : public Club
{
private:
	int capacity;
	int priceOfVodka;
	int priceOfWhiskey;
public:
	void setCapacity(int);
	void setPriceOfVodka(int);
	void setPriceOfWhiskey(int);

	int getCapacity() const;
	int getPriceOfVodka() const;
	int getPriceOfWhiskey() const;

	bool AddToClub(const User& other);

};
#endif 
