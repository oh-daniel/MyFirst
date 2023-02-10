/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 9 Task E
This program creates, deletes, and coordinates objects dynamically.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D{
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    double length = sqrt((pow(p->x, 2)) + pow(p->y, 2) + pow(p->z, 2));
    return length;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) > length(p2)){
        return p1;
    }
    else{
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    Coord3D &position = *ppos;
    Coord3D &velocity = *pvel;
    ppos->x = position.x + velocity.x * dt;
    ppos->y = position.y + velocity.y * dt;
    ppos->z = position.z + velocity.z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *coordinates = new Coord3D; //include *
    coordinates->x =x;
    coordinates->y =y;
    coordinates->z =z;
    return coordinates;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
// should be 65 6 107.7
//hehe hoho extra comment
// and another one!
// and yet another one!
// SUBMISSION FOR OPTIONAL TASK