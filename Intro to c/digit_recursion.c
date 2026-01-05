#include<stdio.h>
void digit(int n){
    if(n<=0){
        return ;
    }
  
  
      digit(n/10) ;
        printf("%d ",n%10) ;
}


int main()
{
   int t;
   scanf("%d", &t) ;
   while(t--){
    int n ;
    scanf("%d", &n) ;
    if(n==0){
        printf("0") ;
    }
    digit(n) ;
    printf("\n") ;
   }
    
    return 0;
}