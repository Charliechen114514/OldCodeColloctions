#include <iostream>
using namespace std;

template <class T>
void showTemplateName(T param){
    cout << typeid(param).name() << endl;
}

template <class T>
void showRefTemplateName(T& param){
    cout << typeid(param).name() << endl;
}


int main(){
    int x = 1;
    double f = 1.0;
    const char* s = "Hello";
    int& rx = x;
    double& rf = f;
    const char*& rs = s;
    // showTemplateNames
    showTemplateName(1);
    showTemplateName(1.0);
    showTemplateName("Hello");
    // about REference
    showTemplateName(rx);
    showTemplateName(rf);
    showTemplateName(rs);

    // showRefTemplatesNames

    showRefTemplateName(x);

    showRefTemplateName(f);

    showRefTemplateName(s);

    return 0;
}
