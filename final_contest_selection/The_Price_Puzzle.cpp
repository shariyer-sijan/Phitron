#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n ;
    vector<int> v(n) ;
    map<int , int > mp ;
    for(int i=0 ; i<n; i++){
       cin>>v[i] ;
      // mp[v[i]]++ ;
    }
   
    for(int i=0 ; i<n; i++){
       for(int j=i+1 ; i<n; i++){
       int sum= v[i]+v[j] ;
        mp[sum]++ ;
      }
    }
    for(auto p:mp){
        for(int i=0 ; i<n ; i++){
            
        }
    }
    // int q;
    // cin>>q ;
    // while(q--){
    //     int l,r ;
    //     cin>>l>>r ;
    //     int cnt=0 ;
    //     for(int i=l ;i<=r ; i++){
    //         if( mp.count(i)){
    //             cnt++ ;
    //         }
    //     }
    //     cout<<cnt<<"\n" ;
    // }

    return 0;
}