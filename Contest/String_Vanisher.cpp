#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while( t--){
        int len;
        cin>>len ;
        string s;
        cin>>s ;
        int cnt=0 ;
        for(int i=0 ; i<len ;i++){

            for(int k=i ; k<len ; k++){
            
            if( s[k] < s[k+2]){
                cnt++ ;
                k++ ;
            }
            }
            
        }
    }
    return 0;
}