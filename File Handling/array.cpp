#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int a[]={5,1,4,0,2};
    char c;
    string str;
    ofstream fout;
    fout.open("num.txt");
    for(int i=0;i<5;i++){
        fout<<a[i]<<" ";
    }

    fout.close ();

    ifstream fin;
    fin.open("num.txt");
    // c=fin.get();
    while(!fin.eof()){
        c=fin.get();
        for(int i=0;i<5;i++){
            for(int j=0;j<(4-i);j++){
                if(a[j]>a[j+1]){
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        cout<<c;
    }
    fin.close();
}