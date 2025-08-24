#include<iostream>
using namespace std;
class Best;
class Test{
    int a;
    public:
    Test(int a){
        this->a=a;
    }
    friend void swap(Test &,Best &);
};

class Best{
    int b;
    public:
    Best(int b){  
        this->b=b;
    }
    friend void swap(Test &,Best &);
};

void swap(Test &ob1,Best &ob2){
    cout<<"Before swapping:"<<ob1.a<<" "<<ob2.b<<endl;
    int t=ob1.a;
    ob1.a=ob2.b;
    ob2.b=t;
    cout<<"After swapping:"<<ob1.a<<" "<<ob2.b<<endl;
}

int main(){
    Test ob1(999);
    Best ob2(888);
    // cout<<"Before swapping:"<<ob1.a<<" "<<ob2.b;
    swap(ob1,ob2);
    // cout<<"After swapping:"<<ob1.a<<" "<<ob2.b;
    
}