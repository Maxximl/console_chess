#include "field.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
field::field()
{

}

void field::drowField()
{
    for (int i = 0; i < row_number; i++)
    {
        for ( int j = 0; j < column_number; j++)
        {
            for (int k = 0; k < elements_number; k++)
            {
                cout << whole_field[i][j][k];
            }
        }
        cout << endl;
    }
}

void field::fillField(int x, int y, const char* chess )
{
  whole_field[y][x][1] = *chess;
}

void field::clearField()
{
    for ( int i = 0; i < row_number/2; i+=2)
    {
        for (int j = 1; j < column_number; j+=2)
        {
            whole_field[i][j][1] = '/';
        }
    }

    for ( int i = 1; i < row_number/2-1; i+=2)
    {
        for (int j = 0; j < column_number; j+=2)
        {
            whole_field[i][j][1] = '/';
        }
    }

    for ( int i = 5; i < row_number; i+=2)
    {
        for (int j = 0; j < column_number; j+=2)
        {
            whole_field[i][j][1] = '/';
        }
    }

    for ( int i = 6; i < row_number; i+=2)
    {
        for (int j = 1; j < column_number; j+=2)
        {
            whole_field[i][j][1] = '/';
        }
    }
}


void field::chooseChess(char column, int row)
{
    whole_field[row+2][(((int)column-121))][1] = '$';
}


void field::cancellChoose()
{
    char addressX;
    int addressY;

    cout << "Введи адрес шашки, чтобы отменить выбор: ";
    cin >> addressX >> addressY;
    if (whole_field[addressY+2][(((int)addressX-121))][1] == '$')
    {
        whole_field[addressY+2][(((int)addressX-121))][1] = '&';
        cout << addressY << " " << addressX << endl;
        cout << "Введи адрес шашки, которую необходимо выбрать: ";
    }
}
