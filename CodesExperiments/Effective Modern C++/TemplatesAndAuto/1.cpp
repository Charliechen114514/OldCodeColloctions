#include <iostream>

#define SHOWTYPE(X) std::cout << #X << " is " << typeid(X).name() << std::endl;
void show1()
{
    auto x1 = 27;
    SHOWTYPE(x1);
    auto x2(27);

    auto x3 = {27};
    SHOWTYPE(x3);
    auto x4{27};
    SHOWTYPE(x4);
}

template<typename T>
void f(T param)
{
    std::cout << " In F" << std::endl;
    std::cout << "T is " << typeid(T).name() << std::endl;
    std::cout << "param is " << typeid(param).name() << std::endl;
}

template<typename T>
void g(std::initializer_list<T> listParam){
    std::cout << " In G" << std::endl;
    std::cout << "T is " << typeid(T).name() << std::endl;
    std::cout << "param is " << typeid(listParam).name() << std::endl;
}


int main()
{
    auto x = {1,2,3};

    // f({1,2,3}); // can not pass compiling
    f(x);
    g({1,2,3});

    return 0;
}