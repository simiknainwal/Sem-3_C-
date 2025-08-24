#include<iostream>
using namespace std;
class Best;
class Test{
    int a;
    public:
    Test(int a){
        this->a=a;
    }
    friend int sum(Test&,Best&);
};

class Best{
    int b;
    public:
    Best(int b){
        this->b=b;
    }
    friend int sum(Test &,Best &);
};

int sum(Test &ob1,Best &ob2){
return ob1.a+ob2.b;
}

int main(){
    Test ob1(6);
    Best ob2(7);
    cout<<sum(ob1,ob2);
}