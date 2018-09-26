#ifndef SHASHKA_H
#define SHASHKA_H

// Класс, описывающий шашку
// o - белая
// * - черная
// $ - выделенная шашка
// 0 - белая дамка
// # - черная дамка

class shashka
{
public:

   shashka(char form = 'N', int posX = -1, int posY = -1);
   ~shashka();
   const char * getForm() const;
   void setPosition(const int y, const int x);
   void kill(bool isKill);
   void setQueen(bool isQueen);
   bool isQueen() const;
   bool isDied() const;
   void setSide(int sd);
   void setChoosed();
   bool isChoosed() const;
   int getSide() const;
   int getX() const;
   int getY() const;
private:
    char chessForm;
    int positionX;
    int positionY;
    bool choosed = false;
    bool Queen = false; // дамка ли?
    bool died = false;  // шашка срублена?
    int side = 0; // какой стороне принадлежит шашка: 0 - по умолчанию, 1 - низ, 2 - верх
};

#endif // SHASHKA_H
