#include "Daughter.h"
#include <iostream>
using namespace std;

Daughter::Daughter(int a) : Mother(a) {
    cout << "Daughter: int parameter \n" <<a <<endl;
}