#include<iostream>
#include<cstring>
#include"Club.h"
#include"Music.h"
#include"String.h"
#include"User.cpp"

using namespace std;

class Clubs
{
public:
	const Clubs** getClubs();
	bool AddFolkClub(const string& performer, const string& name, int priceVodka, int priceWhiskey);
	bool AddHouseClub(const string& name, int numberOfDJ, int priceWhiskey, int priceVodka);
	bool AddRockClub(const string& name, int priceVodka, int priceWhiskey);
	bool RemoveClub(const string& name);
	bool AddToClub(const User& user, const string& ClubName);
	bool RemoveFromClub(const string&, const string&);
private:
	Clubs** clubs;
	int capacity;
	int count;
	void AddClub(Club*);
	void Resize();
};

const Clubs** Clubs::getClubs()
{
	return clubs;
}

bool Clubs::AddFolkClub(const string& performer, const string& name, int priceVodka, int priceWhiskey)
{
	if (priceVodka < 20 && priceWhiskey < 35)
		return false;
	AddClub(new FolkClub(name, priceVodka, priceWhiskey, performer));
	return true;
}

bool Clubs::AddHouseClub(const string& name, int numberOfDJ, int priceWhiskey, int priceVodka)
{
	if (priceVodka < 30 && priceWhiskey < 40)
		return false;
	AddClub(new HouseClub(name, numberOfDJ, priceVodka, priceWhiskey));
	return true;
}

bool Clubs::AddRockClub(const string& name, int priceWhiskey, int priceVodka)
{
	if (priceVodka < 20 && priceWhiskey < 35)
		return false;
	AddClub(new RockClub(name, priceVodka, priceWhiskey));
	return true;
}

bool Clubs::RemoveClub(const string& name)
{
	for (int i = 0; i < count; i++)
		if (name == clubs[i]->getClubs())
		{
			delete clubs[i];
			for (int j = i; j < count - 1; j++)
				clubs[j] = clubs[j + 1];
			std::cout << "Removed club " << name << std::endl;
			return true;
		}
	std::cout << "Cannot find club " << name << std::endl;
	return false;
}

bool Clubs::AddToClub(const User& user, const string& ClubName)
{
	for (int i = 0; i < count; i++)
		if (ClubName == clubs[i]->getName());
	return clubs[i]->AddToClub(user);
	cout << "Cannot find club " << ClubName << std::endl;
	return false;
}

bool Clubs::RemoveFromClub(const string&, const string&)
{
	return false;
}

void Clubs::AddClub(Club* clubs)
{
	if (count == capacity)
		Resize();
	clubs[count++] = clubs;
	cout << "Added club " << clubs->getName() << endl;
}
void Clubs::Resize()
{

}


