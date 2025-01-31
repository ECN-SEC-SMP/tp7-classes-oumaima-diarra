#include "point.h"
#include <iostream>
using namespace std;


void Point::tranlater(float a, float b)
{
    this->x += a;
    this->y += b;

}
//initialise un point a l'origine
Point::Point()
{
this->x= 0;
this->y= 0;
}
//ce constructeur prend deux parametres reels
Point::Point(float A, float B)
{
this->x= A;
this->y= B;

}
//constructeur de recopie
Point::Point(const Point& newpoint ):x(newpoint.x),y(newpoint.y)
{

cout<<"recopie du point"<<endl;

}
//accesseur
float Point::get_abscisse()
{
    return x;
}
float Point::get_ordonnee()
{
    return y;
}
//mutateur
void Point::mut_abscisse(float x)
{
    this->x=x;
}
 void Point::mut_ordonnee(float y)
{
    this->y=y;
}