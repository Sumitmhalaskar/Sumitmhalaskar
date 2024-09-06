#include <iostream>
using namespace std;

int main() 
{
    string book_tital = "wings of fire";
    
    string book_author = "apj abdul kalam";
    
    int year_of_a_publication = 1999;
    
    float price_of_a_book = 789.45;
    
    bool book_is_available = true;
    
    
    cout<<"tital of a book:"<<book_tital<<endl;
    cout<<"author of a book:"<<book_author<<endl;
    cout<<"year of publication:"<<year_of_a_publication<<endl;
    cout<<"price of a book:"<<price_of_a_book<<endl;
     cout<<"book is available:"<<(book_is_available ? "yes":"no") <<endl;
    return 0;
}