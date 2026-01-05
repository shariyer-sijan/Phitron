#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    cin>>s ;
    for( int i=0 ; i<s.size() ; i++){
        if( s[i]== '7'){
            cout<<"Lucky" ;
            return 0;

        }
    }
    cout<<"Not Lucky" ;
    return 0;
}