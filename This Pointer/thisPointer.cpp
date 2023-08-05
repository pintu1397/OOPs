#include<iostream>
using namespace std;
class Point
{
private:
    int x,y;
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    Point &set_x(int x){
        this->x = x;
        return *this;
    }
     Point &set_y(int y){
        this->y = y;
        return *this;
    }
};
int main(){
    Point p1(20,10);
    (p1.set_x(10),p1.set_y(29));
    return 0;
}

 
