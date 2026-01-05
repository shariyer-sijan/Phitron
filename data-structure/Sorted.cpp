#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
       for(int i=0; i<n ; i++){
           cin>> a[i] ;
           b[i]=a[i] ;
       }
       sort(a.begin() ,a.end()) ;
    int flag=1 ;
       for(int i=0;i<n ; i++){
        if( a[i] != b[i]){
            cout<<"NO"<<endl;
            flag=0;
            break ;
        }
       }
       if(flag){
        cout<<"YES"<<endl;
       }

    }
    return 0;
}