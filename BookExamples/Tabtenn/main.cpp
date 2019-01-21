// main.cpp
#include <iostream>
#include "tabtenn.h"

int main()
{
    {
            TableTennisPlayer player1("Tobe", "Copied", true);
            TableTennisPlayer player2("Another", "Player", false);
            RatedPlayer Rplayer3(10, "Rated", "Player", true);
            RatedPlayer Rplayer4(7, player1);

            player1.Name(); 
            if(player1.HasTable())
                    cout << ": has a table." << endl;
            else
                    cout << ": doesn't have a table." << endl;
            player2.Name();
            if(player2.HasTable())
                    cout << ": has a table." << endl;
            else
                    cout << ": doesn't have a table." << endl;

            // Base class pointer
            TableTennisPlayer * ptr = &Rplayer3;
            ptr->Name();
            //Rplayer3.Name();
            if(Rplayer3.HasTable())
                    cout << ": has a table." << endl;
            else
                    cout << ": doesn't have a table." << endl;
            cout << "Rating: " << Rplayer3.Rating() << endl;

            Rplayer4.Name();
            if(Rplayer4.HasTable())
                    cout << ": has a table." << endl;
            else
                    cout << ": doesn't have a table." << endl;
            cout << "Rating: " << Rplayer4.Rating() << endl;

    }
    return 0;
}
