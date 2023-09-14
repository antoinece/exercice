// 13_09_23.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
/*  const char* names[9] =
    {
        "linus",
        "mathieu",
        "jayson",
        "maxence",
        "maxime",
        "adelina",
        "anthony",
        "antoine",
        "thomas",
    };
   
    int b = 0;
    for (int a = 0; a < 100; a++)
    {

        if (b > 8)
        {
            b = b - 8;
           
        }
        std::cout << names[b] << a <<"\n";
        b++;
            }
*/


#include <iostream>

int main()
{

    int cases[4 * 4]
    {
        0, 0, 1, 0,
        0, 0, 0, 0,
        1, 0, 0, 0,
        0, 0, 0, 0,
    };

    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            int cases_states = cases[row*4+ column];

            if (cases_states == 0)
            {
                std::cout << "-";
            }
            else
            {
                std::cout << "X";
            }
        }
        std::cout << "\n";
    }

}



