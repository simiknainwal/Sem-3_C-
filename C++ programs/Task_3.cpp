#include<iostream>
using namespace std;

// class Student{
//     int scores[5];
//     public:
//     void input(){
//         for(int i=0;i<5;i++){
//             scanf("%d",&scores[i]);
//         }
//     }
//     int calculate();
// };

// int Student::calculate(){
//         int s=0;
//         for(int i=0;i<5;i++){
//             s=s+scores[i ];
//         }
//         return s;
//     }

// int main(){
//     int n,sum=0,c=0;
//     scanf("%d",&n);
//     int arr[5]={45,46,47,48,50};
//     for(int i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     Student ob[n];
//     for(int i=0;i<n;i++){
//         ob[i].input();
//     }
    
//     for(int i=0;i<n;i++){
//         if(ob[i].calculate()>sum){
//             c++;
//         }
//     }
// printf("%d",c);
// }

class Area{
    public:
    int area(int a){
        return a*a;
    }
    int area(int b,int c){
        return (b*c)/2;
    }
    int area(float a,int b){
        return a*b;
    }
};

int main(){
    Area ob;
    cout<<ob.area(10,20);
}