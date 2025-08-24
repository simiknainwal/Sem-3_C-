#include<iostream>
#include<string.h>
using namespace std;
class Best;
class Test{
    string name;
    string mother_name;
    string father_name;
    string gender;
    public:
    Test(){
        name="";
        mother_name="";
        father_name="";
        gender="";
    }
void inputInfo(){
    cin>>name;
    cin.ignore();
    cin>>mother_name;
    cin.ignore();
    cin>>father_name;
    cin.ignore();
    cin>>gender;
}
friend int userChecker(Test &,Best &);
};

class Best{
    string name;
    string mother_name;
    string father_name;
    string gender;
    public:
    Best(){
        name="";
        mother_name="";
        father_name="";
        gender="";
    }
void inputInfo(){
    cin>>name;
    cin.ignore();
    cin>>mother_name;
    cin.ignore();
    cin>>father_name;
    cin.ignore();
    cin>>gender;
}
friend int userChecker(Test &,Best &);
};

int userChecker(Test &ob1,Best &ob2){
    if(ob1.mother_name==ob2.mother_name  && ob1.father_name==ob2.father_name){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    Test ob1;
    Best ob2;
    ob1.inputInfo();
    ob2.inputInfo();
    if(userChecker(ob1,ob2)==1){
        cout<<"Belongs to same family";
    }else{
        cout<<"Belongs to different family";
    }
}