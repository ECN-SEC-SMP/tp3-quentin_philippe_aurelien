#include "Point.hpp"
#include "Forme.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
#include <iostream>

int main(){
    Rectangle<Point<int>> abcd = new Rectangle<Point<int>>(Point<int>(0,0), Point<int>(0,2), Point<int>(3,2), Point<int>(3,0));

    delete &abcd;
    return 0;
}