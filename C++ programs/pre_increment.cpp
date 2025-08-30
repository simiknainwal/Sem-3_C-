#include<iostream>
using namespace std;

class Test{
    int a;
    public:
    Test(){
        a=0;
    }
    Test(int a){
        this->a=a;
    }
    Test operator++(){
        Test temp;
        temp.a=++a;
        return temp;
    }
    void display(){
        cout<<a;
    }
};

int main(){
    Test ob1(25),ob2;
    ob2=++ob1;
    ob2.display();

}