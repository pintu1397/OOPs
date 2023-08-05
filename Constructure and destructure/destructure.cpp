#include<iostream>
using namespace std;
class Test{
    int x;
    public:
    Test(int i):x(i){
        cout<<"constructor called "<< x <<endl;
    }
    ~Test(){
        cout<<"destructor called "<< x <<endl;
    }
};
int main(){
    // {
    //     Test t1(20);
    // }
    // Test t2(10);
    
        Test t1(20);
    
    Test t2(10);
}