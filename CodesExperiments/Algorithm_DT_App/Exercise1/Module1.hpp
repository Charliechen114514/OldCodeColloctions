#ifndef _MODULE1_HPP_
#define _MODULE1_HPP_
#include<iostream>
#include "PublicAPI.hpp"


namespace ADSAE
{
    using std::cout;
    using std::endl;
    // 1.1
    // to correct the swap, we suppose to use reference instead of values
    // failed

    void failedIntSwap(int x, int y){
        
        int tmp = x;
        x = y;
        y = tmp;
        cout << "In functions failedIntSwap" << endl;
        cout << x << "  " << y << endl;;

    }

    void successfulSwap(int& x, int& y){

        int tmp = x;
        x = y;
        y = tmp;
        cout << "In functions failedIntSwap" << endl;
        cout << x << "  " << y << endl;;

    }

    void E1_1()
    {
        int x = 1, y = 2;
        failedIntSwap(x,y);
        cout << x << " " << y << endl;
        successfulSwap(x,y);
        cout << x << " " << y << endl;
        SLASH;
    }

    // E1.2
    template<typename T>
    unsigned count(T arr[], unsigned int size, T value)
    { 
        int val_count = 0;  
        // PUBLICAPI::printCurrentArray(arr, size);
        for(unsigned int i = 0; i < size; i++)
        {
            if(value == arr[i])
                val_count++;
        }    

        return val_count;
    }

    void E1_2()
    {
        int arr[10] = {1,1,2,2,3,3,4,4,1,1};
        int targetVal = 1;
        cout << "Count of " << targetVal << " in arr is :> " << count(arr,10,targetVal) << endl;
        SLASH;    
    }


    template<typename T>
    void fill(T arr[],unsigned int size, T value, unsigned int beg = 0, unsigned int end = 0){
        if(size == 0){
            std::cerr << "No need to fill!" << endl;
            return;
        }
        
        end = size - 1; 

        if(end < beg){
            unsigned int tmp = end;
            end = beg;
            beg = tmp;
        }  

        for(unsigned int i = beg; i < end; i++){
            arr[i] = value;
        }

    }

    void E1_3()
    {
        int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
        PUBLICAPI::printCurrentArray(arr1,10);
        fill(arr1,10,1);
        MASSAGE("now the array is:>");
        PUBLICAPI::printCurrentArray(arr1,10);
    }

    template<typename T>
    long long inner_product(T arrX[], T arrY[], std::size_t size)
    {
        long long sum = 0;

        for(size_t i = 0; i < size; i++)
        {
            sum += arrX[i] * arrY[i];
        }

        return sum;
    }

    template<typename T>
    long long recursiveInnerProduct(T arrX[], T arrY[], std::size_t size)
    {
        if(size == 1){
            return arrX[0] * arrY[0];
        }

        return arrX[size - 1] * arrY[size - 1] + 
            recursiveInnerProduct(arrX, arrY, size-1);
    }

    void E1_4()
    {
        int arr1[5] = {1,2,3,4,5};
        int arr2[5] = {1,2,3,4,5};

        std::cout << inner_product(arr1, arr2, 5) << std::endl;
        std::cout << "Recursively..." << std::endl;
        std::cout << recursiveInnerProduct(arr1, arr2, 5);

    }

    template<typename T>
    void ioat(T* arr, std::size_t size)
    {
        // Make Offsets
        for(std::size_t i ; i < size; i++)
        {
            arr[i] += i;
        }

    }

    void E1_5()
    {
        int arr[5] = {1, 2, 3, 4, 5};
        PUBLICAPI::printCurrentArray(arr,5);
        
        ioat(&arr[0],5);

        PUBLICAPI::printCurrentArray(arr,5);
    }

    template<typename T>
    bool is_Sort(T arr[], std::size_t size)
    {
        for(std::size_t i = 0; i < size - 1; i++)
        {
            if(arr[0] < arr[1])
            {
                if(i == 0){
                    continue;
                }


                if(arr[i - 1] > arr[i])
                    return false;
            }

            else
            {

                if(i == 0){
                    continue;
                }
                if(arr[i - 1] < arr[i])
                    return false;
            }
        }

        return true;
    }

    void E1_6()
    {
        int t1[5] = {1, 2, 3, 4, 5};
        int t2[5] = {1, 5, 2 ,4, 3};

        std::cout << is_Sort(t1, 5);
        std::cout << is_Sort(t2, 5);
    }

    template<typename T>
    // it's better to use Index = unsigned int;
    std::size_t misMatch(T arr1[], T arr2[], std::size_t size)
    {
        for(std::size_t i = 0; i < size - 1; i++)
        {
            if(arr1[i] != arr2[i]){
                return i;
            }
        }
    }

}


#endif


