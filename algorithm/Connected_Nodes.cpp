#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e ;
    cin>>n>>e ;
    vector<int> arr[n] ;
    while(e--){
        int a,b ;
        cin>>a>>b ;
        arr[a].push_back(b) ;
        arr[b].push_back(a) ;
    }
    int t;
    cin>>t ;
    while(t--){
        int x;
        cin>>x;
        vector<int> rev ;
        
        for(auto hi : arr[x]){
            rev.push_back(hi) ;
        }
        if(rev.empty()){
            cout<< "-1"<<endl ;
            continue ;
        }
        sort(rev.begin() , rev.end() , greater<int>() );
        for( auto hi : rev){
            cout<<hi<<" ";
        }
        cout<<endl ;
    }
    return 0;
}