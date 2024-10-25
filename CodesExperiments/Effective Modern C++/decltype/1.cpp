#include <iostream>
using namespace std;

#define showTyoe(t) cout << "type: " << typeid(t).name() << endl;
int main()
{
    const int i = 0;
    decltype(i) k = 10;
    showTyoe(k);

}
