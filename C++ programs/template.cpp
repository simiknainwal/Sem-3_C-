#include<iostream>
using namespace std;

template<class T1,class T2,class T3>
T3 sum(T1 a,T2 b){
    return (a/b);
}

int main(){
    cout<<sum<int,double,double>(6,5.0);
}