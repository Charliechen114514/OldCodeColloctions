#include "ProductB_Factory.h"

ProductB * ProductB_Factory::createProduct()
{
    return new ProductB;
}