#ifndef Point_h
#define Point_h

class Point
{
private:
  float x;
  float y;

public:

    //methode
    void translater(float a, float b);
    //constructeurs
    Point();
    Point(float A, float B);
    //constructeurs de recopie
    Point(const Point& newpoint );
    //accesseurs
    float get_abscisse();
    float get_ordonnee();
    //mutateurs
    void mut_abscisse(float x);
    void mut_ordonnee(float y);
    //operateur
    void operator+=(Point const& c);
   // ostream& operator<<(ostream& s, float const& c);
};

#endif