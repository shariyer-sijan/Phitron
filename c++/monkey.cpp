#include <bits/stdc++.h>

using namespace std;

int main()
{
  char s[1000001] ;

  while(cin.getline(s,1000001)){
int len=strlen(s) ,j=0 ;
for(int i=0 ; i<len ; i++ ){
    if(s[i] != ' '){
        s[j]=s[i] ;
        j++ ;
    }
}
s[j]='\0' ;
sort(s,s+j) ;
cout<<s<<endl ;

  }
    return 0;
}
