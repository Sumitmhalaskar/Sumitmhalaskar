#include <iostream>
#include <string>
using namespace std;

class student {
  public:
  string name;
  int rollnumber;
  int age;
  
  void displayinfo(){
    cout<<"name"<<"="<<name<<endl;
    cout<<"student roll number"<<"="<<rollnumber<<endl;
    cout<<"studenr age"<<"="<<age<<endl;
  }
};

int main() 
{
  
  student s1;
  student s2;
  s1.name="sumit";
  s1.rollnumber=13;
  s1.age=34;
  
  s2.name ="rohit";
  s2.rollnumber=45;
  s2.age=78;
  
  cout<<"s1 student inforamation"<<endl;
  s1.displayinfo();
  
  cout<<"s2 student info"<<endl;
  s2.displayinfo();
  
  
     char op;
    float num1,num2;
    cin>>num1>>num2;
    
  
    return 0;
}