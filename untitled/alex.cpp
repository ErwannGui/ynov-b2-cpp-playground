#include <iostream>
using namespace std;
int main()
{
    //Déclaration des variables utiles
    double a(0), b(0),resultat;
    char choix, calc;
    bool infinie = true;
    cout << "Calculatrice !" << endl;
    while (infinie) // boucle infinie
    {
        cout << "calculer (c) ou reset le calcule a 0 (r)" << endl;
        cin >> calc;
        switch (calc)
        {
            case 'r':
                cout << "Resultat remi a zero : "; //On remet le calcule a 0
                resultat = 0;
                break;
            case 'c':
                cout << "Donnez une valeur pour a : "; //On demande le premier nombre
                cin >> a;
                cout << "Donner l'opérateur : "; //On demande l'operateur
                cin >> choix;
                switch (choix)
                {
                    case '+':
                        cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
                        cin >> b;
                        resultat = resultat + (a + b);
                        break;
                    case '-':
                        cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
                        cin >> b;
                        resultat = resultat + (a - b);
                        break;
                    case '/':
                        cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
                        cin >> b;
                        resultat = resultat + (a / b);
                        break;
                    case '*':
                        cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
                        cin >> b;
                        resultat = resultat + (a * b);
                        break;
                    default:
                        printf("Vous n'avez pas rentre un operateur correct.");
                        break;
                }
                break;
            default:
                printf("Vous n'avez pas rentre de choix correct. Soit r (pour reset le calcule a 0) ou c (pour calculer)");
                break;
        }
        cout << "Resultat = " << resultat << endl;
        //On affiche le résultat
    }
}
