#include <bits/stdc++.h>
using namespace std;
int n;
int dp[100005] ;

int s(int i){ 
    if(i>n){ 
        return 0 ;
    }
    if(i==n){ 
        return 1;
    }
    if(dp[i] != -1){ 
        return dp[i] ;
    }
    int op1= s(i+3) ;
    int op2= s(i*2) ;

    dp[i]= max(op1,op2) ;
    return dp[i] ;
}
int main() {
    int t;
    cin>>t ;
    while(t--){ 
        cin>>n ;
        memset(dp,-1,sizeof(dp) ) ;
        if( s(1)){
            cout<<"YES"<<endl ;
        }
        else { 
            cout<<"NO"<<endl ;
        }
    }
    return 0;
}