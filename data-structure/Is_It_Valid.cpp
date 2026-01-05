#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t  ;
    cin.ignore() ;
    string s;

    while(t--){
            stack<char> st ;
   cin>>s ;
   int len=s.size() ;
   for(int i=0 ; i<len ; i++){
    if( st.empty()){
        st.push(s[i]) ;
    }
    else{
        if( s[i]=='0' && st.top()=='1'){
            st.pop() ;
        }
        else if(s[i]=='1' && st.top()=='0'){
              st.pop() ;
        }
        else {
      st.push(s[i]) ;
        }
    }
   }
   if( st.empty()){
    cout<< "YES"<<endl ;
   }
   else {
    cout<<"NO"<<endl ;
   }
    }
    return 0;
}