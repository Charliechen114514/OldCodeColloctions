#pragma once
#include "AbstractFactory.h"
#include "ProductA.h"

class ProductA_Factory : public AbstractFactory
{
public:
    ProductA* createProduct() override;
};