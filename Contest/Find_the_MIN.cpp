#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
cin.tie(NULL);

priority_queue<int, vector<int>, greater<int>> pq ;

int q;
cin>>q ;
while(q--){
    int x;
    cin>>x ;
    if( x==1 ){
        int val ;
        cin>>val ;
        pq.push(val) ;
    }
    else {
        
        if( !pq.empty()){
            cout<<pq.top() <<'\n' ;
            int occ= pq.top() ;
            pq.pop() ;
            while ( !pq.empty() && occ == pq.top()){
               pq.pop() ;
            }
        }
        else {
            cout<<"empty"<<'\n' ;
        }
    }
}
    return 0;
}