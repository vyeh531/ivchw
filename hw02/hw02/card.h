/*********************************************************
* AUTHOR		: Vivian Yeh
* Assignment #2	: Deck of Cards
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 01/29/2021
*********************************************************/

#ifndef card_h
#define card_h


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Card 
{
private:
    char suit;
    int rank;
public:
    Card();
    int getSuit();
    int getRank();
   
};

#endif