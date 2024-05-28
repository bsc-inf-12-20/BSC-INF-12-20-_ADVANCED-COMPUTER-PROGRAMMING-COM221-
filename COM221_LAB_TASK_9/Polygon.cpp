#include "Polygon.h"
#include <iostream>
using namespace std;

void Polygon::SetValues(int mWidth, int mHeight)
{
width = mWidth;
height = mHeight;
}
void Polygon::PrintArea()
{
cout << this->Area() << '\n';
}