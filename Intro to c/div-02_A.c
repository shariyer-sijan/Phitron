#include<stdio.h>
int main()
{
   int t ;
   scanf("%d",&t ) ;
   while(t--){
    int a,b,c ;
    scanf("%d %d %d",&a , &b , &c );
    int x=c-b , y=b-a;
      a=a+y ;
      x=x-y ;
      if( x>=0 && x%3==0){
        printf("YES\n");
      }
      else {
        printf("NO\n") ;
      }
   }
    return 0;
}