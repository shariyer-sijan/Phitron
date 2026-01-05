#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>>n ;
        string s;
        cin>>s ;
        stack<char> st ;
        st.push(s[0]) ;
        for(int i=1 ; i<s.size() ; i++){
           if( !st.empty() && s[i]== st.top()){
            st.pop() ;
           }
           else {
            st.push(s[i]) ;
           }
        }
        cout<<st.size()<<"\n" ;
    }
    return 0;
}