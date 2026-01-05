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
int leaf(Node* root){
    if(root==NULL){
        return 0;
    }
    
    if(root->left==NULL && root->right== NULL){
        v.push_back(root->val) ;
        return 0;
    }
    int l=leaf(root->left) ;
    int r=leaf(root->right) ;
    return l+r ;
}
int main() {
    Node* root=input_tree() ;
   int l= leaf(root ) ;
   sort(v.begin() , v.end(),greater<int>()) ;
   for(auto i=v.begin() ; i != v.end() ; i++){
    cout<<*i<<" " ;
   }
    return 0;
}