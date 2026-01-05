#include<stdio.h>
int main()
{
   int n,m,sum=0 ;
   scanf("%d %d", &n , &m );
   int a[n][m] ;
   for(int i= 0 ; i<n ; i++){
    for(int j=0 ; j<m ; j++){
        scanf("%d",&a[i][j]) ;
    }
   }
 int max=0 ,row=0 ;
  for(int i= 0 ; i<n ; i++){
    int count=0 ;
    for(int j=0 ; j<m ; j++){
       if(a[i][j]==1){
        count++ ;
       }
    }
    if(count>max){
        max=count ;
        row=i ;
    }
   }
    printf("%d",row );
    return 0;
}