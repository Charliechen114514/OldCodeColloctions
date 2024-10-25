#include "ProductA_Factory.h"
ProductA* ProductA_Factory::createProduct()
{
    return new ProductA;
}