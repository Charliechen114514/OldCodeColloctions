#include <iostream>

namespace ADTAE
{

    template<typename T>
    void make2dArray(T**& x, std::size_t rows, int colsArray[])
    {
        x = new T*[rows];
        for(std::size_t i = 0; i < rows; i++)
        {
            x[i] = new T[colsArray[i]];
        }
    }

    template<typename T>
    void changeLength1D(T*& arr1, std::size_t size, std::size_t newSize)
    {
        std::size_t dataMaxSize = std::min(size, newSize);

        T* newArr = new T[newSize];

        for(std::size_t i = 0; i < newSize; i++)
        {
            newArr[i] = arr1[i];
        }

        delete[] arr1;

        arr1 = newArr;
    }

    template<typename T>
    void changeLength2D(T**& arr, std::size_t rows, int colsArr[], 
                        std::size_t newRows, int newColsArr[])
    {
        T** newArr = new T*[newRows];

        for(int i = 0; i < newRows; i++)
        {
            newArr[i] = new T[newColsArr[i]];
        }

        for(int i = 0; i < newRows; i++)
        {
            for(std::size_t j = 0; j < newColsArr[i] ; j++)
            {
                newArr[i][j] = arr[i][j];
            }
        }

        for(int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }

        delete[] arr;

        arr = newArr;

    }

    template<typename T>
    void delete2dArray(T** &Array, int rows)
    {
        for(int i = 0; i < rows; i++)
        {
            delete[] Array[i];
        }

        delete[] Array;
    }
}
