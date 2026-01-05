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
void delete_at_head(Node* &head ,Node* &tail , int* count ){
    if(head==NULL){
        return ;
    }
Node* deletenode=head ;
head=head->next ;
delete deletenode ;
*count= (*count)-1 ;
}
void deleteidx(Node* &head ,Node* &tail , int idx ,int* count){
    Node* tmp=head ;
    if(idx==0 && (*count)>0){
     delete_at_head(head ,tail, count) ;
    }
    else if(idx>=(*count)){
        return ;
    }
    else{
    for(int i=1 ; i<idx ; i++){
   tmp=tmp->next ;
    }
    Node* deletenode=tmp->next ;
    tmp->next=tmp->next->next ;
    if(deletenode ==tail){
    tail = tmp;  
}
    delete deletenode;
  *count= (*count)-1 ;
}
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
int main() {
    int q,count=0;
    cin>>q ;
    Node* head=NULL ;
    Node* tail=NULL ;
    while(q--){
        int x, val ;
        cin>>x>>val ;
        if(x==0){
           insert_at_head(head,tail,val) ; 
           count++ ;
        }
        else if(x==1){
        insert_at_tail(head,tail,val) ;
        count++ ;
        }
        else {
    deleteidx(head,tail,val,&count) ;
        }
print_list(head) ;
    }
    return 0;
}
