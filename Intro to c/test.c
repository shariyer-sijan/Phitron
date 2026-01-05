#include<stdio.h>
int main()
{
   int l,r ;
   scanf("%d %d", &l ,&r );
   int hi=0 ;
   for(int i=l ; i<=r ; i++){
    int even= 0 , odd=0 ;
      if(r<=9){
        printf("-1") ;
        return 0;
      }
    else {
      int x=i ;
      while(x){
      
      if( (x%10)%2==0){
        even++ ;
      }
      else{
        odd++ ;
      }
    x=x/10 ;
    }
    if(even-odd==0){
      printf("%d\n",i) ;
hi=1;
    }
    
  }
   }
    if(hi == 0){
      printf("-1") ;
    }
    return 0;
}