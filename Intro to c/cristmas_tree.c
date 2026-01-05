#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n );
  int count=n/2 ;
  int s=6+count , star=1;
   for(int i=1 ; i<=6+count  ; i++){
      for(int j=1 ; j<s ; j++){
       printf(" ");
      }
      for(int j=1 ; j<=star ; j++){
        printf("*") ;
      }
      s-- ;
      star +=2 ;
    printf("\n") ;
   }
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=5 ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=n ; j++){
            printf("*") ;
        }
        
        printf("\n") ;
    }
    return 0;
}