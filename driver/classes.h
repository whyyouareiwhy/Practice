// classes.h --
#include <deque>
#include <stdlib.h>
using namespace std;

class Player
{
public:
    int x, y;
    Player(int width);

};

class Lane
{
private:
    deque<bool>cars;
public:
    Lane(int width);
    void Move();
    bool checkPos(int pos);
};

class Game
{
private:
    bool quit;
    int numLanes;
    int width;
public:
    void Draw();
    void Input();
    void Logic();
    void Run();
};


