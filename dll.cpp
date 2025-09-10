#include<iostream>
using namespace std;
//Singly Linked List
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int data,Node*next){
//         this->data=data;
//         this->next=next;
//     }
//     Node(int data){
//         this->data=data;
//         next=nullptr;
//     }
// };
class Node{
    public:
    int data;
    Node*next;
    Node*back;
    Node(int data,Node*next,Node*back){
        this->data=data;
        this->next=next;
        this->back=back;
    }
    Node(int data){
        this->data=data;
        next=nullptr;
        back=nullptr;
    }
};


