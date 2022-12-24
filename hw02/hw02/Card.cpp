#include "card.h"


Card::Card()
{
	suit = this->suit;
	rank = this->rank;
}

int Card::getSuit()
{
	return suit = this->suit;
}

int Card::getRank()
{
	return rank = this->rank;
}

