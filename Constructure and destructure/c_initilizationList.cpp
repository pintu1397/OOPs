#include<iostream>
using namespace std;

class Complex{
    private :
    int x,y;
    public:
    Complex():x(0),y(0){

    }
    Complex(int x1,int y1):x(x1),y(y1){

    }
    void print(){
        cout<< x <<" + "<<y<< "i"<< endl;
    }
};
int main(){
    Complex p1,p2(104,280);
    p1.print();
    p2.print();
    Complex *ptr =new Complex(23,209);
    ptr->print();
    return 0;
}