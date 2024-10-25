#pragma once
#include "AbsrtactProduct.h"

class ProductB : public AbsrtactProduct
{
public:
    virtual void displayName() override;
    virtual void process() override;
};
