#include<iostream>
#include<fstream>
using namespace std;

class Vehicle{
    // public:
    int vid;
    string vt;
    public:

    virtual void display(){
        cout<<vid<<endl;
        cout<<vt;
    }
    friend class HeavyDuty;
};

class Car:public virtual Vehicle{
    int doors;
    public:
    void display(){
        cout<<doors;
    }
    friend class HeavyDuty;
};

class Truck:public virtual Vehicle{
    // public:
    int cargo;
    public:
    void display(){
        cout<<cargo;
    }
    
    friend class HeavyDuty;
};

class HeavyDuty:public Car,public Truck{
    int max;
    public:
    void setdata(){
        cin>>vid;
        cin>>vt;
        cin>>doors;
        cin>>cargo;
        cin>>max;
    }
    void display(){
        fstream fout;
fout.open("vehicle.txt",ios::app | ios::in | ios::out);
        fout.clear();
        fout<<vid<<" "<<vt;
        fout<<doors<<" ";
        fout<<cargo<<" ";
        fout<<max<<endl;
        fout.close();
    }
};

int main(){
HeavyDuty ob[5];

for(int i=0;i<5;i++){
ob[i].setdata();
ob[i].display();
}
}

