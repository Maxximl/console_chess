#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
class field;
class shashka;
class game
{
public:
    game();
    ~game();


    void startGame();
    void playGame();
    void beginSetup();
//    void chooseColor();
    void createBox();
    void setChessPosition();
    void initField(); // расставить шашки на поле в начальных позициях
    void initBox(); // присвоить каждой шашке начальную позицию на поле, взависимости от side


private:
  field * mField = nullptr;
  static const int sizeBox = 24;
  shashka * box[24];
  static const int position_number = 32;
  const int allowedPosition[position_number] =                  {22, 24, 26, 28,
                                                                 31, 33, 35, 37,
                                                                 42, 44, 46, 48,
                                                                 51, 53, 55, 57,
                                                                 62, 64, 66, 68,
                                                                 71, 73, 75, 77,
                                                                 82, 84, 86, 88,
                                                                 91, 93, 95, 97};

};

#endif // GAME_H
