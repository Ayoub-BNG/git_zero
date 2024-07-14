#include <iostream>

//comment in one line 
/* comment in double lines */
/*syntax of a variable 
-- [data_type] [variable_name] = [value]
*/
int main()
{
    std::cout<<"enter the main price : ";
    int price=0;
    std::cin>>price;
    std::cout<< "\nthe main price is : "<< price;
    std::cout<< "\nthe main price plus 50 is : "<< price +50;
    std::cout<<"\nafter discount 20 peurcent on the main price :"<<price - (price*0.2);
    return 0;
}