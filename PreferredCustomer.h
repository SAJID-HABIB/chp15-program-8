#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

#include "CustomerData.h"

class PreferredCustomer : public CustomerData
{
private:
    double purchaseAmount;
    double discountLevel;

    void updateDiscount();
public:
    PreferredCustomer();

    void setPurchaesesAmount(double);
    
    double getPurchasesAmount() const;
    double getDiscountLevel() const;
};
#endif

