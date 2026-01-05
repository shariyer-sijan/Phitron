#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin>>s ;
   vector<int> v(26,0) ;
   int len=s.size() ;
   for(int i=0 ; i<len ; i++){
      int val=s[i]-'a' ;
      v[val]++ ; 
   }
   for(int i=0 ; i<26 ; i++){
      if(v[i]>0){
      char c=i +'a' ;
      cout<<c<<" "<<':'<<" "<<v[i] <<endl ;
   }
}
    return 0;
}