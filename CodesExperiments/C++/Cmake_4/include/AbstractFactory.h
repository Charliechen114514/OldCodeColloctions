#pragma once
class AbsrtactProduct;
class AbstractFactory
{
public:
    virtual AbsrtactProduct* createProduct() = 0;
};
