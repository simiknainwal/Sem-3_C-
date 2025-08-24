#include<iostream>
using namespace std;
class Best;
class Test{
    int a;
    public:
    Test(int a){
        this->a=a;
    }
    friend Best;
};
class Best{

    public:
    void display(Test &ob1){
        cout<<ob1.a;
    }
};

int main(){
    Test ob1(10);
    Best ob2;
    ob2.display(ob1);
}