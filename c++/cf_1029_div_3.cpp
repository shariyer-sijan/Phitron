#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>> t ;
 while(t--){
   int n,x ;
  cin>>n>>x ;
  int a[n] ;
  for(int i=0 ; i<n ; i++){
    cin>>a[i] ;
  }
int i;
  for( i=0 ; i<n  ; i++){
    if(a[i]==1){
      i=i+x ;
      break ;
    }
  }
  if(i> n-1){
    cout<<"YES"<<endl ;
  }
  else {
    int flag=1 ;
    for(int j=i ; j<n ; j++){
      if(a[j]==1){
        cout<<"NO"<<endl ;
        flag=0 ;
        break ;
      }
    }
    if(flag){
      cout<<"YES"<<endl ;
    }
  }
 }
    return 0;
}
