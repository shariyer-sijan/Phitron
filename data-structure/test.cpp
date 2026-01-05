#include <bits/stdc++.h>
using namespace std;

int main() {
    int val;
    list<int> l;
    while(1){
        cin>>val ;
        if(val== -1){
            break;
        }
        l.push_back(val) ;
    }
 l.sort() ;
  l.unique() ;
 for(auto i=l.begin() ; i!=l.end()  ; i++){
   cout<< *i <<" " ;
 }
    return 0;
}