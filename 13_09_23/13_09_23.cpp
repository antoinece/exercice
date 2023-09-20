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

const int largeur = 4;
const int longeur = 4;

int cases[largeur * longeur]
{

};

int casesJouer[longeur * largeur]
{

};

void drawPlayfield()
{
   

    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            int cases_states = casesJouer[row * 4 + column];

            if (cases_states == 0)
            {
                std::cout << "-";
            }
            else if (cases_states == 1)
            {
                std::cout << "0";
            }
            else 
            {
                std::cout << "X";
            }
        }
        std::cout << "\n";
    }
}



int main()
{
    bool treasureFound = false;
    int x;
    int y;
    int cooordonees;
    int r;
    do
    {
        do
        {
            r = rand();
        } while (r > longeur * largeur);
    } while (r < 0);
    cases[r] = 1;
    std::cout << r;

    do
    {
        std::cout << "coordnees des recherches ?\n";

        std::cout << "coordonee X entre 0 et " << longeur << "?\n";
        std::cin >> x;

        std::cout << "Y ?\n";
        std::cin >> y;

        cooordonees = (x - 1) * 4 + (y-1);

        if (cases[cooordonees]==1)
        {
            casesJouer[cooordonees] = 2;
            treasureFound = true;
        }
        else
        {
            casesJouer[cooordonees] = 1;
        }

        drawPlayfield();

    } while (treasureFound == false);

    std::cout << "bravo tu as trouver le tresor";

}



