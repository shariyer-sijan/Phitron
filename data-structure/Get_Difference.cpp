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
void minmax(Node* head, int* maxp , int* minp){
    Node* tmp=head ;
     int max=tmp->val ;
     int min=max ;
     tmp=tmp->next ;
     while(tmp != NULL){
        if(max< tmp->val){
            max=tmp->val ;
        }
        else if(min > tmp->val){
            min=tmp->val ;
        }
        tmp=tmp->next ;
     }
*maxp=max ;
*minp=min ;
}
int main()
{
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

int max,min ;
minmax(head,&max, &min) ;
cout<<max-min ;
    return 0;
}