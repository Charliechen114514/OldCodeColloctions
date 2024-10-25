#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    unsigned int sth = -1; // get the UINT_MAX, though UB
    std::cout << __FILE__ << " " <<  sth << std::endl;
    std::cout << __FILE__ << " " <<0 << std::endl;
    std::cout << __FILE__ << std::endl; 
    const double inputValue = std::stod(argv[1]);
    std::cout << inputValue << std::endl;
}