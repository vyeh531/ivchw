/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #2	: Deck of Cards
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 01/29/2021
*********************************************************/
#include "cardDeckClass.h"

/**********************************************************
*
* DECK OF CARDS - PERFECT SHUFFLE
*_________________________________________________________
* This program performs a perfect shuffle. In a perfect 
* shuffle, the deck is broken exactly in half and rearranged
* so that the first card is followed by the 27th card,
* followed by the second card, followed by the 28th card, 
* and so on
*_________________________________________________________
* INPUT:
* inp1: First integer to be summed -> input from user
* inp2: Second integer to be summed -> input from user
*
* OUTPUT:
* sum: The sum of the two ages
***********************************************************/
int main()
{
	// constants
	CardDeckClass originDeck; // INPUT - First integer to sum
	CardDeckClass newDeck; // INPUT - Second integer to sum
	int count = 0;

	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C		: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Assignment #2	: Deck of Cards\n";
	cout << "*****************************************\n";

	originDeck.printDeck();

	cout << "\nNow perform perfect Shuffle....\n";
	//newDeck.perfectShuffle();

	cout << "\n\nBelow is the deck of cards after first perfect shuffle:\n";
	newDeck.printDeck();


	if (originDeck == newDeck)
	{
		cout << "\ntrue\n";
	}
	else
	{
		cout << "\nfalse\n";
	}

	/*while (!(originDeck == newDeck))
	{
		newDeck.perfectShuffle();
		count++;
	};*/
	
	
	cout << "\n\Now the order of new deck of cards are equal to the origin one.\n";
	cout << count << "  shuffles are necessary to return the deck to its original configuration. \n";

	// INPUT: A description of what is being input.
	// PROCESSING: Detail what is being processed.
	// OUTPUT: Details of what is being output.
	return 0;
}
