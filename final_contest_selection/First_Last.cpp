#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n ;
    vector<long long int> v(n);
    for(int i= 0 ; i<n ; i++) {
        cin>>v[i] ;
    }
   map<long long int ,pair<long long int, long long int> > mp;
   for( int i=0 ; i<n ; i++){
    if( ! mp.count(v[i])){
       mp[v[i]].first=i ;
    }
    mp[v[i]].second=i ;
   }
   for(auto p: mp){
    cout<<p.first<<" "<<p.second.first+1<<" "<<p.second.second+1<<"\n" ;
   }
    return 0;
}