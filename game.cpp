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
    createBox();
}
game::~game()
{

    delete mField;
}

void game::startGame()
{
    mField->drowField();
    beginSetup(); // запрос стороны и цвета  шашек
    initBox();    // инициализировать коробку в соответствии с начальным адресами
    setChessPosition();
    mField->drowField();



}

void game::playGame()
{

}

void game::createBox()
{
    for (size_t i = 0; i < sizeBox/ 2; i++) // создаем 12 белых шашек
    {
        box[i] = new shashka('o');

    }

    for (size_t  i = sizeBox / 2; i < sizeBox; i++) // создаем 12 черных шашек
    {
        box[i] = new shashka('*');

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
            for (int i = 0; i < sizeBox / 2; i++)
            {
               box[i]->setSide(1);
            }
            for (int i = sizeBox / 2; i < sizeBox; i++)
            {
               box[i]->setSide(2);
            }
        }
        else if (color == '*') // если выбрали черные
        {
            for (size_t  i = 0; i < sizeBox / 2 ; i++)
            {
               box[i]->setSide(2);


            }
            for (int i = sizeBox / 2; i < sizeBox; i++)
            {
               box[i]->setSide(1);
            }
        }
     }
    else if (side == 2)  // если выбрали играть сверху
    {
        if (color == 'o') // если выбрали белые
        {
            for (size_t  i = 0; i < sizeBox / 2; i++)
            {
               box[i]->setSide(2);
            }
            for (int i = sizeBox / 2; i < sizeBox; i++)
            {
               box[i]->setSide(1);
            }
        }
        else if (color == '*') // если выбрали черные
        {
            for (size_t  i = 0; i < sizeBox / 2; i++)
            {
               box[i]->setSide(1);
            }
            for (int i = sizeBox / 2; i < sizeBox; i++)
            {
               box[i]->setSide(2);
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
  for (int i = 0; i < sizeBox / 2; i++)
  {
      if (box[i]->getSide() == 1)
      {cout << "pos1" << endl;
          mField->fillField(box[i]->getX(), box[i]->getY(), box[i]->getForm());
      }
       else if (box[i]->getSide() == 2)
      { cout << "pos2" << endl;
          mField->fillField(box[i]->getX(), box[i]->getY(), box[i]->getForm());

      }
  }
  for (int i = sizeBox / 2; i < sizeBox; i++)
  {cout << "pos3" << endl;
      if (box[i]->getSide() == 1)
      {
          mField->fillField(box[i]->getX(), box[i]->getY(), box[i]->getForm());
      }
      else if (box[i]->getSide() == 2)
      {cout << "pos4" << endl;
          mField->fillField(box[i]->getX(), box[i]->getY(), box[i]->getForm());
          cout << "pos" << endl;
      }
  }
}

void game::initBox()
{
    for (int i = 0; i < sizeBox / 2; i++) // проходимся по белым шашкам, т.к. они первые 12 в коробке
    {
        if(box[i]->getSide() == 2) // если сторона белых "верх"
        {
            box[i]->setPosition(allowedPosition[i]/10, allowedPosition[i]%10); // расставляем вверху доски
        }
        else if (box[i]->getSide() == 1) // если сторона белых "низ"
        {
            box[i]->setPosition(allowedPosition[i+20]/10, allowedPosition[i+20]%10); // расставляем внизу доски

        }
    }

    for (int i = sizeBox/2; i < sizeBox; i++) // проходимся по черным шашкам, т.к они следующие 12 за белыми
    {
        if(box[i]->getSide() == 2) // если сторона черных "верх"
        {
            box[i]->setPosition(allowedPosition[i-12]/10, allowedPosition[i-12]%10);
        }
        else if (box[i]->getSide() == 1)
        {
            box[i]->setPosition(allowedPosition[i+8]/10, allowedPosition[i+8]%10);
        }
    }
}

//void game::initBox()
//{
//    if(box->at(0)->getSide() == 1)
//    {
//        box->at(0)->setPosition(2, 2);
//    }
//    if(box->at(1)->getSide() == 1)
//    {
//        box->at(1)->setPosition(2, 4);
//    }
//    if(box->at(2)->getSide() == 1)
//    {
//        box->at(2)->setPosition(2, 6);
//    }
//    if(box->at(3)->getSide() == 1)
//    {
//        box->at(3)->setPosition(2, 8);
//    }
//    if(box->at(4)->getSide() == 1)
//    {
//        box->at(4)->setPosition(3, 1);
//    }
//    if(box->at(5)->getSide() == 1)
//    {
//        box->at(5)->setPosition(3, 3);
//    }
//    if(box->at(6)->getSide() == 1)
//    {
//        box->at(6)->setPosition(3, 5);
//    }
//    if(box->at(7)->getSide() == 1)
//    {
//        box->at(7)->setPosition(3, 7);
//    }
//    if(box->at(8)->getSide() == 1)
//    {
//        box->at(8)->setPosition(4, 2);
//    }
//    if(box->at(9)->getSide() == 1)
//    {
//        box->at(9)->setPosition(4, 4);
//    }
//    if(box->at(10)->getSide() == 1)
//    {
//        box->at(10)->setPosition(4, 6);
//    }
//    if(box->at(11)->getSide() == 1)
//    {
//        box->at(11)->setPosition(4, 8);
//    }
//    if(box->at(12)->getSide() == 1)
//    {
//        box->at(12)->setPosition(2, 2);
//    }

//}
