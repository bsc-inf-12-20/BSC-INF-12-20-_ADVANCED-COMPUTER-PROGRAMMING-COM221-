#include "Polygon.h"
#include <iostream>
using namespace std;
class Triangle : public Polygon {
public:
Triangle(int mWidth, int mHeight) : Polygon(mWidth, mHeight) {}
void PrintArea(){
        cout << "Triangle area: " << (width * height / 2) <<endl;
    }
int Area();
};