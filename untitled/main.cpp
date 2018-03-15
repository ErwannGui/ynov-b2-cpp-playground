/* ***** -- Partie Erwann -- ***** */

    /* --- Programme de recherche des nombres premiers --- */

    /*#include <iostream>
    #include <vector>

    using namespace std;


    bool est_premier(int nombre); // déclaration du booléen déterminant si le nombre est premier ou non
    void affichageNombres(vector<int> nbPremiers); // appel de la fonction d'affichage final

    int main() // fonction lancée, ou on appelle les autres méthodes de traitement
    {
        int nombre = 0;
        vector<int> nbPremiers;

        cout<<"Entrez un nombre : ";
        cin>>nombre;

        *//*cout<<"Voici les nombres premiers compris entre 0 et "+ nombre;*//* //la concaténation ne fonctionne pas et cela me retourne le booléen

        for(int j = 1; j < nombre; j++)
        {
            if(est_premier(j))
                nbPremiers.push_back(j);
        }

        affichageNombres(nbPremiers);
        system("pause");
    }

    bool est_premier(int nombre)
    {

        for(int i = 2; i < nombre; i++)
        {
            if(nombre % i == 0)
                return false;
        }

        return true;
    }

    void affichageNombres(vector<int> nbPremiers)
    {
        for(int k = 0; k < nbPremiers.size(); k++)
            cout<<nbPremiers[k]<<endl;
    }*/

    /* --- Fin de programme --- */

    /* --- Programme factorisation des nombres premiers non terminé --- */

    #include <iostream>
    #include <vector>
    #include <cmath>

    using namespace std;

    void np_generator(vector<int>&,bool = false,int = 100);
    bool est_premier(int,vector<int> const&);
    bool factorisation(unsigned int,vector<int> const&,vector<int>&);
    void affiche_factorisation(vector<int> const&);


    int main()
    {
        int prem;
        unsigned int nbr;
        char rec;
        vector<int> tab_nombres_premiers,tab_factorisation;
        cout<<"entrer le nombre de nombres premiers a generer : ";
        cin>>prem;
        np_generator(tab_nombres_premiers,true,prem);
        do
        {
            tab_factorisation.clear();
            cout<<endl<<"vous pouver factoriser tout les nombres <= "<<(unsigned int)(tab_nombres_premiers[prem-1]*tab_nombres_premiers[prem-1])<<endl;
            cout<<"entrer le nombre premiers a factorise : ";
            cin>>nbr;
            cout<<endl<<"   "<<nbr<<" = ";
            if(factorisation(nbr,tab_nombres_premiers,tab_factorisation))
                affiche_factorisation(tab_factorisation);
            cout<<endl<<endl<<"recomencer O/N ? ";
            cin>>rec;
        }while(rec!='n' && rec!='N');

        return 0;
    }

    void np_generator(vector<int>& tab_np,bool aff,int nag)
    {
        int counter(1),nbr_pr;
        if(nag<=9)
            cout<<"erreur parametre"<<endl;
        else
        {
            nbr_pr = 2;
            tab_np.push_back(nbr_pr);
            if(aff)
                cout<<counter<<". "<<nbr_pr<<endl;
            do
            {
                nbr_pr++;
                if(est_premier(nbr_pr,tab_np)==true)
                {
                    tab_np.push_back(nbr_pr);
                    counter++;
                    if(aff)
                        cout<<counter<<". "<<nbr_pr<<endl;
                }
            }while(counter<nag);
        }
    }

    bool est_premier(int nbr,vector<int> const& tab_premier)
    {
        int limite,taille,counter(0),act;
        bool result(true);
        taille = tab_premier.size();
        limite = fabs(sqrt(nbr));
        do
        {
            act = tab_premier[counter];
            if(nbr%act==0)
            {
                result = false;
                break;
            }
            counter++;
        }while(act<limite && counter<taille);
        return(result);
    }

    bool factorisation(unsigned int nbr,vector<int> const& tab_premier,vector<int>& tab_fact)
    {
        int limite,taille,counter(0),counter_fact(0),act;
        taille = tab_premier.size();
        bool suivant(true);
        //limite = fabs(sqrt(nbr));
        do
        {
            limite = fabs(sqrt(nbr));
            act = tab_premier[counter];
            if(nbr%act==0)
            {
                if(suivant)
                    tab_fact.push_back(act);
                counter_fact++;
                nbr=nbr/act;
                suivant = false;
            }
            else
            {
                if(counter_fact>0)
                    tab_fact.push_back(counter_fact);
                counter++;
                counter_fact=0;
                suivant = true;

            }
        }while(act<=limite && counter<taille);
        if(counter<taille)
        {
            if(counter_fact>0)
                tab_fact.push_back(counter_fact);
            else
            {
                tab_fact.push_back(nbr);
                tab_fact.push_back(1);
            }
            return(true);
        }
        else
        {
            cout<<"erreur nombre trop grand"<<endl;
            return(false);
        }


    }

    void affiche_factorisation(vector<int> const& tab_fact)
    {
        int taille,counter(0);
        taille = tab_fact.size();
        do
        {
            cout<<tab_fact[counter]<<"p";//<<tab_fact[counter];
            counter++;
            cout<<tab_fact[counter];
            counter++;
            if(counter<taille-1)
                cout<<" x ";

        }while(counter<taille-1);
    }

    /* --- Fin de programme --- */

/* ***** -- Fin partie -- ***** */

/* ***** -- Partie Mickaël -- ***** */

/* ***** -- Fin partie -- ***** */

/* ***** -- Partie Alexandre -- ***** */

/* ***** -- Fin partie -- ***** */