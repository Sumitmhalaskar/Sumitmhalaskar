#include <iostream>
using namespace std;

int main() 
{
    int tempreture;
    cout<<"entre a tempreture:"<<endl;
    cin>>tempreture;
    
    if(tempreture<=0){
      cout<<"wether is very cold please use a sweter, jacket,and enjoy this wethar"<<endl;
    }
    else if(tempreture>0 && tempreture<=10){
      cout<<"the wethar is cold please use the swetar,and stay home and stay safe: "<<endl;
    }
    else if(tempreture>15&&tempreture<=25){
      cout<<"the whethar is a normally cold then they use a t_shirt"<<endl;
      
    }
    else if(tempreture>25){
      cout<<"the whethar is hot then they use a normallyoutfit like that a shorts,light weight jeans,pant etc.:"<<endl;
    }
    return 0;
}