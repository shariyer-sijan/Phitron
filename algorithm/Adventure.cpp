#include <bits/stdc++.h>
using namespace std;
int val[10005] , weight[10005] , dp[10005][10005];

int knap(int i, int mx_w){ 
    if(i<0 || mx_w <=0 ){ 
        return 0;
    }
    if(dp[i][mx_w] != -1){
     return dp[i][mx_w] ;
    }
    if(weight[i] <= mx_w){ 
        int op1= knap(i-1,mx_w - weight[i]) + val[i] ;
        int op2= knap(i-1, mx_w) ;
        dp[i][mx_w]= max(op1,op2) ;
        return dp[i][mx_w] ;
    }
    else {
         dp[i][mx_w]  = knap(i-1, mx_w) ;
          return dp[i][mx_w] ;
    }
}

int main() {
    int t;
    cin>>t ;
    while(t--){ 
        int n,w ;
        cin>>n>>w ;

        for(int i=0 ; i<n ; i++){  
           cin>>weight[i] ;
           for(int j=0 ; j<=w; j++){  
            dp[i][j]= -1 ;
           }
        }
        for(int i=0 ; i<n ; i++){ 
           cin>>val[i] ;
        }
        cout<<knap(n-1, w) <<endl ;

    }
    return 0;
}