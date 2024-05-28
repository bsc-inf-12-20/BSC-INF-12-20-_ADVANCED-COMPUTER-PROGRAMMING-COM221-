#pragma once
#include <iostream>
using namespace std;

class Polygon {
protected:
int width;
int height;
public:
Polygon(int mWidth, int mHeight) : width(mWidth), height(mHeight) {}
void SetValues(int width, int height);
virtual int Area() = 0;
void PrintArea();
};