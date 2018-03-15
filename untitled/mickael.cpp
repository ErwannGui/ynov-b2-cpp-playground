//// EXO 1 Calcule moyenne des notes
//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main()
//{
//    int nombreNotes;
//    vector<int> notes;
//    int i = 0;
//
//    cout << "Tapez le nombre de note : ";
//    cin >> nombreNotes;
//    while (i < nombreNotes)
//    {
//        cout << "Note " << i+1 << ": ";
//        int note;
//        cin >> note;
//        notes.push_back(note);
//        i++;
//    }
//
//    double moyenne(0);
//    for(int i(0); i<notes.size(); ++i)
//    {
//        moyenne += notes[i];   //On additionne toutes les notes
//    }
//    //En arrivant ici, la variable moyenne contient la somme des notes
//    //Il ne reste donc qu'à diviser par le nombre de notes
//    moyenne /= nombreNotes;
//
//    cout << "Votre moyenne est : " << moyenne << endl;
//
//
//    return 0;
//}



//// EXO 2 Trie a bulle
//#include <stdio.h>
//#include <stdlib.h>
//
//
///*
// * order: 0 = Tri croissant,
// *        1 = Tri decroissant.
// */
//static void echanger_valeur (int * tab, size_t a, size_t b)
//{
//    if (tab != NULL)
//    {
//        int tmp = tab[a];
//        tab[a] = tab[b];
//        tab[b] = tmp;
//    }
//}
//
//static void tri_a_bulle (int * tab, size_t size, int order)
//{
//    int trie = 0;
//
//    if (tab != NULL && size > 1)
//    {
//        while (! trie)
//        {
//            size_t i = 0;
//
//            trie = 1;
//            for (i = 0; i < size - 1; i++)
//            {
//                if (order == 0)
//                {
//                    if (tab[i] > tab[i + 1])
//                    {
//                        echanger_valeur (tab, i, i + 1);
//                        trie = 0;
//                    }
//                }
//                else
//                {
//                    if (tab[i] < tab[i + 1])
//                    {
//                        echanger_valeur (tab, i, i + 1);
//                        trie = 0;
//                    }
//                }
//            }
//        }
//    }
//}
//
//
//int main (void)
//{
//    int i = 0;
//    int tab [] = { 5, 2, 9, 6, 10, 8, 3, 1, 7, 4 };
//
//
//    tri_a_bulle (tab, 10, 0);
//
//    for (i = 0; i < 10; i++)
//    {
//        printf ("%d ", tab[i]);
//    }
//    printf ("\n");
//
//
//    return 0;
//}



//// EXO 3 Trie par maximum
//#include <stdio.h>
//#include <stdlib.h>
//
///*
// * order: 0 = Tri croissant,
// *        1 = Tri decroissant.
// */
//void tri_maximum (int * tab, size_t size, int order)
//{
//    size_t i = 0;
//    size_t j = 0;
//
//
//    if (tab != NULL && size > 1)
//    {
//        /* Parcours du tableau. */
//        for (i = size - 1; i > 0; i--)
//        {
//            /* Recherche du maximum. */
//            size_t max = i;
//            for (j = 0; j <= i; j++)
//            {
//                if (order == 0)
//                {
//                    if (tab[j] > tab[max])
//                    {
//                        max = j;
//                    }
//                }
//                else
//                {
//                    if (tab[j] < tab[max])
//                    {
//                        max = j;
//                    }
//                }
//            }
//
//            /* Echange des valeurs du tableau. */
//            {
//                int tmp = tab[i];
//                tab[i] = tab[max];
//                tab[max] = tmp;
//            }
//        }
//    }
//}
//
//
//int main (void)
//{
//    int i = 0;
//    int tab [] = { 5, 2, 9, 6, 10, 8, 3, 1, 7, 4 };
//
//
//    tri_maximum (tab, 10, 1);
//
//    for (i = 0; i < 10; i++)
//    {
//        printf ("%d ", tab[i]);
//    }
//    printf ("\n");
//
//
//    return 0;
//}

