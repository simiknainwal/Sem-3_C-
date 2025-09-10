#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(){

    }
    Complex(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend Complex operator+(Complex&,Complex&);
    void display(){
        cout<<a<<"+i"<<b;
    }
};

Complex operator+(Complex&o1,Complex&o2){
        Complex temp;
        temp.a=o2.a+o1.a;
        temp.b=o1.b+o2.b;
        return temp;
    }

int main(){
    Complex ob1(2,5),ob2(6,5),ob3;
    ob3=ob1+ob2;
    ob3.display();
}