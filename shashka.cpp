#include "shashka.h"
#include <iostream>
using namespace std;
shashka::shashka(char form, int posX, int posY)
    : chessForm(form), positionX(posX), positionY(posY)
{

}

const char * shashka::getForm() const
{
    return &chessForm;
}

void shashka::setSide(int sd)
{ std::cout << "set" << endl;
    side = sd;
}
void shashka::setPosition(const int y, const int x)
{
    positionX = x;
    positionY = y;
}

int shashka::getSide() const
{
    return  side;
}

int shashka::getX() const
{
    return positionX;
}

int shashka::getY() const
{
    return positionY;
}
