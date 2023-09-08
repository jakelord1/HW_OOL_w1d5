#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car C("Audi", "White", 2018, 100000);
    char* model = C.GetModel();
    C.Print();
}
