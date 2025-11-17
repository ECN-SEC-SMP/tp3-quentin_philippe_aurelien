template<typename T>

class Point{
    protected :
        T x; // Abscisse
        T y; // Ordonnée
    public:

        // Constructeurs
        Point(T x_, T y_);
        Point(const Point<T>& p);

        // Méthodes
        void translater(T x_, T y_);
        
        // Accesseurs
        T getX() return this->x;
        T getY() return this->y;

        // Mutateurs
        void setX(T x_) this->x = x_;
        void setY(T y_) this->y = y_;

        friend std::ostream& operator<<(std::ostream &o)
        {
            o<<"("<< this.getX() << "," << this.getY() << ")"<<std::endl;
            return o;
        }
};

template<typename T>
Point<T>::Point(T x_, T y_){
    this->x = x_;
    this->y = y_;
}

template<typename T>
Point<T>::Point(const Point<T>& p){
    this->x = p.getX();
    this->y = p.getY();
}

template<typename T>
void Point<T>::translater(T x_, T y_){
    this->x = this->x + x_;
    this->y = this->y + y_; 
};
