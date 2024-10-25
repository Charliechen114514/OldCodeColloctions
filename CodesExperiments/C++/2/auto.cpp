#include <iostream>

template<typename Tx, typename Ty>
void MultipyAnyWay(Tx&& x, Ty&& y)
{
    auto res = x*y;
    std::cout << res << std::endl;
}

template<typename Tx, typename Ty>
auto Multi(Tx&& x, Ty&& y) -> decltype(x*y)
{
    return x*y;
}

int main()
{
    auto i = 10;
    auto* pI = &i;

    MultipyAnyWay(10,20.0);

    auto res = Multi(20, 30.00);
    std::cout << res << std::endl;
    
}