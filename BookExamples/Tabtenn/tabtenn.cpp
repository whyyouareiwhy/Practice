// tabtenn.cpp -- Methods for TableTennisPlayer class
#include "tabtenn.h"
#include <iostream>
#include <string.h>

TableTennisPlayer::TableTennisPlayer(const char * fn, const char * ln, bool ht)
{
    len = strlen(fn);
    firstName = new char[len + 1];
    strcpy(firstName, fn);
    lastName = new char[len + 1];
    strcpy(lastName, ln);
    hasTable = false;
}

TableTennisPlayer::TableTennisPlayer(const TableTennisPlayer & tp)
{
    firstName = new char[strlen(tp.firstName) + 1];
    strcpy(firstName, tp.firstName);
    lastName = new char[strlen(tp.lastName) + 1];
    strcpy(lastName, tp.lastName); 
    hasTable = tp.hasTable;
}

TableTennisPlayer::~TableTennisPlayer()
{
    cout << "Deleting TableTennisPlayer" << endl;
    delete [] firstName, lastName;
}

void TableTennisPlayer::Name() const
{
    std::cout << lastName << ", " << firstName;
}

RatedPlayer::RatedPlayer(int r, const char * fn, const char * ln, bool ht) : 
        TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(int r, const TableTennisPlayer & tp) :
        TableTennisPlayer(tp), rating(r)
{
    /*
    len = tp.firstName;
    firstName = new char[len + 1];
    strcpy(firstName, tp.fn);
    len = tp.lastName;
    lastName = new char[len + 1];
    strcpy(lastName, tp.ln);
    */
}

RatedPlayer::~RatedPlayer()
{
    cout << "RatedPlayer destrcutor" << endl;
}

void RatedPlayer::ResetRating(int r)
{
    rating = r;
}

