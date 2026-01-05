#include <bits/stdc++.h>
using namespace std;
int dp[50] ;
int tito(int n){ 

    if(n==1 || n==0 ){ 
        return n;
    }
    else if( n== 2){ 
        return 1;
    }
    else if( n==3){ 
        return 2 ;
    }

    if( dp[n] != -1 ){ 
        return dp[n] ;
    }
    dp[n]= tito(n-1)+tito(n-2)+ tito(n-3)+ tito(n-4) ;
    return dp[n] ;

}

int main() {
    int n;
    cin>>n ;
    memset(dp,-1, sizeof(dp)) ;
    cout<<tito(n)<<endl ;
    return 0;
}