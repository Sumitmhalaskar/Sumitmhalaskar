#include <iostream>
using namespace std;

int main() 
{
   int day;
   cout<<"Enter a day 1 to 7 the choose the breakfast of you week:"<<endl;
   cin>>day;
   
    switch (day){
      case 1:
      cout<<"monaday brekfast is poha"<<endl;
      break;
      case 2: 
      cout<<" thu.. brekfast is upama"<<endl;
      break;
      case 3:
      cout<<"the wen brekfast is dosa"<<endl;
      break;
      case 4:
      cout<<"the thus breakfast is edali"<<endl;
      break;
      case 5:
      cout<<"the fri breakfasr is kachori"<<endl;
      break;
      case 6:
      cout<<"the sat brekfast is samosa:"<<endl;
      break;
      case 7:
      cout<<"the sun brekfast is bred pakoda:"<<endl;
      break;
      default:
      cout<<"the brekfast id chicken:"<<endl;
      break;
      
}
}