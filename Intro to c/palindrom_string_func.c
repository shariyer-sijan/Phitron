#include<stdio.h>
int is_palindrome(char s[]){
    int len=strlen(s) , count=1 ;
    for(int i=0 ; i<= len/2 ; i++){
        if( s[i] != s[len-1-i] ){
         count=0 ;
         break  ;
        }
    }
    return count ;
}
int main()
{
   char s[1001] ;
   scanf("%s", s) ;
    int c=is_palindrome(s) ;
    if(c){
        printf("Yes") ;
    }
    else {
        printf("No") ;
    }
    
    return 0;
}