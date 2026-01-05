#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q ;
    int x; 
    string s;
    queue<string> qu, q2;
    while(q--){
        cin>>x ;
        if(x==0){
             cin>>s ;
             qu.push(s) ;
        }
        else { 
            if(qu.empty()){
                cout<<"Invalid"<<endl ;
                continue;
            }
         q2.push( qu.front()) ;
         qu.pop() ;
        }   
        
        if( !q2.empty()){
             cout<< q2.front() <<endl ;
        q2.pop() ;
        }
    }
    return 0;
}