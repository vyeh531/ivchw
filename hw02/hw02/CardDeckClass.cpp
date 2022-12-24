#include "cardDeckClass.h"

using namespace std;

static const string suitStrings[] = { "Spades", "Hearts", "Diamonds", "Clubs" };
static const string rankStrings[] = { "Ace", "Two", "Three", "Four", "Five", "Six",
									"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

CardDeckClass::CardDeckClass()
{
	int cardNum = 0;
	// initialize the deck of cards
	for (int suit = SPADES; suit <= CLUBS; suit++)
	{
		for (int rank = ACE; rank <= KING; rank++)
		{
			cards[cardNum].suit = SuitType(suit);
			cards[cardNum].rank = RankType(rank);
			cardNum++;
			
		}
	}
}

CardDeckClass::~CardDeckClass(){}

void CardDeckClass::perfectShuffle()
{
	const int HALF_DECK_SIZE = DECK_SIZE / 2;

	cards halfDeck1 [HALF_DECK_SIZE];
	cards halfDeck2 [HALF_DECK_SIZE];

	int cardNum = 0;
	int deckNum = 0;

	// separate the card in exactly half
	for (cardNum = 0; cardNum < HALF_DECK_SIZE; cardNum++)
	{
		halfDeck1[cardNum] = decks[cardNum];
		halfDeck2[cardNum] = decks[cardNum + HALF_DECK_SIZE];
	}

	deckNum = 0;

	// perfect shuffle
	for (cardNum = 0; cardNum < HALF_DECK_SIZE; cardNum++)
	{
		decks[deckNum] = halfDeck1[cardNum];
		deckNum++;
		decks[deckNum] = halfDeck2[cardNum];
		deckNum++;
	}
}

void CardDeckClass::printDeck()
{
	// display the deck of cards
	for (int cardNum = 0; cardNum < DECK_SIZE; cardNum++)
	{
		cout << card[cardNum].suit << card[cardNum].rank << "\t";
	}
}


bool CardDeckClass::isMatch(Card card, int DECK_SIZE)
{
	for (int i = 0; i <= 52; i++)
	{
		if ((card.getRank() == card[i].getRank())&&
		{
			return true;
		}
	}

}





bool CardDeckClass::operator == (CardDeckClass& newDeck)const
{
	
	if (deck == newDeck.deck)
	{
		return true;
	}
	else
	{
		return false;
	}
	//return (deck == newDeck.deck);

}