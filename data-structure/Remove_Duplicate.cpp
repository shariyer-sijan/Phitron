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
void doble(Node* &head){
    Node* tmp=head ;
   for(Node* i=tmp ; i!= NULL ; i=i->next){
    Node* j=i ;
    while( j->next!=NULL){
       if(i->val==j->next->val){
          Node* deletenode=j->next ;
          j->next=j->next->next ;
          delete deletenode ;
        
       }
       else {
          j=j->next ;
       }
      }
   }
}
void print_list(Node* head){
    Node* tmp=head ;
    while(tmp != NULL){
        cout<<tmp->val <<" " ;
        tmp=tmp->next ;
    }
    cout<<endl ;
}
int main() {
    Node* head=NULL ;
    Node* tail=NULL ;
int val;
    while(1){
          cin>>val;
    if(val== -1){
        break;
    }
    insert_at_tail(head,tail,val) ;
    }
doble(head) ;
print_list(head) ;
    return 0;
}