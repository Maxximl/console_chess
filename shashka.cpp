#include "shashka.h"

shashka::shashka(char form, int posX, int posY)
    : chessForm(form), positionX(posX), positionY(posY)
{

}

const char * shashka::getForm() const
{
    return &chessForm;
}

void shashka::setSide(int sd)
{
    side = sd;
}