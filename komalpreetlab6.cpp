#include <iostream>

int main()

{
    int z=100;
    std::cout<<"enter the value of z";
    std::cin>>z;
    if(z>=86)
    std::cout<<"Grade A";
    else if(z>=72)
    std::cout<<"Grade B";
    else if(z>=60)
    std::cout<<"Grade C";
    else if(z>=50)
    std::cout<<"Grade D";
    else
    std::cout<<"Grade F";

}