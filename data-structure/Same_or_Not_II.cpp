#include <bits/stdc++.h>
using namespace std;
class mystack
{   
   public:
      list<int> l;
void push(int val){
    l.push_back(val) ;
}
void pop(){
    l.pop_back() ;
}
int top(){
    return l.back() ;
}
};
class myqueue
{   
   public:
      list<int> l;
void push(int val){
    l.push_back(val) ;
}
void pop(){
    l.pop_front() ;
}
int front(){
    return l.front() ;
}
};
int main() {
   mystack st;
   myqueue q;
    int n,m,val ;
    cin>>n>>m ;

    for(int i=0 ; i<n ; i++){
 cin>> val; 
 st.push(val) ;
    }
    for(int i=0 ; i<m ; i++){
cin>>val ;
q.push(val) ;
    }
 if(n!=m){
    cout<<"NO";
    return 0;
 }
 else{
     while(n--){
        if( st.top() != q.front() ){
            cout<<"NO" ;
            return 0;
        }
        else {
            st.pop() ;
            q.pop() ;
        }
     }
 }
cout<<"YES" ;
    return 0;
}