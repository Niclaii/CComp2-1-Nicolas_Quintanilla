#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>


class Point {

    public:
        Point(int _x, int _y) : x(_x), y(_y){}

        void setX(int _x){
            x= _x;
        }
        int getX()const{
            return x;
        }
        void setY(int _y){
            y= _y;
        }
        int getY()const{
            return y;
        }

        void print()const{
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

    private:
        int x,y;

};

#endif 