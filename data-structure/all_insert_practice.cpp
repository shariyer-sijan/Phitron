#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
       int val ;
       Node* next ;

    Node(int val){
        this->val = val ;
        this->next =NULL ;
    }
};

void insert_at_head(Node* &head ,Node* &tail , int val){
Node* newnode= new Node(val) ;
 if(head==NULL){
    head=newnode ;
    tail=newnode ;
    return ;
    }
newnode->next=head ;
head=newnode ;
}

void insert_at_pos(Node* &head , int idx , int val){
    Node* tmp=head ;
    for(int i=1 ; i<idx ; i++){
        tmp=tmp->next ;
    }
    Node* newnode= new Node(val) ;
    newnode->next=tmp->next ;
    tmp->next=newnode ;
}

void insert_at_tail(Node* &head , Node* &tail , int val ){
    Node* newnode=new Node(val) ;
    if(head==NULL){
    head=newnode ;
    tail=newnode ;
    return ;
    }
    tail->next=newnode ;
    tail=newnode ;
}

void print_list(Node* head){
    Node* tmp=head ;
    while(tmp != NULL){
        cout<<tmp->val <<" " ;
        tmp=tmp->next ;
    }
    cout<<endl ;
}
int size_of_list(Node* head){
    int count=0 ;
    Node* tmp=head ;
    while(tmp != NULL){
      count++ ;
      tmp=tmp->next ;
    }
    return count ;
}

int main()
{
  Node* head=NULL ;
  Node* tail=NULL ;
  int val ;
while(1){
    cin>>val ;
    if(val== -1){
     break ;
    }
    insert_at_tail(head,tail,val) ;
}
int idx ;
     while(cin >> idx >>val ){
         int size=size_of_list(head) ;
          if(idx==0){
            insert_at_head(head,tail, val) ;
          }
       else if( idx==size){
        insert_at_tail(head,tail,val) ;
       }
       else if( idx>size){
        cout<<"Invalid"<<endl ;
       continue ;
       }
       else {
        insert_at_pos(head,idx,val) ;
       }
       
       print_list(head) ;
      
    }

    return 0;
}
//input 10 20 30 -1
// 1 40
// 5 50
// 4 50
// 0 100
// 7 40
// 1 110
// 7 40

//output 10 40 20 30 
// Invalid
// 10 40 20 30 50 
// 100 10 40 20 30 50 
// Invalid
// 100 110 10 40 20 30 50 
// 100 110 10 40 20 30 50 40 
