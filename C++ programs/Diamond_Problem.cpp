#include<iostream>
using namespace std;

class A{
    public:
    int a;
};

class B:virtual public A{

};

class C:virtual public A{

};

class D:public B,public C{

};

int main(){
    D ob;
    ob.a=999;
    cout<<ob.a;
}

