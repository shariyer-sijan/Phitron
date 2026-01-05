#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> web;
    string s;
    while(1){
        cin>>s ;
        if( s=="end"){
            break;
        }
    web.push_back(s) ;
    }
    auto here=web.begin() ;
    int q;
    cin>>q ;
    cin.ignore() ;
    string name ;
    while(q--){
     getline(cin,s) ;
     stringstream  ss(s) ;
     ss>>s ;
        if(s=="visit"){
        ss>>name ;
           auto it= find(web.begin() , web.end() , name );
           if(it != web.end()){
            here=it ;
            cout<< *it <<endl ;;
           }
           else {
            cout<<"Not Available"<<endl ; ;
           }
        }
        else if(s=="next"){
            auto last=here ;
            last++ ;
             if (last !=web.end()) {
                here=last ; ;
                cout<< *here<<endl;
            } 
            else{
                cout<<"Not Available"<<endl ;
            }
        }
        else if(s=="prev"){
         if (here!= web.begin()) {
                here-- ;
                cout<< *here<<endl ;
            } else {
                cout<<"Not Available"<<endl ;
            }
        }

    }
    return 0;
}