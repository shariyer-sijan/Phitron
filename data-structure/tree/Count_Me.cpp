#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin>>t ;
      cin.ignore() ;

      while(t--){
    map<string, int> mp ;
    string word ,s;
    getline(cin,s) ;
    stringstream ss(s) ;
     int max=0;
    string x;
    while(ss>> word){
        mp[word]++ ;
         if(max< mp[word]){
            max=mp[word] ;
            x= word ;
        }
    }
   cout<<x<<" "<<max <<endl ;
      }
    return 0;
}