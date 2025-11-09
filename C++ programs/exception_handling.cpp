#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c;
    try{
        if(b==0)throw 10;
        c=a/b;
        cout<<c;
    }
    catch(...){//catch(int o)
        cout<<"Exception found";
    }
    // cout<<c;

}