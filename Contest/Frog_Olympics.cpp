#include <bits/stdc++.h>
using namespace std;
int dp[10000005] ;
int kn( int i , int n){
    if(i==n){
        return 1 ;
    }
    if(i>n){
        return 0 ;
    }
    if( dp[i] != -1){
        return dp[i] ;
    }
    int op1= kn(i+3,n) ;
    int op2= kn(i+5,n ) ;
   
   dp[i]=max(op1,op2) ;
    return dp[i] ;
}
int ln( int i , int n){
    if(i==n){
        return 1 ;
    }
    if(i>n){
        return 0 ;
    }
    if( dp[i] != -1){
        return dp[i] ;
    }
    int op1= ln(i+3,n) ;
    int op2= ln(i+4,n ) ;
   dp[i]=max(op1,op2) ;
    return dp[i] ;
}

int main() {
    ios::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t ;
while(t--){ 
    int x ;
    cin>>x ;
for(int i=0 ; i<=x ; i++){
    dp[i]=-1 ;
}
    int j= kn(0,x) ;

    for(int i=0 ; i<=x ; i++){
    dp[i]=-1 ;
}
    int l= ln(0,x ) ;
    if( j==1 && l==1){
        cout<<"Both"<<'\n' ;
    }
    else if( j==1 ){
        cout<<"Jumpster"<<'\n' ;
    }
    else if( l==1){
        cout<<"Leapy"<<'\n' ;
    }
    else {
        cout<<"None"<<'\n' ;
    }
    
}
    return 0;
}