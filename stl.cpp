#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
using namespace std;

int main(){

    map<int,int>mp;
    mp.insert({10,30});
    mp.insert(make_pair(40,20));
    mp.insert(make_pair(50,60));
    mp.insert(make_pair(70,80));
    // mp.insert(make_pair(10,100));
    mp[10]=100;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    // list<int>l;
    // l.push_back(10);
    // l.push_front(20);
    // l.push_front(40);
    // l.push_front(50);
    // l.push_front(60);
    // // l.pop_back();
    // // l.pop_front();
    // auto it=l.begin();
    // // advance(it,1);
    // // auto it2=next(it,3);
    // // l.erase(it,it2);
    // l.sort();
    // l.reverse();
    // // cout<<l.size()<<endl;
    // auto itt=std::find(l.begin(),l.end(),20);
    // cout<<*itt<<endl;
    // for(auto it=l.begin();it!=l.end();it++){
    //     cout<<*it<<" ";
    // }
    // vector<int>v;
    // v.push_back(99);
    // v.push_back(97);
    // v.push_back(98);
    // v.erase(v.begin()+1);
    // v.insert(v.begin(),77);
    // std::sort(v.rbegin(),v.rend());
    // // v.clear();
    // // cout<<v.empty()<<endl;
    // // v.pop_back();
    // cout<<v.front();
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }
}