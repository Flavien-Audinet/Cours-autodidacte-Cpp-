#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    {
        SetConsoleTextAttribute(hConsole, k = 11);
        cout << "                                         Bienvenue dans le ";
        SetConsoleTextAttribute(hConsole, k = 6);
        cout << "JUSTE PRIX !" << endl << endl;
        SetConsoleTextAttribute(hConsole, k = 7);
    }

    char choix;

    do
    {
        cout << "J : jouer" << endl;
        cout << "Q : quitter " << endl;
        cout << "R : les regles du jeu" << endl;

        cin >> choix;

        switch (choix) //debut switch 1
        {
        case 'j':

            char choixA;

            do
            {
                {
                    SetConsoleTextAttribute(hConsole, k = 11);
                    cout << endl << "       Choisissez votre difficulter" << endl << endl;
                    SetConsoleTextAttribute(hConsole, k = 7);
                }

                cout << "F : facile" << endl;
                cout << "N : normal" << endl;
                cout << "D : difficile" << endl;
                cout << "Q : quitter" << endl;

                cin >> choixA;

                switch (choixA) //debut du switch 2
                {
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                case 'f':
                    /*
                        jeu facile
                    */

                    for (auto aDeviner : { 0 , 0 , 0 })
                    {
                        auto proposition{ 0 };
                        auto nombreTentative{ 0 };

                        srand(time(0));
                        aDeviner = rand() % 100 + 1;

                        do
                        {
                            {
                                SetConsoleTextAttribute(hConsole, k = 10);
                                cout << endl << "Entrer un nombre :" << endl;
                                SetConsoleTextAttribute(hConsole, k = 7);
                            }
                            {
                                SetConsoleTextAttribute(hConsole, k = 13);
                                cin >> proposition;
                                SetConsoleTextAttribute(hConsole, k = 7);
                            }

                            if (proposition >= 0 && 100)
                            {
                                nombreTentative++;

                                if (proposition == aDeviner)
                                {
                                    {
                                        SetConsoleTextAttribute(hConsole, k = 6);
                                        cout << "Vous avez GAGNER !" << endl;

                                        SetConsoleTextAttribute(hConsole, k = 10);
                                        cout << "Votre nombres de tentatives ";

                                        SetConsoleTextAttribute(hConsole, k = 6);
                                        cout << ": " << nombreTentative << endl << endl;
                                        SetConsoleTextAttribute(hConsole, k = 7);
                                    }
                                }

                                else if (proposition > aDeviner)
                                {
                                    cout << "C'est plus petit" << endl << endl;
                                }

                                else cout << "C'est plus grand" << endl << endl;

                                if (proposition > 100)
                                {
                                    cout << "Le maximun c'est 100 !" << endl << endl;
                                    nombreTentative--;
                                }
                            }

                        } while (proposition != aDeviner);
                    }
                    break;
                    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                case 'n':
                    /*
                        jeu normal
                    */

                    for (auto aDeviner : { 0 , 0 , 0 })
                    {
                        auto proposition{ 0 };
                        auto nombreTentative{ 0 };

                        srand(time(0));
                        aDeviner = rand() % 1'000 + 1;

                        do
                        {
                            {
                                SetConsoleTextAttribute(hConsole, k = 10);
                                cout << endl << "Entrer un nombre :" << endl;
                                SetConsoleTextAttribute(hConsole, k = 7);
                            }
                            {
                                SetConsoleTextAttribute(hConsole, k = 13);
                                cin >> proposition;
                                SetConsoleTextAttribute(hConsole, k = 7);
                            }

                            if (proposition >= 0 && 1'000)
                            {
                                nombreTentative++;

                                if (proposition == aDeviner)
                                {
                                    {
                                        SetConsoleTextAttribute(hConsole, k = 6);
                                        cout << "Vous avez GAGNER !" << endl;

                                        SetConsoleTextAttribute(hConsole, k = 10);
                                        cout << "Votre nombres de tentatives ";

                                        SetConsoleTextAttribute(hConsole, k = 6);
                                        cout << ": " << nombreTentative << endl << endl;
                                        SetConsoleTextAttribute(hConsole, k = 7);
                                    }
                                }

                                else if (proposition > aDeviner)
                                {
                                    cout << "C'est plus petit" << endl << endl;
                                }

                                else cout << "C'est plus grand" << endl << endl;

                                if (proposition > 1'000)
                                {
                                    cout << "Le maximun c'est 1 000 !" << endl << endl;
                                    nombreTentative--;
                                }
                            }

                        } while (proposition != aDeviner);
                    }
                    break;

                    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                case 'd':
                    /*
                        jeu difficile
                    */

                    for (auto aDeviner : { 0 , 0 , 0 })
                    {
                        auto proposition{ 0 };
                        auto nombreTentative{ 0 };

                        srand(time(0));
                        aDeviner = rand() % 10'000 + 1;

                        do
                        {
                            {
                                SetConsoleTextAttribute(hConsole, k = 10);
                                cout << endl << "Entrer un nombre :" << endl;
                                SetConsoleTextAttribute(hConsole, k = 7);
                            }
                            {
                                SetConsoleTextAttribute(hConsole, k = 13);
                                cin >> proposition;
                                SetConsoleTextAttribute(hConsole, k = 7);
                            }

                            if (proposition >= 0 && 10'000)
                            {
                                nombreTentative++;

                                if (proposition == aDeviner)
                                {
                                    {
                                        SetConsoleTextAttribute(hConsole, k = 6);
                                        cout << "Vous avez GAGNER !" << endl;

                                        SetConsoleTextAttribute(hConsole, k = 10);
                                        cout << "Votre nombres de tentatives ";

                                        SetConsoleTextAttribute(hConsole, k = 6);
                                        cout << ": " << nombreTentative << endl << endl;
                                        SetConsoleTextAttribute(hConsole, k = 7);
                                    }
                                }

                                else if (proposition > aDeviner)
                                {
                                    cout << "C'est plus petit" << endl << endl;
                                }

                                else cout << "C'est plus grand" << endl << endl;

                                if (proposition > 10'000)
                                {
                                    cout << "Le maximun c'est 10 000 !" << endl << endl;
                                    nombreTentative--;
                                }
                            }

                        } while (proposition != aDeviner);
                    }
                    break;

                    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                case 'q':
                {
                    SetConsoleTextAttribute(hConsole, k = 4);
                    cout << "Vous avez quitter !" << endl;
                    SetConsoleTextAttribute(hConsole, k = 7);
                }
                return 0;
                break;

                default:
                    if (choixA != 'f' && 'n' && 'd' && 'q') {
                        {
                            SetConsoleTextAttribute(hConsole, k = 4);
                            cout << endl << "error 404" << endl << "page not found" << endl << endl;
                            SetConsoleTextAttribute(hConsole, k = 7);
                        }
                    }
                    break;

                }//fin du switch 2

            } while (choixA != 'f' && 'n' && 'd' && 'q');
            break;

        case 'q':
        {
            SetConsoleTextAttribute(hConsole, k = 4);
            cout << "Vous avez quitter !" << endl;
            SetConsoleTextAttribute(hConsole, k = 7);
        }
        return 0;
        break;

        case 'r':
        {
            SetConsoleTextAttribute(hConsole, k = 13);
            cout << endl << "                             LES REGLES" << endl << endl;
            SetConsoleTextAttribute(hConsole, k = 11);
        }
        cout << "   Les regles sont tres simple, il suffit de trouver les nombres" << endl;
        cout << "   avec le moins de tentatives possible." << endl;
        cout << "   Il y a 3 nombres les uns a la suite des autres," << endl;
        cout << "     comprie entre 1 et 100 en FACILE," << endl;
        cout << "     comprie entre 1 et 1 000 en NORMAL," << endl;
        cout << "     et comprie entre 1 et 10 000 en DIFFICILE." << endl << endl;
        {
            SetConsoleTextAttribute(hConsole, k = 13);
            cout << "     Que la chance soit avec vous !" << endl;
            cout << "     Bon jeu !" << endl << endl;
            SetConsoleTextAttribute(hConsole, k = 7);
        }
        break;

        default:
            if (choix != 'r') {
                {
                    SetConsoleTextAttribute(hConsole, k = 4);
                    cout << endl << "error 404" << endl << "page not found" << endl << endl;
                    SetConsoleTextAttribute(hConsole, k = 7);
                }
            }
            break;

        }//fin du switch 1

    } while (choix != 'j' || 'r');
}
