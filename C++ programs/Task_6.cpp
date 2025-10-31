#include<iostream>
using namespace std;
// //Program-1
// class Test{
//     int a;
//     public:
//     Test(){

//     }
//     Test(int a){
//         this->a=a;
//     }
//     Test operator-(Test&o){
//         Test temp;
//         temp.a=a-o.a;
//         return temp;
//     }

//     Test operator++(){
//         Test temp;
//         temp.a=++a;
//         return temp;
//     }
//     Test operator++(int){
//         Test temp;
//         temp.a=a++;
//         return temp;
//     }
//     Test operator--(int){
//         Test temp;
//         temp.a=a--;
//         return temp;
//     }
//     Test operator--(){
//         Test temp;
//         temp.a=--a;
//         return temp;
//     }
//     void display(){
//         cout<<a<<endl;
//     }
// };

// int main(){
//     Test ob1(10),ob2(50),ob3,ob4,ob5,ob6,ob7;
//     // ob3=ob1-ob2;
//     // ob4=ob2++;
//     // ob5=ob1++;
//     ob6=ob2--;
//     ob7=--ob2;
//     // ob3.display();
//     // ob4.display();
//     // ob5.display();
//     // ob5.display();
//     ob6.display();
//     ob7.display();
// }

//Program- 2
// class Test{
//     int a;
//     public:
//     Test(){

//     }
//     Test(int a){
//         this->a=a;
//     }
//     friend Test operator-(Test&,Test&); 
//     friend Test operator--(Test&); 
//     friend Test operator--(Test&,int); 
//     friend Test operator++(Test&,int); 
//     friend Test operator++(Test&); 
//     void display(){
//         cout<<a<<endl;
//     }
// };

// Test operator-(Test &o1,Test&o2){
//     Test temp;
//     temp.a=(o1.a)-(o2.a);
//     return temp;
// }
// Test operator--(Test &o1){
//     Test temp;
//     temp.a=--o1.a;
//     return temp;
// }
// Test operator++(Test &o1){
//     Test temp;
//     temp.a=++o1.a;
//     return temp;
// }
// Test operator--(Test &o1,int){
//     Test temp;
//     temp.a=o1.a--;
//     return temp;
// }
// Test operator++(Test &o1,int){
//     Test temp;
//     temp.a=o1.a++;
//     return temp;
// }

// int main(){
//     Test ob1(10),ob2(20);
//     // Test ob3=ob1-ob2;
//     // Test ob3=--ob1;
//     // Test ob3=ob1--;
//     // Test ob3=ob1++;
//     Test ob3=++ob1;
//     ob3.display();
// }



class Base{
    private:int a;
    protected:int b;
    public:int c;
    void input(){
        a=30;
        b=10;
        c=45;
    }
};

class Child:private Base{
    public:
    void display(){
        input();
        cout<<b<<endl<<c<<endl;
    }
};

int main(){
    Child ob;
    cout<<ob.b;
    ob.display();
}