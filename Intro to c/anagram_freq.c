#include<stdio.h>
#include<string.h>
int main()
{
   char s[101], c[101] ;
   scanf("%s %s",s ,c ) ;
   int len1=strlen(s) , len2=strlen(c) , f[26]={0} ; 

   for(int i=0 ; i< len1 ; i++){
    int val=s[i]-'a' ;
    f[val]++ ; 
   }
   for(int i=0 ; i<len2 ; i++){
    int val= c[i]-'a' ;
    f[val]-- ;
   }
   
   for(int i=0 ; i<26 ; i++ ){
    if( f[i] != 0 ){
        printf("No") ;
        return 0;    // can be do by flag variable
    }
   }
   printf("Yes") ;
    return 0;
}