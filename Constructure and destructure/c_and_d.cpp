#include <iostream>
//using namespace 

class Point{
    private:
    int x,y;

    public:
    Point(){
        x = 0;
        y = 0;
    }
    Point(int x1, int y1){
        x = x1;
        y = y1;
    }
    void print(){
        std::cout << x << " " << y << std::endl;
    }
};
int main(){
    Point p1,p2(10,20);
    p1.print();
    p2.print();
    Point *ptr =new Point(2,29);
    ptr->print();
    return 0;
}