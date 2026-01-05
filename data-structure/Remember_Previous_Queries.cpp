#include <bits/stdc++.h>
using namespace std;


int main() {
    int q,v,x ;
    list<int> l ;
    cin>>q ;
    int count=0 ;
    while(q--){
  cin>>x>>v ;
     if(x==0){
        l.push_front(v) ;
        count++ ;
     }
     else if(x==1){
        l.push_back(v) ;
        count++ ;
     }
     else {
       if(v<count){
        l.erase(next(l.begin(),v)) ;
        count-- ;
       }
     }
     list<int> r;
  cout<<"L -> ";
  for(auto it=l.begin() ; it!=l.end() ; it++){
    cout<<*it <<" " ;
    r.push_front(*it) ;
  }
  cout<<endl ;
  cout<<"R -> " ;
  for(auto it=r.begin() ; it!=r.end() ; it++){
    cout<<*it <<" " ;
  }
     cout<<endl ;
    }
    return 0;
}