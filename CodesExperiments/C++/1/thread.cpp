#include <thread>
#include <iostream>

#define DETACH 1
#define MakeError 0
void work(int times)
{
    for(int i = 0; i < times; i++)
        std::cout << "Hello, world " << "for times " << i << "\n";
}

void emptyThreadID()
{
    std::cout << "\nempty thread ID: ";
    std::cout << std::thread().get_id() << std::endl;
}

int main()
{

    std::thread aThread;
    aThread = std::thread(work, 100);
    std::cout << "The thread id is ";
    std::cout << aThread.get_id() << std::endl;
    emptyThreadID();
#if DETACH
    aThread.detach();
#if MakeError
    aThread.join();  
#endif
#endif
    if(aThread.joinable())
    {
        aThread.join();
        std::cout << "aThread is joinable and it has been joined!\n";
    }
    else{
        std::cout << "aThread is not joinable";
    }
    return 0;
}