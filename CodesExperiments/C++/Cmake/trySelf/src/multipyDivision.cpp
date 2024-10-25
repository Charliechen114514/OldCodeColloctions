#include <cstdio>
using ll = long long;

ll multipy(ll a, ll b){
    return a * b;
}

ll division(ll a, ll b){
    if(b == 0)
    {
        std::printf("division can not be zero!\n");
        return -1;    
    }
    return a / b;
}