template <typename T, typename V>
class Pair{
    T X;
    V Y;
    public:
    void setX(T x){
        this->X = x;
    }
    void setY(V y){
        this->Y = y;
    }
    T getX(){
         return this->X;
    }
    V getY(){
        return this->Y;
    }
};
