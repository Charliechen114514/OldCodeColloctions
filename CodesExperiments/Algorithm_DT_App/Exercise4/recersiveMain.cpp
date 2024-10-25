#include<iostream>
#include"recersiveMain.h"
#include <string>
#include <bitset>

// 3
// 3.1 caculate the recursive Value
using ll = long long ;

ll getFeb(unsigned int n)
{
    if(n == 1 || n == 0)
        return 1;
    
    else 
        return n * getFeb(n - 1);
}

ll refF(int n)
{
    if(n % 2 == 0)
    {
        return n/2;
    }
    else 
        return refF(3*n + 1);
}

ll refFUnRecursive(int x){

DO:
    if(x % 2 != 0)
    {
        x = x* 3 + 1;
        goto DO;
    }

    return x/2;
}

ll TwoPower(int ntimes){
    ll res = 1;
    for(int i = 0; i < ntimes; i++){
        res *= 2;
    }

    return res;
}


ll AckermannF(int n1, int n2)
{
    if(n1 == 1 && n2 >= 1){
        return TwoPower(n2);
    }
    else if(n1 >= 2 && n2 == 1){
        return AckermannF(n1 - 1, 2);
    }
    else{
        return AckermannF(n1 - 1, AckermannF(n1, n2 - 1));
    }
}

ll myGCD(int x, int y)
{
    if(y == 0)
        return x;
    else
        return myGCD(y, x % y);
}

