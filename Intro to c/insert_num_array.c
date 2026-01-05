#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n );
   int a[n+1] ;
   for(int i=0 ; i<n ; i++){
    scanf("%d", &a[i]) ;
   }
   int ind,val ;
   scanf("%d %d",&ind , &val);
  
 for(int i=n ; i>ind ; i--){
    a[i]=a[i-1] ;  
 }
   a[ind] = val ;

   for(int j=0 ; j<=n ; j++){
    printf("%d ", a[j]) ;
   }
    
    return 0;
}