#include "Rectangle.hpp"

template<typename T>

class Carre : public Rectangle{
    public :
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