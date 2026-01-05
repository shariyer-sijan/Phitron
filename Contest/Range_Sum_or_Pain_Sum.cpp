#include <bits/stdc++.h>
using namespace std;

int main() {
     ios::sync_with_stdio(false);
cin.tie(NULL);

    int n,q ;
    cin>>n>>q ;
     vector<int> a(n) ;
     int flag=0 ;
     vector<long long int> pre(n+1);
     pre[0]=0 ;
     for(int i=0 ,k=1 ; i<n ; i++){
        a[i]= k;
        flag++;
        if(flag==2){
            k++ ;
            flag=0 ;
        }
     }
     for(int i=1 ; i<=n ; i++){
        pre[i]=a[i-1]+pre[i-1] ;
     }
    
    while(q--){
        int l,r ;
        cin>>l>>r ;
        long long int sum= pre[r]-pre[l-1] ;
        cout<<sum<<'\n' ;
    }
    return 0;
}