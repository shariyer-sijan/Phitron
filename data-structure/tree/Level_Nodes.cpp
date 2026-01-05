#include <bits/stdc++.h>
using namespace std;
vector<int> v;
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
int count_nodes(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int l=count_nodes(root->left) ;
    int r=count_nodes(root->right) ;
    return l+r+1 ;
}
void lvl(Node* root){
    int mn,flag=1 ;
    cin>>mn ;
    queue< pair<Node*,int >> q ;
 
    if(root==NULL){
        return ;
    }
     if( root){
        q.push({root,0}) ;
     }

while(!q.empty()){
    pair<Node*,int> parent= q.front() ;
    q.pop() ;
    Node* n=parent.first ;
    int level=parent.second ;
   if(mn==level){
    cout<<n->val<<" " ;
    flag=0 ;
   }
    if(n->left){
        q.push({n->left,level+1}) ;
    }
    if(n->right){
        q.push({n->right,level+1}) ;
    }
}
   if(flag){
    cout<<"Invalid" ;
   }
}
int main() {
    Node* root=input_tree() ;
  lvl(root) ;
    return 0;
}