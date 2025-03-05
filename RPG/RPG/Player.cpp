#include "Player.h"
#include "Mage.h"
#include "Priest.h"
#include "Warrior.h"
#include <iostream>


Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

string Player::getName() const
{
	return name;
}

Race Player::getRace() const
{
	return race;
}

string Player::whatRace() const
{
	if (race == HUMAN)
	{
		return "Human";
	}
	else if (race == ELF)
	{
		return "Elf";
	}
	else if (race == DWARF)
	{
		return "Dwarf";
	}
	else if (race == ORC)
	{
		return "Orc";
	}
	else if (race == TROLL)
	{
		return "Troll";
	}
}

int Player::getHitPoints() const
{
	return hitPoints;
}

int Player::getMagicPoints() const
{
	return magicPoints;
}

void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(Race race)
{
	this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}

