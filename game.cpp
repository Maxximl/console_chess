#include "game.h"
#include "field.h"
#include "shashka.h"
#include <iostream>
#include <string>
#include <stdio.h>
using std::cout;
using std::endl;
using std::cin;

game::game()
{
    mField = new field;

}
game::~game()
{

    delete mField;
}

void game::startGame()
{
    mField->drowField();
    beginSetup();




}

void game::playGame()
{

}

void game::createBox()
{
    for (size_t i = 0; i < box->size() / 2; i++) // создаем 12 белых шашек
    {
        box->push_back(new shashka('o'));
    }

    for (size_t  i = box->size() / 2; i < box->size(); i++) // создаем 12 черных шашек
    {
        box->push_back(new shashka('*'));
    }
}

void game::beginSetup()
{
    int side;
    char color;

    cout << "Выбери где хочешь играть?\n1 - снизу \n2 - сверху: ";
    cin >> side;
    cout << "Выбери цвет шашек: \n * - черные  \n o - белые: ";
    cin >> color;

    if (side == 1) // если выбрали играть снизу
    {
        if (color == 'o') // если выбрали белые
        {
            for (size_t i = 0; i < box->size() / 2; i++)
            {
               box->at(i)->setSide(side);
            }
        }
        else if (color == '*') // если выбрали черные
        {
            for (size_t  i = box->size() / 2; i < box->size(); i++)
            {
               box->at(i)->setSide(side);
            }
        }
     }
    else if (side == 2)  // если выбрали играть сверху
    {
        if (color == 'o') // если выбрали белые
        {
            for (size_t  i = 0; i < box->size() / 2; i++)
            {
               box->at(i)->setSide(side);
            }
        }
        else if (color == '*') // если выбрали черные
        {
            for (size_t  i = box->size() / 2; i < box->size(); i++)
            {
               box->at(i)->setSide(side);
            }
        }
    }
    else
    {
        cout << "Введи корректную команду: \n";
    }

}

void game::setChessPosition()
{
    for (size_t  i = 0; i < box->size(); i++)
    {
        if (box->at(i)->getSide() == 1)
        {
//            box->at(i)->setPosition();
        }
    }
}
