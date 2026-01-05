#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t ) ;
   while(t-- ){
    int n;
    scanf("%d",&n );
    int a[n] ;
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i] ) ;
    }
    int sum=0 ,min=0 ;
  min= a[0] + a[1]+ 2 -1  ;
   
  for(int i=1 ; i<n ; i++){
    for(int j=i+1 ; j>i && j<=n ; j++){
        sum= a[i-1] + a[j-1] + j - i;
        if(sum<min){
            min=sum ;
        }   
    }
  }
     printf("%d\n",min );
   }
    return 0;
}