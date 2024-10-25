#include "recersiveMain.h"

int main()
{
    MSG("E31");
    for(unsigned int i = 0; i < 20; i++)
    {
        std::cout << getFeb(i)<<std::endl;
    }

    MSG("E32 - 1");
    MSG(refF(5));
    MSG(refF(7));

    MSG("E33");
    MSG(AckermannF(1, 2));
    MSG(AckermannF(2, 1));
    MSG(AckermannF(2, 2));
}