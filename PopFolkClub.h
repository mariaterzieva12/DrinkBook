#ifndef PopFolkBar_h
#define PopFolkBar_h
#include"String.h"
#include"User.cpp"
#include"Club.h"
#include<iostream>
class PopFolkClub : public Club
{
private:
	String performer;
	int priceOfVodka;
	int priceOfWhiskey;

public:
	void setPerformer(const String);
	void setPriceOfVodka(int);
	void setPriceOfWhiskey(int);

	const String getPerformer() const;
	int getPriceOfVodka() const;
	int getPriceOfWhiskey() const;

	bool AddToClub(const User& other);


};
#endif