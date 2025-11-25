// //Q20
#include<iostream>
using namespace std;
class Total;
class Student{
    string name;
    int rollno;
    public:
    void setInfo(){
        cin>>name;
        cin>>rollno;
    }
    friend class Total;
};

class Marks: virtual public Student{
    protected:int m1,m2,m3,m4,m5;
    void setMarks(){
        cin>>m1>>m2>>m3>>m4>>m5;
    }
};

class Extra:virtual public Student{
    protected:int sp,gp;
    void extra(){
        cin>>sp;
        cin>>gp;
    }
};

class Total:public Marks,public Extra{
    public:
    void getTotal(){
        cout<<"Enter name and roll no:\n";
        setInfo();
        cout<<"Enter your subject marks: \n";
        setMarks();
        cout<<"Enter your sports and GP marks:\n";
        extra();
    }
    void displayAll(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Average marks: "<<(m1+m2+m3+m4+m5+sp+gp)/7<<endl;
    }
};

int main(){
    Total ob;
    ob.getTotal();
    ob.displayAll();
}

// //Q21
// #include<iostream>
// using namespace std;
// class Rectangle;
// class Triangle;
// class Shape{
//     protected:
//     double l,b;
//     public:
//     void get_data(){
//         cout<<"Enter the dimensions:\n";
//         cin>>l>>b;
//     }
//     virtual void display_area(){
//         cout<<"Area is "<<l*b;
//     }
//     // friend class Rectangle;
//     // friend class Triangle;
// };

// class Rectangle:public Shape{
//     public:
//     void display_area(){
//         // get_data();
//         cout<<"Area is "<<l*b<<endl;
//     }
// };

// class Triangle:public Shape{
//     public:
//     void display_area(){
//         // get_data();
//         cout<<"Area is "<<(l*b)/2<<endl;
//     }
// };

// int main(){
//     Shape *p1,*p2;
//     Rectangle ob1;
//     Triangle ob2;
//     p1=&ob1;
//     p2=&ob2;
//     p1->get_data();
//     p1->display_area();
//     p2->get_data();
//     p2->display_area();
// }

// //Q22

// #include<iostream>
// using namespace std;

// class CAL_AREA{
//     protected:float r,h;
//     public:
//     void get_data(){
//         cout<<"Enter radius and hieght: ";
//         cin>>r>>h;
//     }
//     virtual void display_volume()=0;
// };

// class cone:public CAL_AREA{
//     public:
//     void display_volume(){
//         cout<<"Volume of cone is: "<<(3.14*r*r*h)/3<<endl;
//     }
// };

// class cylinder:public CAL_AREA{
//     public:
//     void display_volume(){
//         cout<<"Volume of cylinder is: "<<(3.14*r*r*h)<<endl;
//     }
// };

// class hemisphere:public CAL_AREA{
//     public:
//     void display_volume(){
//         cout<<"Volume of hemisphere is: "<<2*(3.14*r*r*r)/3<<endl;
//     }
// };

// int main(){
//     CAL_AREA *p1,*p2,*p3;
//     cone ob1;
//     cylinder ob2;
//     hemisphere ob3;
//     p1=&ob1;
//     p2=&ob2;
//     p3=&ob3;
//     p1->get_data();
//     p1->display_volume();
//     p2->get_data();
//     p2->display_volume();
//     p3->get_data();
//     p3->display_volume();
// }