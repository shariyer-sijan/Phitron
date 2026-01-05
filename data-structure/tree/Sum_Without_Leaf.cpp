#include <bits/stdc++.h>
using namespace std;

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
int sum(Node* root,int s){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right== NULL){
        return 0;
    }
    int l=sum(root->left,s) ;
    int r=sum(root->right,s) ;
    return root->val +l+r ;
}
int main() {
    Node* root=input_tree() ;
   int sums=sum(root , 0) ;
   cout<<sums ;
    return 0;
}