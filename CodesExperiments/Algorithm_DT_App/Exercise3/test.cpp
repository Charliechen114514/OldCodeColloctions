#include"2dArray.hpp"

int main()
{
    int** Array = nullptr;
    int cols[5] = {1,2,3,4,5};
    ADTAE::make2dArray(Array, 5, cols);
    ADTAE::changeLength2D(Array, 5, cols, 5, cols);
    ADTAE::delete2dArray(Array, 5);

}

