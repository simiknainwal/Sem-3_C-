#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    int a=99;
    fout.open("sample.txt");
    fout<<a;
    fout.close();
}