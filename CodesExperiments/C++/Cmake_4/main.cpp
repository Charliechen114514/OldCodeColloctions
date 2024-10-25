#include "FactoriesAndProducts.h"

int main()
{
    AbsrtactProduct* product = nullptr;
    AbstractFactory* factory = nullptr;

    // Case A
    factory = new ProductA_Factory;
    product = factory->createProduct();
    product->displayName();
    product->process();

    delete factory;
    delete product;
    
    // Case B
    factory = new ProductB_Factory;
    product = factory->createProduct();
    product->displayName();
    product->process();

    delete factory;
    delete product;
}