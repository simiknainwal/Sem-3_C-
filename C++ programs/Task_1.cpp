// #include<iostream>
// using namespace std;

// int main(){
//     string name;
//     int units;
//     cout<<"Enter your name:";
//     getline(cin,name);
//     cout<<"Enter the number of units:";
//     cin>>units;
//     double bill=0;
//     if(units<=100){
//         bill=units*60;
//     }else if(units<=300){
//         bill=bill+6000+((units-100)*80);
//     }else{
//         bill+=22000+((units-300)*90);
//     }
//     bill+=5000;
//     bill=bill/100;
//     if(bill>300){
//         bill+=(0.15*bill);
//     }
//     cout<<"Name is "<<name<<endl;
//     cout<<"Bill is "<<bill;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter a string:\n";
//     getline(cin,str);
//     char ch;
//     cout<<"Enter a character:\n";
//     cin>>ch;
//     for(int i=0;i<str.length();i++){
//         if(str[i]==ch){
//             str.erase(i,1);
//         }
//     }
//     cout<<"Updated string:"<<endl;
//     cout<<str;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     string str;
//     getline(cin,str);
//     // int l=str.length();
//     int hash[256]={0};
//     for(int i=0;i<str.length();i++){
//         hash[str[i]-'a']++;
//     }
//     for(int i=0;i<str.length();i++){
//         if(hash[str[i]-'a']!=1){
//             str.erase(i,1);
//             i--;
//         }
//     }
//     cout<<"Updated string is "<<str;
// }