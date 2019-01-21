// tabtenn.h -- Inheritance with base class
#ifndef TABTENN_H_
#define TABTENN_H_
#include <iostream>

using namespace std;

class TableTennisPlayer
{
    private:
        char* firstName;
        char* lastName;
        bool hasTable;
        int len = 0;
    public:
        TableTennisPlayer(const char * fn = "none", const char * ln = "none", bool ht = false);
        TableTennisPlayer(const TableTennisPlayer & tp);    // Copy constructor.
        ~TableTennisPlayer();
        void Name() const;
        bool HasTable() const { return hasTable; }
        void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer : public TableTennisPlayer
{
    private:
        int rating;
    public:
        RatedPlayer(int r = 0, const char * fn = "none", const char * ln = "none", bool ht = false);
        RatedPlayer(int r, const TableTennisPlayer & tp);    // Copy constructor.
        ~RatedPlayer();
        int Rating() { return rating; }
        void ResetRating(int r); 

};

#endif
