# Soft_Engg_lab4
Laboratory no 4 for Software Engineering MSCV 2018-2020


Tutorial n°4 - Structures and pointers: application to lists
We are going to develop simple (and naïve) structures to handle 2D closed polygons. As we are going to see through this example, we do not necessarily need to handle arrays when allocating the memory. Actually, the corresponding data structure created will be a double chained list.

1 2D Point1. Declare and implement a structure Point2d to represent a 2D point which has to members x and y represented by floats.2. Implement two functions display(. . .) that display on the screen the values of members x and y for a Point2d and for a pointer to a Point2d.3. Declare and implement functions BuildPoint(. . .) that asks values of members x and y for a 2D point (by pointer and by reference).4. Declare and initialize a "dummy" Point2d within the main function to test your results.

2 PolygonTo represent a polygon, we need to handle multiple 2D points. Additionally, we need to know the order of the points within the polygon. To do so, update the structure Point2d by adding two members prev and next, that are pointers to the predecessor and the successors of a point within a polygon.
1. Declare and implement a structure Polygon2d that contains a pointer to an initial 2D point called start.2. Declare and implement a function BuildPolygon(. . .), that asks to the user the number of points of the polygon,then the coordinates of each point (within the order of the polygon), and then that creates the 2D points.3. Declare and implement a function that displays the elements of a polygon. This function should also display the previous and next points within the polygon. 


3 Insertion and deletion of elementsDeclare and implement the following functions:
1. GetElement(. . .) that returns a pointer to a 2D Point at position in a given polygon.2. GetPosition(. . .) that returns the position of a point within a given polygon.3. InsertAt(. . .) that inserts an element at a given position.4. DeleteAt(. . .), that deletes (if possible) an element at position I.