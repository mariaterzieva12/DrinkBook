#include<iostream>
#include<cstring>
#include"String.h"
using namespace std;

class User
{
public:
	User();
	virtual User* clone();
	virtual ~User() {};
	User(string name);
	void setName(string name);
	void setYears(int years);
	void setBudget(double budget);
	void setWhiskey(int whiskeys);
	void setVodka(int vodkas);
	void setMusicTaste(string music_taste);
	string getName();
	int getYears();
	double getBudget();
	int getWhiskey();
	int getVodka();
	string getMusicTaste();
private:
	string name;
	int years;
	double budget;
	int whiskeys;
	int vodkas;
	string music_taste;
};

User::User(string name)
{
	this->name = name;
}

void User::setName(string name)
{
	this->name = name;
}

void User::setYears(int years)
{
	if (years <= 18 || years >= 50)
		years = 18;
	this->years = years;
}

void User::setBudget(double budget)
{
	this->budget = budget;
}

void User::setWhiskey(int whiskeys)
{
	this->whiskeys = whiskeys;
}

void User::setVodka(int vodkas)
{
	this->vodkas = vodkas;
}

void User::setMusicTaste(string music_taste)
{
	this->music_taste = music_taste;
}

string User::getName()
{
	return name;
}

int User::getYears()
{
	return years;
}

double User::getBudget()
{
	return budget;
}

int User::getWhiskey()
{
	return whiskeys;
}

int User::getVodka()
{
	return vodkas;
}
string User::getMusicTaste()
{
	return music_taste;
}

