#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--){
        long long int n;
        cin>>n ;
        long long int a[n] ;
        cin>>a[0]>>a[1] ;
        int maxfirst , maxlast;
        if( a[0]> a[1]){
            maxfirst=0 , maxlast=1; 
        } 
        else {
            maxfirst=1 , maxlast=0; 
        }
        for(int i=2 ; i<n ; i++){
            cin>>a[i] ;
            if( a[i]> a[maxfirst]){
                maxlast=maxfirst ;
                maxfirst=i ;
            }
            else if( a[i]> a[maxlast]){
                maxlast=i ;
            }
        }
        if(maxlast>maxfirst){
            cout<<maxfirst<<" "<<maxlast <<endl ;
        }
        else {
            cout<<maxlast <<" "<< maxfirst<<endl ;
        }
    }
    return 0;
}