#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--){
        long long int n ;
        long long int c;
        cin>>n>>c ;
        long long int a[n] ;
        for(int i=0 ; i<n ;i++){
            cin>>a[i] ;
        }
        sort(a,a+n,greater<long long int>()) ;
       int idx=0;
        while(a[idx]>c  && idx<n){
           idx++;
        }
        int coin=0 ;
        for(int i=idx ; i<n ; i++){
            if(a[i]>c){
            coin++ ;
            continue;
           }
           for(int j=i+1 ; j<n ; j++){
             a[j]=2*a[j] ;
           }
           
        }
cout<<coin+idx <<endl ;
    }
    return 0;
}