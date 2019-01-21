// classes .cpp
#include "classes.h"
#include <time.h>

Player::Player(int width)
{
    x = width/2;
    y = 0;
}

Lane::Lane(int width)
{
    for(int i = 0; i < width; ++i)
        cars.push_front(false);
}

void Lane::Move()
{
    srand(NULL);
    if(rand() % 10 == 1)
        cars.push_front(true);
    else
        cars.push_front(false);
    cars.pop_back();
}

bool Lane::checkPos(int pos)
{
    return cars[pos];
}

void Game::Draw()
{

}

void Game::Input()
{

}

void Game::Logic()
{

}

void Game::Run()
{
    while(!quit)
    {
        Input();
        Draw();
        Logic();
    }
}

