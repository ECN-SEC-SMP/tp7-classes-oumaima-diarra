#include "point.h"
#include <iostream>
using namespace std;


int main()
{
    
    Point X;
    cout<<"abscisse de X"<<X.get_abscisse()<<endl;
    cout<<"ordonnee de X"<<X.get_ordonnee()<<endl;
    X.translater(1,2);
    cout<<"new abscisse de X "<< X.get_abscisse()<<endl;
    cout<<"new ordonnee de X"<<X.get_ordonnee()<<endl;
    
    cout<<"initialisation du point a l'origine "<<endl;
    cout<<"hello world"<<endl;
    return 0;
}