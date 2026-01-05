#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t ;
 while(t--){
    int n,s ;
    cin>>n>>s ;
    int a[n] ;
    for(int i=0 ; i<n ; i++){
        cin>>a[i] ;
    }
sort(a,a+n) ;
int flag=1 ;
for(int i=0 ; i<n-2 ; i++){

for(int j=1 ; j<n-1 ; j++){
    
for(int k=2 ; k<n ; k++){
     if((i!=j && j!=k && k!=i)&&  a[i]+a[j]+a[k] == s ){
        cout<<"YES"<<endl ;
        flag=0 ;
        break ;
    }
}
if(flag==0){
    break ;
}
}
if(flag==0){
    break ;
}
}
if(flag){
    cout<<"NO"<<endl ;
}
 }
    return 0;
}
