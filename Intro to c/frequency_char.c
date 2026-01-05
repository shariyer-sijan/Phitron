#include<stdio.h>
#include<string.h>
int main()
{   
    char s[10000001] ; //size kom dile run hobe, this size was for cf
    scanf("%s", s);
    int fre[26]={0} ,len=strlen(s);
    for(int i=0 ; i<len; i++){
    int val= s[i]- 'a' ;
    fre[val]++ ;
    }

    for(int i=0 ; i<26 ; i++ ){
        if(fre[i] > 0){
            printf("%c : %d\n", (i+'a') , fre[i] );
        }
      
    }
    return 0;
}