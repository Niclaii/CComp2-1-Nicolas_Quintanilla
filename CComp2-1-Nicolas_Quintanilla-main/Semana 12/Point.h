#include <iostream>
#ifndef __Point_H__
#define __Point_H__

class Point{

    public:
    
        Point(int _x = 0,int _y = 0) : x(_x),y(_y){}

        void setX(int _x){
            x = _x;
        }    

        int getX()const{
            return x;
        }

        void setY(int _y){
            y = _y;
        }

        int getY()const{
            return y;
        }

        void print()const{
            std::cout << "(" << x << ", " << y << ")";
        }


    private:

        int x,y;
        friend std::ostream& operator<<(std::ostream &output,const Point &p);
    

};

std::ostream& operator<<(std::ostream &output, const Point &p){
    output << p.x << ", " << p.y;
    return output;
}

#endif
