#include<iostream>
using namespace std;

class Test{
    int a,b;
    public:
    Test(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend int sum(Test&);
};
int sum(Test &ob1){
    return ob1.a+ob1.b;
}

int main(){
    Test ob1(100,200);
    cout<<sum(ob1);
}