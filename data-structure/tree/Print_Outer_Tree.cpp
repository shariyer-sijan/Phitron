#include <bits/stdc++.h>
using namespace std;
vector<int> vl , vr ;
class Node   //binary node
{
  public:
       int val ;
       Node* left ;
       Node* right ;
    Node(int val){
        this->val = val ;
        this->left =NULL ;
        this->right=NULL ;
    }
};
Node* input_tree(){
    int val;
    cin>>val ;
    Node* root=new Node(val) ;
    queue<Node*> q ;
    q.push(root) ;

    while(! q.empty()){
        Node* f=q.front() ;
        q.pop() ;

        int l,r ;
        cin>>l>>r ;
        Node* myleft, *myright ;
        if(l== -1){
            myleft=NULL ;
        }
        else {
            myleft=new Node(l) ;
        }
        if(r== -1){
            myright=NULL ;
        }
        else {
            myright=new Node(r) ;
        }

        f->left= myleft ;
        f->right=  myright;

        if(f->left){
            q.push(f->left) ;
        }
        if(f->right){
            q.push(f->right) ;
        }
    }
    return root;
}
void trav_right(Node* root) {
    Node* current = root; 
    while (current) {
        if(current->val != -1){
              vr.push_back(current->val) ;
        }
        
        if (current->right){
            current = current->right;
        }
        else {
            current = current->left;
        }
     
}
}
void trav_left(Node* root) {
    Node* current = root;
    while (current) {
        vl.push_back(current->val) ;
        current->val= -1 ;
        if (current->left){
            current = current->left;
        }
        else{
            current = current->right;
        }
     
    }
}


int main() {
    Node* root=input_tree() ;
    int miss=root->val ,flag=1 ,mlag=1;
    trav_left(root) ;
  trav_right(root) ;
    if(root->left != NULL){
         reverse(vl.begin(),vl.end()) ;
         flag=0 ;
    }
 if(flag!=1){
    vl.pop_back() ;
    mlag=0 ;
 }
  for(auto i=vl.begin() ; i != vl.end() ; i++){
    cout<<*i<<" " ;
   }
    if(!mlag){
        cout << miss << " ";
    }
   for(auto i=vr.begin() ; i != vr.end() ; i++){
    cout<<*i<<" " ;
   }
    return 0;
}