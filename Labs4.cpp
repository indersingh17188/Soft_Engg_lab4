#include "Labs4.h"
void display(Point2d p) // no need to pass by reference since we only display
 {
     cout << "x="<<p.x<<" y="<<p.y << endl;
 }

void display(Point2d *p) // same purpose but using ptr as parameter
 {
     cout << "x="<<p->x<<" y="<<p->y << endl;
 }

void BuildPoint2d ( Point2d *p) // in case of using a pointer
{
    if( !p) return;

    cout <<"x=? "; cin >> p->x; cout <<"y=? ";  cin >> p->y;
}

void BuildPoint2d ( Point2d &p) // in case of using by ref
{

    cout <<"x=? "; cin >> p.x; cout <<"y=? ";  cin >> p.y;
}

void BuildPolygon2d( Polygon2d * Poly)
{
     cout<<"enter the number of points"<<endl;
     int n;
     cin >> n;
     Poly->n = n;

     Poly->start = new Point2d; // create starting point : allocate a first new Point2d

     // temporary pointer to see what is going on
     Point2d * tmp = Poly->start;
     Point2d * old; //corresponds to the ptr to the Point2d previously created

     for(int i=0; i<n-1; i++ ) // n-1 point creation
     {
         BuildPoint2d(tmp); // set values for current point
         old = tmp;         // store pointer
         tmp = new Point2d; // create a new point

         old->next = tmp;   // update next
         tmp->prev = old;   // update prev
     }

     BuildPoint2d(tmp); // set values for latest point created

     // when loop finishes, we need to link the extremities : start and last point

     Poly->start->prev = tmp;
     tmp -> next = Poly->start;
 }

void display (Polygon2d * Poly)
{
Point2d * tmp = Poly->start;  // get a pointer to the first element
for(int i=0; i<Poly->n; i++ ) // move ahead within the list
     {

         cout << endl << "Point at position "<<i<<endl;
         display(tmp);  // displays information
         cout <<" \t next = ";display(tmp->next);
         cout <<" \t prev = ";display(tmp->prev);
         tmp = tmp -> next; // goes to nex elt in the list
     }
}


int GetPosition( Polygon2d *Poly, Point2d *P)
{
    // returns -1 if the element is not in the list, else returns a position >=0

    Point2d*tmp = Poly->start;
    int i=0;
    int found = -1;
    while(i<Poly->n && found == -1)
    {
        if(tmp == P) {found = i;}
        i++;
        tmp = tmp->next;
    }
    return found;

}
Point2d * GetElement (Polygon2d *Poly, int pos)
{
    Point2d*tmp = Poly->start;
    for(int i=0; i<pos; i++) tmp = tmp -> next;

    return tmp;
}

bool InsertAt(Polygon2d *Poly, Point2d* P,int pos)
{
    Point2d *tmp = GetElement(Poly,pos-1); //get element in the list
    Point2d *succ = tmp->next;           // get the next element

    tmp->next = P;      // update pointers
    P->prev = tmp;
    P->next = succ;
    succ->prev = P;

    Poly->n++;          // update list size
    if(pos == 0) Poly->start = P; // update start point if modified

    return true; // always successful, but errors could be handled through this return code
}
bool DeleteAt(Polygon2d *Poly,int pos)
{
    if(Poly->n<=2) // when only 2 elments : requires special code
    {
        cout<<"delete at is going to crash"<<endl;
        return false;
    }

    // Get element at given position
    Point2d*P = GetElement(Poly, pos);
    // Get prevs and nexts
    Point2d*succ = P->next;
    Point2d*ante = P->prev;

    ante->next =succ;
    succ->prev = ante;
    delete P;

    if( pos == 0) // start point has been deleted, so change it
    Poly->start = ante;
    //decrease size
    Poly->n--;

    return true;

}
