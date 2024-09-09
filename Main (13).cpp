#include <iostream>
using namespace std;
class student{
  public:
  string name;
  int rollno;
  int mark[3];
  
  public:
  void saitdetail(string n,int r,int m1,int m2,int m3){
    name = n;
    rollno = r;
    mark[0]=m1;
    mark[1]=m2;
    mark[2]=m3;
  }
  int calculatetotalmark(){
    return mark[0]+mark[1]+mark[2];
  }
  
  void desplaydetail(){
    cout<<"name"<<name<<endl;
    cout<<"roll number"<<rollno<<endl;
    cout<<"subject 1 mark"<<mark[0]<<endl;
    cout<<"subject 2 mark"<<mark[1]<<endl;
    cout<<"subject 3 mark"<<mark[2]<<endl;
    cout<<"total mark is"<<calculatetotalmark()<<endl;
  }
    
  
  
};

int main() 
{
  student s1;
  s1.saitdetail("rohit",234,90,23,90);
  s1.desplaydetail();
    
    return 0;
}