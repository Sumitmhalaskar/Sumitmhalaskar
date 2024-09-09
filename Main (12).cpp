#include <iostream>
using namespace std;

int main() 
{
    int chips = 3;
    int chokalate = 2;
    int sodacan = 4;
    int totalitem = chips+chokalate+sodacan;
    
    int costperchips=20;
    int costperchokalate=50;
    int costpersodacan=30;
    
      cout<<"total number of item"<<totalitem<<endl;
     cout<<"total price of item"<<(chips*costperchips)+(chokalate*costperchokalate)+(sodacan*costpersodacan)<<endl;
    return 0;
}