// #include<iostream>
// using namespace std;

// int main(){
    
// }




// #include<iostream>
// using namespace std;

// class Bank{
//     string name;int balance=50000,amount;
//     public:
//     void input(){
//         getline(cin,name);
//         cin>>amount;
//     }
//     int new_balance(){
//         return balance-amount;
//     }
//     void display(){
//         cout<<"Name is "<<name<<endl;
//         cout<<"New balance is "<<new_balance();
//     }
// };

// int main(){
//     Bank ob;
//     ob.input();
//     ob.display();
// }

// #include<iostream>
// using namespace std;

// class Hotel{
//     int rno,nod,tariff;
//     string name;
//     public:
//     void CheckIn(){
//         getline(cin,name);
//         cin>>rno;
//         cin>>tariff;
//         cin>>nod;
//     }

//     double calc(){
//         return nod*tariff;
//     }

//     void CheckOut(){
//         double amount=calc();
//         if(calc()>10000){
//             amount+=1.05*amount;
//         }
//         cout<<"Name is "<<name<<endl;
//         cout<<"Room number is "<<rno<<endl;
//         cout<<"Number of days are "<<nod<<endl;
//         cout<<"Tariff is "<<tariff<<endl;
//         cout<<"Amount is "<<amount<<endl;
//     }
// };

// int main(){
//     Hotel ob;
//     ob.CheckIn();
//     ob.CheckOut();
// }