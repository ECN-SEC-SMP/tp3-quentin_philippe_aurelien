#include "Point.hpp"

template<typename T>

class Forme{

    protected :
        Point o;

    public:

        // Constructeurs
        Forme(Point<T> o_);
        
        // Méthodes

        virtual T perimetre() {};
        
        virtual T surface() {};


        // Surcharge
        friend std::ostream& operator<<(std::ostream &o)
        {
            o<<"("<< this.getX() << "," << this.getY() << ")"<<std::endl;
            return o;
        }

};

template<typename T>
Forme<T>::Forme(Point<T> o_){
    this->o = o_;
}