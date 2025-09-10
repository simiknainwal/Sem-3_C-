#include<iostream>
using namespace std;

class Employee{
    string name;
    int empId;
    public:
    void setEmployee(string name,int empId){
        this->name=name;
        this->empId=empId;
    }
    string getName(){
        // cout<<"Enter name:";
        // getline(cin,name);
        return name;
    }
    int getEmpId(){
        // cout<<"Enter employee ID:";
        // cin>>empId;
        return empId;
    }
    void displayEmployee(){
        cout<<"Name is "<<name<<endl<<"Employee ID is "<<empId<<endl;
    }
};

class Salary:private Employee{
    float bs;
    public:
    void setSalary(float bs,string n,int i){
        setEmployee(n,i);
        this->bs=bs;
    }
    float getSalary(){
        return bs;
    }
    int getEmployeeIdForSalary(){
        return getEmpId();
    }
    void displaySalary(){
        displayEmployee();
        cout<<"Salary is "<<bs<<endl;
    }
};

class Total:protected Salary{
    float da,hra,medical,totalSalary;
    public:
    void setTotal(string name,int empId,float bs,float da,float hra,float medical){
        setSalary(bs,name,empId);
        this->da=da;
        this->hra=hra;
        this->medical=medical;
    }
    void calculateTotal(){
        totalSalary=da+hra+medical+getSalary();
    }
    int getEmpIdFromTotal(){
        return getEmployeeIdForSalary();
    }
    void displayTotal(){
        displaySalary();
        cout<<"Total salary is "<<totalSalary<<endl;
    }
};

int main(){
    int n;
    string name;
    int id,s;
    float h,d,m,bs;
    cout<<"Enter the number of employees: ";
    cin>>n;  
    Total ob[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Enter your details: ";
        getline(cin,name);
        cout<<"Enter your id: ";
        cin>>id;
        cout<<"Enter basic salary: ";
        cin>>bs;
        cout<<"Enter hra: ";
        cin>>h;
        cout<<"Enter da: ";
        cin>>d;
        cout<<"Enter medical: ";
        cin>>m;
    ob[i].setTotal(name,id,bs,d,h,m);   
    ob[i].calculateTotal(); 
    
    // ob[i].displayTotal();
}
int f=1;
cout<<"Enter an employee ID to search:";
cin>>s;
for(int i=0;i<n;i++){
if(ob[i].getEmpIdFromTotal()==s){
    ob[i].displayTotal();
    f=1;
}
}
if(f==1){
    cout<<"User not found"<<endl;
}
return 0;
}