#include<stdio.h>
#include<string.h>
int main()
{
  int n,m ;
  scanf("%d",&n) ;
  int a[n] ;
  for(int i=0 ; i<n ; i++){
    scanf("%d",&a[i]) ;
  }
  scanf("%d",&m) ;
  int b[m] ;
  for(int i=0 ;i<m ; i++){
  scanf("%d",&b[i]) ;
  }

  int i, c[m+n] ;
  for(i=0 ;i<n ;i++){
    c[i] = a[i] ;
  }
  for(int j=0 ; j<m ; j++){
    c[i] = b[j] ;   // c[j+n] = = b[j] ;
    i++ ;
  }
  for(int j=0 ; j<m+n ; j++){
    printf("%d ",c[j]) ;
  }
    return 0;
}