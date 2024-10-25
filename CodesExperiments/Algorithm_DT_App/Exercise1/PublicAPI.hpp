#ifndef _PUBLICAPI_HPP_
#define _PUBLICAPI_HPP_

#include <iostream>
#include <string>
#define SLASH std::fputc('\n',stdout)
#define MASSAGE(MSG) std::cout << std::string(MSG) << std::endl;
namespace PUBLICAPI
{

    using std::cout;
    using std::endl;

    // printArr
    template<typename T>
    void printCurrentArray(T arr[], unsigned int size, const char* arrayName = "arr")
    {
        cout << "current array Name:> " << arrayName << endl;
        for(unsigned int i = 0; i < size; i++)
            cout << arr[i] << " ";
        SLASH;
    }


}


#endif