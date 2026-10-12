#include<iostream>
using namespace std;

class Shape{
    public :
    virtual void calculatearea() = 0;
};
class rectangle : public Shape{
    public :
    void calculatearea()override{
        int length= 20, breadth=10;
        cout<<"Area of Rectangle is :"<<length*breadth<<endl;
    }

};
int main(){
    rectangle r;
    r.calculatearea();
}