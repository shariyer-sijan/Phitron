#include <bits/stdc++.h>
using namespace std;

class student 
{
  public:
  string name ;
  int clas ;
  char sec ;
  int id ;
  int math_marks ;
  int eng_marks ;
};

bool cmp(student l , student r){
    if( l.eng_marks == r.eng_marks){
        if(l.math_marks==r.math_marks){
            return l.id<r.id ;
        }
      return l.math_marks>r.math_marks ;
    }
  return l.eng_marks > r.eng_marks ;
}

int main()
{
int n ;
cin>>n ;
student a[n] ;

for(int i=0 ; i<n ; i++){
   cin>>a[i].name>>a[i].clas>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks ;
  }
  sort(a,a+n,cmp) ;

for(int i=0 ; i<n ; i++){
  cout<<a[i].name<<" "<<a[i].clas<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
}
    return 0;
}