#include <iostream>
#include <windows.h>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
    //------------------------------------------------------------------COULEUR

    HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    {
        SetConsoleTextAttribute(hConsole, k = 11);
        cout << "                                         Bienvenue dans le " ;
        SetConsoleTextAttribute(hConsole, k = 6);
        cout << "JUSTE PRIX !" << endl << endl;
        SetConsoleTextAttribute(hConsole, k = 7);
    }

    //------------------------------------------------------------------DEBUT BOUCLES 1

    char choix;
    do {
        cout << "J : jouer" << endl;
        cout << "Q : quitter " << endl;
        cout << "R : les regles du jeu" << endl;

        cin >> choix;

    //------------------------------------------------------------------SWITCH 1  1ER CAS

        switch (choix) {
        case 'j':

            //------------------------------------------------------------------DEBUT BOUCLES 2

            char aChoix;
            do {
                cout << endl << "F : facile" << endl;
                cout << "N : normal" << endl;
                cout << "D : difficile" << endl;
                cout << "Q : quitter" << endl << endl;

                cin >> aChoix;


//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            //------------------------------------------------------------------SWITCH 2  1ER CAS   VARIABLE ALEATOIRE   JEU 1

                switch (aChoix) {
                case 'f':
                    for (auto aDeviner : { 0 , 0 , 0 }) {
                        auto proposition{ 0 };
                        auto nombreTentative{ 0 };

                        srand(time(0));
                        aDeviner = rand() % 100 + 1;
                       
                    //------------------------------------------------------------------DEBUT BOUCLE JEU 1

                        do {
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

                        //------------------------------------------------------------------FONTION DEBUT JEU 1

                            if (proposition >= 0 && 100) {
                                nombreTentative++;
                                if (proposition == aDeviner) {
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

                            //------------------------------------------------------------------FONCTION PRINCIPAL JEU 1

                                else if (proposition > aDeviner) {
                                    cout << "C'est plus petit" << endl << endl;
                                }

                                else cout << "C'est plus grand" << endl << endl;

                                if (proposition > 100) {
                                    cout << "Le maximun c'est 100 !" << endl << endl;
                                }
                            }

                        //------------------------------------------------------------------FIN BOUCLE JEU 1

                        } while (proposition != aDeviner);
                    }
                    break;

//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            //------------------------------------------------------------------SWITCH 2  2E CAS   VARIABLE ALEATOIRE   JEU 2

                case 'n':
                    for (auto aDeviner : { 0 , 0 , 0 }) {
                        auto proposition{ 0 };
                        auto nombreTentative{ 0 };

                        srand(time(0));
                        aDeviner = rand() % 1'000 + 1;

                    //------------------------------------------------------------------DEBUT BOUCLE JEU 2

                        do {
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

                        //------------------------------------------------------------------FONTION DEBUT JEU 2

                            if (proposition >= 0 && 1'000) {
                                nombreTentative++;
                                if (proposition == aDeviner) {
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

                            //------------------------------------------------------------------FONCTION PRINCIPAL JEU 2

                                else if (proposition > aDeviner) {
                                    cout << "C'est plus petit" << endl << endl;
                                }

                                else cout << "C'est plus grand" << endl << endl;

                                if (proposition > 1'000) {
                                    cout << "Le maximun c'est 1 000 !" << endl << endl;
                                }
                            }

                        //------------------------------------------------------------------FIN BOUCLE JEU 2

                        } while (proposition != aDeviner);
                    }
                    break;

//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            //------------------------------------------------------------------SWITCH 3  3E CAS   VARIABLE ALEATOIRE   JEU 3

                case 'd':
                    for (auto aDeviner : { 0 , 0 , 0 }) {
                        auto proposition{ 0 };
                        auto nombreTentative{ 0 };

                        srand(time(0));
                        aDeviner = rand() % 10'000 + 1;

                    //------------------------------------------------------------------DEBUT BOUCLE JEU 3

                        do {
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

                         //------------------------------------------------------------------FONTION DEBUT JEU 3

                            if (proposition >= 0 && 10'000) {
                                nombreTentative++;
                                if (proposition == aDeviner) {
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

                            //------------------------------------------------------------------FONCTION PRINCIPAL JEU 3

                                else if (proposition > aDeviner) {
                                    cout << "C'est plus petit" << endl << endl;
                                }

                                else cout << "C'est plus grand" << endl << endl;

                                if (proposition > 10'000) {
                                    cout << "Le maximun c'est 10 000 !" << endl << endl;
                                }
                            }

                        //------------------------------------------------------------------FIN BOUCLE JEU 3

                        } while (proposition != aDeviner);
                    }
                    break;

//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
            //------------------------------------------------------------------SWITCH 2  4E CAS   QUITTER

                case 'q':
                    {
                        SetConsoleTextAttribute(hConsole, k = 4);
                        cout << "Vous avez quitter !" << endl;
                        SetConsoleTextAttribute(hConsole, k = 7);
                    }
                    return 0;
                    break;

            //------------------------------------------------------------------SWITCH 2  5E CAS

                default :
                {
                    SetConsoleTextAttribute(hConsole, k = 4);
                    cout << endl << "error 404" << endl << "page not found" << endl << endl;
                    SetConsoleTextAttribute(hConsole, k = 7);
                }
                    break;
                }

            } while (aChoix != 'f' && 'n' && 'd');
            break;
           
    //------------------------------------------------------------------SWITCH 1  2E CAS   QUITTER

        case 'q':
            {
                SetConsoleTextAttribute(hConsole, k = 4);
                cout << "Vous avez quitter !" << endl;
                SetConsoleTextAttribute(hConsole, k = 7);
            }
            return 0;
            break;

    //------------------------------------------------------------------SWITCH 1  3E CAS   REGLES

        case 'r':
            {
                SetConsoleTextAttribute(hConsole, k = 13);
                cout << endl<< "                             LES REGLES" << endl << endl;
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
                cout << "     Que la chance soit avec vous !"<<endl;
                cout << "     Bon jeu !" << endl << endl;
                SetConsoleTextAttribute(hConsole, k = 7);
            }
            break;

    //------------------------------------------------------------------SWITCH 1  4E CAS

        default:
            if (choix != 'r') {
                {
                    SetConsoleTextAttribute(hConsole, k = 4);
                    cout << endl << "error 404" << endl << "page not found" << endl << endl;
                    SetConsoleTextAttribute(hConsole, k = 7);
                }
            }
            break;
        }
    } while (choix != 'q');
}//------------------------------------------------------------------FIN DE BOUCLE