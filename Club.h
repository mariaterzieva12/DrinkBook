#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"String.h"
#include"Music.h"
#include"User.cpp"
using namespace std;

class Club
{
public:
	virtual bool AddToClub(const User& user);
	virtual bool RemoveToClub(const string& name);
	void setName(const string& name);
	void setMusicTaste(string music_taste);
	void setCapacity(int capacity);
	void setPriceWhiskey(int priceWhiskey);
	void setPriceVodka(int priceVodka);
	void setUsers(const User*);
	string getMusicTaste();
	string getName();
	int getCapacity();
	int getPriceWhiskey();
	int getPriceVodka();
	const User* getUsers();
private:
	string music_taste;
	string name;
	User* users;
	int capacity;
	int count;
	int priceWhiskey;
	int priceVodka;
};

void Club::setName(const string& name)
{
	this->name = name;
}

void Club::setMusicTaste(string music_taste)
{
	this->music_taste = music_taste;
}

void Club::setCapacity(int capacity)
{
	if (capacity >= 0)
		this->capacity = capacity;
}

void Club::setPriceVodka(int priceVodka)
{
	if (priceVodka >= 0)
		this->priceVodka = priceVodka;
}

void Club::setPriceWhiskey(int priceWhiskey)
{
	if (priceWhiskey >= 0)
		this->priceWhiskey = priceWhiskey;
}

void Club::setUsers(const User* users)
{
	this->users = new User[capacity];
	for (int i = 0; i < count; i++)
		this->users[i] = users[i];
}

string Club::getName()
{
	return name;
}

string Club::getMusicTaste()
{
	return music_taste;
}

int Club::getCapacity()
{
	return capacity;
}

int Club::getPriceVodka()
{
	return priceVodka;
}

int Club::getPriceWhiskey()
{
	return priceWhiskey;
}

const User* Club::getUsers()
{
	return users;
}

bool Club::AddToClub(const User& user)
{
	int price = user.getVodka * priceVodka + user.getWhiskey * getPriceWhiskey;
	if (user.getYears < 18)
		price += 20;
	if (price > user.getBudget)
	{
		cout << "Not enough budget for " << user.getName << "to enter " << name << endl;
		return false;
	}
	if (capacity = count)
	{
		cout << "Club" << name << "is full!!!!!!!!!!" << endl;
		return false;
	}
	users[count++] = user;
	return true;
}

bool Club::RemoveToClub(const string& name)
{
	for (int i = 0; i < count; i++)
		if (name == users[i].getName)
		{
			for (int j = 0; j < count - 1; j++)
				users[j] = users[j + 1];
			count--;
			return true;
		}
	return false;
}


