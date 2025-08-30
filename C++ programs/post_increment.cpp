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
    Test operator++(int){
        Test temp;
        temp.a=a++;
        return temp;
    }
    void display(){
        cout<<a<<endl;
    }
};

int main(){
    Test ob1(25),ob2;
    ob2=ob1++;
    ob2.display();
    ob1.display();

}