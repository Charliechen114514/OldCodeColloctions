#include<iostream>

void throwExceptionsPurposely(int a, int b, int c)
{
    if(a < 0 && b < 0 && c < 0)
    {
        throw 1;
    }
    else if( a == 0 && b == 0 && c == 0)
    {
        throw 2;
    }
}


int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    try{
        throwExceptionsPurposely(a, b, c);
    }
    catch(int exceptions){

        std::cout << exceptions;


    }

}