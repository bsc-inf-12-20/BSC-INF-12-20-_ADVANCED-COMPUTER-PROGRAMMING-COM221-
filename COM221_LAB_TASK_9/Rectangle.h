#include "Polygon.h"
#include <iostream>
using namespace std;

class Rectangle : public Polygon {
public:
Rectangle(int mWidth, int mHeight) : Polygon(mWidth, mHeight) {}
void PrintArea(){
 cout << "Rectangle area: " << (width * height) <<endl;
    }
int Area();
};