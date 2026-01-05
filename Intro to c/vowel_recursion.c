#include<stdio.h>
#include<string.h>
void str(char s[] ,int i , int count ){
  if(s[i-1]=='a' || s[i-1]=='e' || s[i-1]=='i' || s[i-1]=='o' || s[i-1]=='u' || s[i-1]=='A' || s[i-1]=='E' || s[i-1]=='I' || s[i-1]=='O' || s[i-1]=='U'){
    count++ ;
  }
    if(i==0){
        printf("%d",count );
    return;
}
return str(s,i-1,count );
}
int main()
{
   char s[201] ;
   gets(s) ;
   int count=0 ;
str(s , strlen(s), count ) ;
    
    return 0;
}