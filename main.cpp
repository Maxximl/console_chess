#include <iostream>
#include "field.h"
#include "game.h"
using namespace std;

int main()
{   char answer;
    game mGame;
    field mf;
    cout << "Сыграем в шашки? ('y' - Да! 'n' - Нет.) " << endl;
    while(cin >> answer)
    {


        if((answer == 'y') || (answer == 'Y'))
        {
            printf("\e[1;1H\e[2J"); // очистить консоль
            mGame.startGame();
            cout << "Buy!\n";
            break;
        }
        else
        {
            printf("\e[1;1H\e[2J"); // очистить консоль
            cout << "Buy!\n";
            break;
        }
    cout << "Сыграем в шашки? ('y' - Да! 'n' - Нет.) " << endl;
    }

    return 0;
}
