#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--){ 
        string s1,s2 ;
        int freq[26]={0} ;
        cin>>s1>>s2 ;
        for(int i=0  ; i<s1.size() ; i++){ 
         int val= s1[i]-'a' ;
         freq[val]++ ;
        }
        for(int i=0  ; i<s2.size() ; i++){ 
         int val= s2[i]-'a' ;
         freq[val]-- ;
        }
        int flag=1 ;
        for(int i=0 ; i<26 ; i++){ 
            if( freq[i] != 0){ 
                cout<<"NO"<<endl ;
                flag=0 ;
                break ;
            }
        }
    if(flag){
        cout<<"YES"<<endl ;
    }
    }
    return 0;
}