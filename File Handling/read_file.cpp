#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream fin;
    fin.open("sample.txt");
    char c;
    // c=fin.get();
    string str;
    // while(!fin.eof()){
    //     c=fin.get();
    //     cout<<c;
    // }
    // while(getline(fin,str)){
    //     cout<<str;
    // }
    while(getline(fin,str)){
        // c=fin.get();
        cout<<str;
        cout<<" ";
    }
    fin.close();

}