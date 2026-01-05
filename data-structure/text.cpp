#include <bits/stdc++.h>
using namespace std;
int string_find(string s, string f){
int len1=s.size() , len2=f.size() , i,j,k ;
if(len2>len1){
    return -1;
}
   for(i=0 ; i<len1 ; i++){
    if(f[0]==s[i]){
        int flag=1 ;
           for(j=1,k=i;j<len2 ;j++,k++){
            if( f[j] != s[k]){
                flag=0 ;
                break;
            }
           }
           if(flag){
            return i;
           }
    }
   }
   return -1 ;
}
int main() {
    string s="hello world" ;
    int f=string_find(s,"h") ;
   if(f<0){
    cout<< "not found" ;
   }
   else {
    cout<<f ;
   }
    return 0;
}