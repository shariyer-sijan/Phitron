#include <bits/stdc++.h>

using namespace std;



int main()
{
int t;
cin>>t ;
while(t--){
    int n1,n2,n3 ,marks1,marks2,marks3  ;
    char name1[101] , name2[101] , name3[101], section1 , section2 , section3 ;
    cin>>n1>>name1>>section1>>marks1 ;
cin>>n2>>name2>>section2>>marks2 ;
cin>>n3>>name3>>section3>>marks3 ;

int high =max({marks1,marks2,marks3}) ;
int lowid=INT_MAX ;
char sec , hname[101] ;
if(marks1==high && n1<lowid ){
 lowid=n1 ;
 sec=section1 ;
 strcpy(hname, name1) ;
}
if( marks2==high && n2<lowid ){
     lowid=n2 ;
 sec=section2 ;
 strcpy(hname, name2) ;
}
if(marks3==high && n3<lowid){
     lowid=n3 ;
 sec=section3 ;
 strcpy(hname, name3) ;
}
cout<<lowid<<" "<<hname<<" "<<sec<<" "<<high<<endl ;
}

    return 0;
}
