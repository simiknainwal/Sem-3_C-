// #include<iostream>
// using namespace std;

// class SavingsAccount{
//     static float annual_interest_rate;
//     float savings_bal;
//     public:
//     SavingsAccount(float savings_bal){
//         this->savings_bal=savings_bal;
//     }
//     float calculate_MonthlyInterest(){
//         float interest= (savings_bal*annual_interest_rate)/12;
//         savings_bal+=interest;
//         return savings_bal;
//     }
//     static void modify_interest_rate(){
//         float nrate;
//         cout<<"Enter new rate:";
//         cin>>nrate;
//         annual_interest_rate=nrate;
//     }
// };

// float SavingsAccount::annual_interest_rate=0.0;

// int main(){
//     SavingsAccount saver1(2000.0),saver2(3000.0);
//     SavingsAccount::modify_interest_rate();
//     // saver2.modify_interest_rate();
//     cout<<"New balance for saver1:"<<saver1.calculate_MonthlyInterest()<<endl;
//     cout<<"New balance for saver2:"<<saver2.calculate_MonthlyInterest()<<endl;

//     SavingsAccount::modify_interest_rate();
//     cout<<"New balance for saver1:"<<saver1.calculate_MonthlyInterest()<<endl;
//     cout<<"New balance for saver2:"<<saver2.calculate_MonthlyInterest()<<endl;
// }


//Program- 14

#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    Complex(){

    }
    Complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    Complex operator+(Complex&o){
        Complex temp;
        temp.real=real+o.real;
        temp.imag=imag+o.imag;
        return temp;
    }

    Complex operator-(Complex&o){
        Complex temp;
        temp.real=real-o.real;
        temp.imag=imag-o.imag;
        return temp;
    }

    bool operator==(Complex&o){
        Complex temp;
        if(real==o.real && imag==o.imag)
                // printf("True\n");
                return true;
        else        
        // printf("False\n");
        return false;        
        // return temp;
    }
    void display(){
        if(imag>=0)
        cout<<real<<"+i"<<imag<<endl;
        else
        cout<<real<<imag<<"i"<<endl;
    }
};

int main(){
    Complex ob1(1,9),ob2(1,9);
    Complex ob3=ob1.operator+(ob2);
    Complex ob4=ob1.operator-(ob2);
    if(ob1.operator==(ob2)){
        cout<<"True\n";
    }else{
        cout<<"False\n";
    }
    ob3.display();
    ob4.display();
}