#include<iostream>
using namespace std;

class Test{
    protected:
    int a;
    Test(){
        a=0;
    }
    Test(int a){
        this->a=a;
    }
};

class Best:public Test{
public:
    Best(){
       a=0;
    }
    Best(int a){
        this->a=a;
    }
void display(){
    // a=20;
    cout<<a;
}
};

int main(){
    Best ob1(999);
    ob1.display();
}