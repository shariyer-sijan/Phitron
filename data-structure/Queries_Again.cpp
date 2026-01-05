#include <bits/stdc++.h>
using namespace std;
class Node
{
  public:
       int val ;
       Node* next ;
       Node* prev ;

    Node(int val){
        this->val = val ;
        this->next =NULL ;
        this->prev=NULL ;
    }
};  
void insert_at_head(Node* &head , Node* &tail , int val){
     Node* newnode= new Node(val );
    if(head==NULL){
      head=newnode ;
      tail=newnode  ;
      return ;
    }
    head->prev=newnode ;
    newnode->next=head ;
    head=newnode ;
}
void insert_at_tail(Node* &head , Node* &tail, int val){
    Node* newnode= new Node(val) ;
    if(head==NULL){
     head=newnode ;
     tail=newnode ;
     return ;
    }
  tail->next= newnode ;
  newnode->prev=tail ;
  tail=newnode ;
  return ;
}
void insert_at_any_pos(Node* &head , Node* &tail , int ind ,int val){
    Node* newnode=new Node(val) ;
    Node* tmp=head ;
    for(int i=1 ; i<ind ; i++){
        tmp=tmp->next ;
    }
    newnode->next=tmp->next ;
    tmp->next->prev= newnode ;
    tmp->next=newnode ;
    newnode->prev =tmp ;

}
void left_printing(Node* head , Node* tail){
    Node* tmp=head ;
    cout<<"L -> " ;
    while(tmp!=NULL){
        cout<<tmp->val <<" ";
        tmp=tmp->next ;
    }
    cout<<endl ;
}
void right_printing(Node* head , Node* tail){
    Node* tmp=tail ;
    cout<<"R -> " ;
    while(tmp!=NULL){
        cout<<tmp->val <<" ";
        tmp=tmp->prev ;
    }
    cout<<endl ;
}

int main() {
    Node* head=NULL ;
    Node* tail=NULL ;
    int q,v,x;
    cin>>q ;
    int index=0 ;
    while(q--){
        int flag=1 ;
  cin>>x>>v ;
   if(x>index){
     cout<<"Invalid"<<endl ;
     flag=0 ;
   } 
   else {
      if(x==0){
        insert_at_head(head,tail,v) ;
        index++ ;
      }
      else if(x==index){
        insert_at_tail(head,tail,v) ;
        index++ ;
      }
      else{
        insert_at_any_pos(head,tail,x,v) ;
        index++ ;
      }

   }
   if(flag){
    left_printing(head,tail) ;
    right_printing(head,tail) ;
   }
    }
    return 0;
}