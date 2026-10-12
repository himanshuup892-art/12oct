#include<iostream>
using namespace std;

class Atm{
    private :
    int balance = 5000;

    public :
    void checkBalance(){
        cout<<"Balance is"<<balance;
    }
};
int main(){
    Atm a;
    a.checkBalance();
}