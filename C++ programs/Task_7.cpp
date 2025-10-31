#include<iostream>
using namespace std;

class Student{
    string name;int eno,age;float marks;
    public:
    Student(string n="Simik",int e=2025493,int a=20,float m=70){
        name=n;
        eno=e;
        age=a;
        marks=m;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<eno<<" "<<marks<<endl;
    }
};

class Faculty{
string faculty_name,dep,gender;
int faculty_code,age,exp;
float salary;
public:
Faculty(string n="Akshay",string d="CSE",string g="M",int c=2020491,int a=30,int e=8,float s=200000){
    faculty_name=n;
    dep=d;
    gender=g;
    faculty_code=c;
    age=a;
    exp=e;
    salary=s;
}
void display(){
    cout<<faculty_name<<" "<<dep<<" "<<gender<<" "<<age<<" "<<exp<<" "<<salary;
}
};

class Person:public Student,public Faculty{
    public:
    void display(){
        Student::display();
        Faculty::display();
}
};

int main(){
    Person ob;
    ob.display();

}