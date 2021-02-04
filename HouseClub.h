#ifndef HouseClub_h
#define HouseClub_h
#include"String.hpp"
#include"User.cpp"
#include"Club.h"
#include<iostream>
using namespace std;
class HouseClub : public Club
{
private:
	int priceOfVodka;
	int priceOfWhiskey;
	int numberOfDJs;
public:
	void setPriceOfVodka(int);
	void setPriceOfWhiskey(int);
	void setNumberOfDjs(int);

	int getPriceOfVodka() const;
	int getPriceOfWhiskey() const;
	int getNumberOfDjs() const;

	bool AddToClub(const User& other);
};

