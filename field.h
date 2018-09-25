#ifndef FIELD_H
#define FIELD_H



class field
{
public:
    field();
    void drowField();
    void fillField(int side, const char *chess_form);
    void clearField();
    void chooseChess(char column, int row);
    void cancellChoose();
private:

   static const int column_number = 10; // количество столбцов
   static const int row_number = 10; // количество строк
   static const int elements_number = 6; // количество элементов для рисования клеточки
   const char *topBorder = "    _______________________________";
   char  whole_field[row_number][column_number][6] = { {"  ", "  a  ", " b  ", " c  ", " d  ", " e  ", " f  ", " g  ", " h  " },
                                                       {"   ", "____", "____", "____", "____", "____", "____", "____", "___"  },
                                                       {"1 |", "___|", "///|", "___|", "///|", "___|", "///|", "___|", "///|" },
                                                       {"2 |", "///|", "___|", "///|", "___|", "///|", "___|", "///|", "___|" },
                                                       {"3 |", "___|", "///|", "___|", "///|", "___|", "///|", "___|", "///|" },
                                                       {"4 |", "///|", "___|", "///|", "___|", "///|", "___|", "///|", "___|" },
                                                       {"5 |", "___|", "///|", "___|", "///|", "___|", "///|", "___|", "///|" },
                                                       {"6 |", "///|", "___|", "///|", "___|", "///|", "___|", "///|", "___|" },
                                                       {"7 |", "___|", "///|", "___|", "///|", "___|", "///|", "___|", "///|" },
                                                       {"8 |", "///|", "___|", "///|", "___|", "///|", "___|", "///|", "___|" }
                                                     };

};

#endif // FIELD_H
