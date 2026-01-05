#include <bits/stdc++.h>
using namespace std;
class Student{
     public:
       string name ;
       int roll;
       int marks ;
       Student(string name , int roll , int marks ){
        this->name=name ;
        this->roll=roll ;
        this->marks =marks ;
       }
};
class cmp{
     public:
     bool operator()(Student l , Student r){
        if(l.marks< r.marks){
            return true;
        }
        else if( l.marks== r.marks ){
            return l.roll>r.roll ;
        }
        else {
            return false;
        }

     }
};
int main() {
    int n,q;
    cin>>n ;
    priority_queue<Student,vector<Student>,cmp> pq ;
    while(n--){
  string s ;
  int roll,marks ;
  cin>>s>>roll>>marks ;
Student obj(s,roll,marks) ;
pq.push(obj) ;
    }

  cin>>q;
  while(q--){
      int x;
      cin>>x ;
      if(x== 0){
      string s ;
     int roll,marks ;
     cin>>s>>roll>>marks ;
    Student obj(s,roll,marks) ;
    pq.push(obj) ;

    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl ;
    }
    else if(x==1){
         if(pq.empty()){
            cout<<"Empty"<<endl;
            continue;
        }
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl ;
    }
    else {
        if(!pq.empty()){
        pq.pop() ;
        }
        if(pq.empty()){
            cout<<"Empty"<<endl;
            continue;
        }
      cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl ;
    }
  }
    return 0;
}