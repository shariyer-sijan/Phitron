#include <bits/stdc++.h>
using namespace std;

class student 
{
  public:
  string name ;
  int clas ;
  char sec ;
  int id ;
};

int main()
{
int n ;
cin>>n ;
student a[n] ;

char s[n] ;
for(int i=0 ; i<n ; i++){
   cin>>a[i].name>>a[i].clas>>a[i].sec>>a[i].id ;
   s[i]=a[i].sec ; 
}
reverse( s , s+n) ;

for(int i=0 ; i<n ; i++){
    a[i].sec=s[i] ; 
   cout<<a[i].name<<" "<<a[i].clas<< " "<<a[i].sec<<" "<<a[i].id<<endl ;
}

    return 0;
}