#include"cadd.h"
#include<iostream>
#include<functional>

int main()
{
    [out = std::ref(std::cout << "Got the result of " << add(1, 2))](){
        out.get() << ".\n";
    }();

    return 0;
}