#include <iostream>

#include "addition.h"
#include "Division.h"
#include "Print.h"  


int main(){
    float num1;
    float num2, add, div;
    std::cout<<"Please enter the first number: ";
    std::cin>> num1;
    std::cout<<"Please enter the second number:\t";
    std::cin>> num2;
    add = addition (num1,num2);
    div = Division(num1,num2);
    Print("Addition", add);
    Print("Divide", div);

    return 0;
}