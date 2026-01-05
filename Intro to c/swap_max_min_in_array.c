#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n );
   int a[n] ,max,min,x=0,y=0;

   scanf("%d",&a[0]) ;
   max=min= a[0] ;

   for(int i=1 ;i<n ;i++){
    scanf("%d",&a[i]) ;
    if(a[i]>max ){
        max=a[i] ;
         x=i ;
    }
    else if(a[i]<min){
        min=a[i] ;
        y=i ;
    }
   }
a[x]=min ;
a[y]=max ;

  for(int i=0 ;i<n ; i++){
    printf("%d ", a[i]) ;
  }
   
    return 0;
}