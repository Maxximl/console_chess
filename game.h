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
    void chooseColor();
    void createBox();
    void setChessPosition();

private:
  field * mField = nullptr;
  std::vector<shashka*> box[24];
//  int allowedPosition[9][9] {}


};

#endif // GAME_H
