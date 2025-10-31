#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin;
    fin.open("sample.txt");
    char c;int v=0,x=0;
    while(!fin.eof()){
        c=fin.get();
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            v++;
        }else if(c!=32){
            x++;
        }
    }
    cout<<"Total vowels are "<<v<<endl<<"Total consonants are "<<x;
}