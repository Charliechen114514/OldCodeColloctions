#pragma once
#include "AbstractFactory.h"
#include "ProductB.h"

class ProductB_Factory : public AbstractFactory
{
public:
    ProductB* createProduct() override;
};