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
    friend Test operator++(Test&,int);
    void display(){
        cout<<a<<endl;
    }
};

Test operator++(Test &ob1,int c){
    Test temp;
    temp.a=ob1.a++;
    return temp;
}

int main(){
    Test ob1(25),ob2;
    ob2=ob1++;
    ob1.display();
    ob2.display();
}