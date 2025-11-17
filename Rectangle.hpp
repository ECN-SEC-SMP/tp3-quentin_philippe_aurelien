#include "Forme.hpp"
#include "Point.hpp"

template<typename T>
class Rectangle : public Forme<T>{
    protected :
        Point a;
        Point b;
        Point c;
        Point d;

    public :
        Rectangle(Point<T> a_, Point<T> b_, Point<T> c_, Point<T> d_);
        // Surcharge
        friend std::ostream& operator<<(std::ostream &o)
        {
            o<<"a"<<"("<< this->a.getX() << "," << this->a.getY() << ")"<<std::endl;
            o<<"b"<<"("<< this->b.getX() << "," << this->b.getY() << ")"<<std::endl;
            o<<"c"<<"("<< this->c.getX() << "," << this->c.getY() << ")"<<std::endl;
            o<<"d"<<"("<< this->d.getX() << "," << this->d.getY() << ")"<<std::endl;
            o<<"o"<<"("<< this->o.getX() << "," << this->o.getY() << ")"<<std::endl;
            return o;
        }
};

template<typename T>
Rectangle<T>::Rectangle(Point<T> a_, Point<T> b_, Point<T> c_, Point<T> d_){
    this->a = a_;
    this->b = b_;
    this->c = c_;
    this->d = d_;
}