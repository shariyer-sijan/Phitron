#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t; 
   cin>>t ;
   while(t--){
    string s,x ;
    cin>>s>>x ;
    int lens=s.size() , lenx=x.size() ;
   for(int i=0 ; i< lens ; i++){
    int flag=1 ;
      if(s[i]==x[0]){
             for(int p=i,q=0 ; q<lenx ; p++,q++){
                if( s[p] != x[q]){
                    flag=0 ;
                    break ;
                }
             }
             if(flag){
                s.replace(i,lenx,"#");
             }
      }
   }
   cout<<s<<endl ;
} 
    return 0;
}
