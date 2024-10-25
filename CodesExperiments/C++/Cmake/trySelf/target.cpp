#include<add_minus.h>
#include<multipyDivision.h>
#include<iostream>
#include<targetlib.h>
#define MSG(X) std::cout << (X) << std::endl;

int main()
{
    ShowVersion;
    MSG(add(10, 20));
    MSG(minus(10, 20));
    MSG(multipy(10, 20));
    MSG(division(10, 2));
    MSG(division(10, 0));
}