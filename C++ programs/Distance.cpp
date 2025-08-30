#include<iostream>
using namespace std;

class Distance{
    double a;
    public:
    Distance(){
        a=0;
    }
    Distance(double a){
        this->a=a;
    }
    friend Distance operator+(Distance&,Distance&);

    void display(){
        cout<<a<<endl;
    }
};
Distance operator+(Distance&o1,Distance&o2){
        Distance temp;
        if(o1.a>=12){
            o1.a=o1.a/12;
        }
        temp.a=o2.a+o1.a;
        return temp;
}

int main(){
    Distance ob1(14),ob2(6),ob3;
    ob3=ob1+ob2;
    ob3.display();

}
