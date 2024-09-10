#include <iostream>
using namespace std;

int main() 
{
  int num;
  cout<<"entre the number"<<endl;
  cin>>num;
  
  if(num<0){
    cout<<"please enter the positive integers"<<endl;
    
    
    return 0;
  }
  
  int sum=0;
  int evencount=0;
  int oddcount=0;
  int value;
  
  for(int i=0;i<+num;i++){
    cout<<"number"<<(1+i)<<":";
    cin>>value;
    
    sum+=value;
    if(value %2 == 0){
      ++evencount;
    }
    else{
      ++oddcount;
    }
    
  }
  cout<<sum<<endl;
  cout<<evencount<<endl;
  cout<<oddcount<<endl;
    return 0;
}






















