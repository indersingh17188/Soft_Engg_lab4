#include "Labs4.h"

#include <iostream>

using namespace std;

int main()
{

    //-----------------------
    // Exercice 1
    //-----------------------

    /*
    Point2d p;   // static creation
    Point2d *q=&p; // pointer =  address of my object or structure
    BuildPoint2d(q); //call the function to set values to the point*
    display(p);      // display function with the object as param
    display(q);      // display function with a ptr to the object as param
    */

    //-----------------------
    // exercice 2
    //-----------------------

    Polygon2d* ppoly = new Polygon2d; // allocate a new list
    BuildPolygon2d(ppoly);            // call the function to create then insert several points
    display(ppoly);                   // display the result

    //test for function Element
    /*
    Point2d * P1 = GetElement(ppoly,0);
    Point2d * P2 = GetElement(ppoly,1);
    Point2d * P3 = GetElement(ppoly,2);
    Point2d * P4 = GetElement(ppoly,3); // out of range so it comes back to start : the list is cyclic

    cout <<endl<<"test get ELement"<<endl;
    cout <<"Element at position 1, represented by pointer P1"<<endl;
    display(P1);
    cout <<"Element at position 2, represented by pointer P2"<<endl;
    display(P2);
    cout <<"Element at position 3, represented by pointer P3"<<endl;
    display(P3);
    cout <<"Element at position 4, represented by pointer P4"<<endl;
    display(P4);

    // test for function Get Position

    cout <<endl<<"Position of previous elements"<<endl;
    cout <<"P1 is at position " << GetPosition(ppoly,P1)<<endl;
    cout <<"P2 is at position " << GetPosition(ppoly,P2)<<endl;
    cout <<"P3 is at position " << GetPosition(ppoly,P3)<<endl;
    cout <<"P4 is at position " << GetPosition(ppoly,P4)<<endl;
    */

    // test of insertion
    /*
    cout<<endl<<"test insertion"<<endl;
    cout<<"creation of a new point"<<endl;
    Point2d* ADD = new Point2d;
    BuildPoint2d(ADD);
    cout<<"which position do you want to add this point?"<<endl;
    int pos;
    cin >> pos;
    InsertAt(ppoly,ADD, pos);
    cout <<"list after insertion"<<endl;
    display(ppoly);

    //test after deletion
    int posdelete;
    cout <<endl<<"Which element do you want to delete?"<<endl;
    cin >> posdelete;

    DeleteAt(ppoly,posdelete);
    cout <<"list after insertion"<<endl;
    display(ppoly);
    */

    return 0;
}
