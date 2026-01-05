#include<stdio.h>
#include<string.h>
int main()
{
   char a[11],b[11] ;
   gets(a) ;   //fgets diye nile newline soho add hoye jacce
   gets(b) ;
  printf("%d %d\n", strlen(a),strlen(b) );

  char c[strlen(a)+strlen(b)+1] ;

  for(int i=0 ; i<strlen(a) ;i++){
    c[i] = a[i] ;
  }
  for(int i=0 ; i<strlen(b) ;i++){
    c[i+strlen(a)] = b[i] ;
  }
  c[strlen(a)+strlen(b)]='\0' ;
 printf("%s\n",c) ;
 char x=a[0];
 a[0]=b[0] ;
 b[0]= x ;
 printf("%s %s",a,b) ;

    
    return 0;
}