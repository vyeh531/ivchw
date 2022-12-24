/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #2	: Deck of Cards
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 01/29/2021
*********************************************************/

#ifndef cardDeckClass_h
#define cardDeckClass_h

#include "card.h"


class CardDeckClass
{
private:
	static const int DECK_SIZE = 52;
	enum RankType{ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
	enum SuitType{SPADES, HEARTS, DIMONDS, CLUBS};


	Card cards[DECK_SIZE];
	
public:
	
	//************************************************
	//
	//** CONSTRUCTOR *********************************
	CardDeckClass();
	//************************************************
	//
	//*** DESTRUCTOR *********************************
	~CardDeckClass();
	//************************************************
	//
	//***** PERFORM perfect shuffle ******************
	void perfectShuffle();
	//************************************************
	//
	//****** printDeck() *****************************
	// Access function 
	// 
	// This function is an access function, and the 
	// purpose of this function is to display a deck 
	//
	// PRE-CONDITIONS
	//		A deck's information
	// 
	// POST-CONDITIONS
	//		A deck's information
	//
	void printDeck();

	//************************************************
	//
	//****** operator == () **************************
	// Method operator == : class CardDeckClass
	// 
	// This method is an overloaded version of the 
	// operator ==, and the purpose of this method is 
	// to compare a deck to another and check whether
	// the order of cards is the same
	//
	// PRE-CONDITIONS
	//		Two decks to be compared
	// 
	// POST-CONDITIONS
	//		A boolean representing whether two decks are
	//		the same
	//

	
	bool isMatch(Card cards, int DECK_SIZE);
	bool operator == (CardDeckClass& newDeck) const;
	
};



#endif	//cardDeckClass_h