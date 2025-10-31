// // #include<iostream>
// // using namespace std;

// // template<class T1,class T2>
// // void swap(T1 *a,T2 *b){
// //     T2 t=*a;
// //     static_cast<T2>(*a);
// //     *a=*b;
// //     *b=t;
// // }

// // int main(){
// //     int a=10,c=30;
// //     double b=15.67;
// //     cout<<a<<" "<<b<<endl;
// //     swap(&a,&b);
// //     cout<<a<<" "<<b;
// // }

// #include<iostream>
// using namespace std;
// template<class T>
// class Student{
//     T rno;
//     public:
//     void setData(T r){
//         rno=r;
//     }
//     T getData(){
//         return rno;
//     }
// };

// int main(){
//     Student <double>ob;
//     ob.setData(66.45);
//     cout<<ob.getData();
// }

#include<iostream>
using namespace std;

template<class T1,class T2,class T3,class T4>

T4 max(T1 a,T2 b,T3 c){
    if(a>b && a>c)return a;
    else if(b>c && b>a)return b;
    return c;
}
template<class T1,class T2,class T3,class T4>

T4 min(T1 a,T2 b,T3 c){
    if(a<b && a<c)return a;
    else if(b<c && b<a)return b;
    return c;
}


int main(){
    int a=2300;
    double b=56.67;
    float c=231.89;
    cout<<"Maximum is "<<max<int,double,float,double>(a,b,c)<<endl;
    cout<<"Minimum is "<<min<int,double,float,double>(a,b,c);
}
