#include <iostream>
#include <math.h>

using namespace std;
void exo1()
{
    cout << "Hello World!" << endl;

}


void exo2()
{
    exo1();
}

void exo3()
{
    for ( unsigned i(0); i < 10 ; ++i)
    {
        cout << i << '\t' ;
    }
}


void exo4()
{
    for ( unsigned i(0); i < 200 ; ++i)
    {
        cout << i << '\t' ;
        if (i%10 == 0 )
        {
            cout << endl;
        }
    }
}

void exo5()
{
    unsigned N;
    cout << "rentrer une valeur pour N" << endl;
    cin >> N ;
    for ( unsigned i(0);  i < N ; ++i)
    {
        cout << i << '\t' ;
    }
}


void AfficheNPremiersEntiersNat (const unsigned & N,
                                 const char & Sep)
{
    for (unsigned i(0); i < N; ++i)
    {
        cout << i << Sep;
    }
}

void exo6()
{
    unsigned N;
    cout << "rentrer une valeur pour N" << endl;
    cin >> N;
    char Sep;
    cout << "rentrer une valeur pour Sep" << endl;
    cin >> Sep;
    AfficheNPremiersEntiersNat(N,Sep);
}

void exo7()
{
    cout << "MENU EXERCICES" << endl
         << " 1 : Exercice 1" << endl
         << " 2 : Exercice 2" << endl
         << " 3 : Exercice 3" << endl
         << " 4 : Exercice 4" << endl
         << " 5 : Exercice 5" << endl
         << " 6 : Exercice 6" << endl;


    unsigned SaisieNumExo;
    while (true) {
        cout << "Saisissez numéro exercice" << endl;
        cin >> SaisieNumExo;

        switch (SaisieNumExo) {
            case 1 :
                exo1();
            break;

            case 2 :
                exo2();
            break;

            case 3 :
                exo3();
            break;

            case 4 :
                exo4();
            break;

            case 5 :
                exo5();
            break;

            case 6 :
                exo6();
            break;

            default:
                cout << "Numero d'exercice invalide" << endl;
                continue;

        }

        break;
    }
}

void exo8()
{
    float a;
    cout << "rentrer a" << endl;
    cin >> a;
    float b;
    cout << "rentrer b" << endl;
    cin >> b;
    float c;
    cout << "rentrer c" << endl;
    cin >> c;
    float delta ((b*b) - (4 * a *c));
    if ( delta > 0 )
    {
        float x1 ((- b - sqrt(delta)) / (2 *a));
        float x2 ((- b + sqrt(delta)) / (2 *a));
        cout << "voici x1" << x1 << endl << "voici x2" <<x2 << endl;
    }
    if ( delta == 0 )
    {
        float x1 (- b  / (2 * a));
        cout << x1 << endl ;
    }
    if ( delta < 0 )
    {
        cout << "pas de solutions" << endl;
    }
}

void exo9()
{
    int min;
    cout << "rentrer une borne min" << endl;
    cin >> min;
    int max;
    cout << "rentrer une borne max" << endl;
    cin >> max;

    int Rand (rand()%(max - min) + min);

    int Valeur;
    cout << "rentrer votre valeur" << endl;
    cin >> Valeur;
    if (Valeur < Rand)
    {
        cout << "c'est moins" << endl;
    }
    else if (Valeur > Rand)
    {
        cout << "c'est plus" << endl;
    }
    else {
        cout << "BRAVO c'est la même valeur" << endl;
    }
}

void exo10()
{

    for (unsigned i(99); i > (1) ; --i)
    {
        cout << i << " " << "bottles of beer on the wall, " << i << " " << "bottles of beer. Take one down and pass it around, " << i - 1 << " " << "bottles of beer on the wall." << endl << endl;
    }
    cout << "1 bottles of beer on the wall, 1 bottles of beer. Go to the store and buy some more, no more bottles of beer on the wall." << endl << endl;
    cout << "No more bottles of beer on the wall, no more bottles of beer." << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;

}
int main()
{
    exo7();
    return 0;
}
