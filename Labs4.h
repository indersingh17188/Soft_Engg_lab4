// labs4.h
#include <iostream>

using namespace std;

struct Point2d{
    float x, y;
    Point2d *prev; // pointer to the previous element in the list
    Point2d *next; // pointer to the next element in the list
    };

void display(Point2d p);
void display(Point2d *p);
void BuildPoint2d ( Point2d *p);

struct Polygon2d{
    int n;
    Point2d* start;  // first element of the polygon : pointer to a Point2d
};

void BuildPolygon2d( Polygon2d * Poly);
void display (Polygon2d * Poly);

int GetPosition( Polygon2d *Poly, Point2d *); // returns the position of a *Point2d within the Polygon2d*
Point2d * GetElement (Polygon2d *Poly,int i); // return the pointer to a point for a given position
bool InsertAt(Polygon2d *Poly,Point2d* P,int);// insert a point within the list at a given position
bool DeleteAt(Polygon2d *Poly,int);           // delete an element, if possible, at a given position

