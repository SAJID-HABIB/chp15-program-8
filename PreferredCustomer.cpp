#include<iostream>
#include "PreferredCustomer.h"

using namespace std;

PreferredCustomer::PreferredCustomer() {
    purchaseAmount = 0.0;
    discountLevel = 0.0;

}

void PreferredCustomer::setPurchaesesAmount(double amount) {
    if (amount < 0)
    {
        cout<<"Error : purchase amount cannot be negative. \n";
    }

    purchaseAmount = amount;
    updateDiscount();
    
}

void PreferredCustomer::updateDiscount() {
    if (purchaseAmount >= 2000)
    {
        discountLevel = 10.0;
    } else if (purchaseAmount >= 1500)
    {
        discountLevel = 7.0;
    } else if (purchaseAmount >= 1000)
    {
        discountLevel = 6.0;
    } else if (purchaseAmount >= 500)
    {
        discountLevel = 5.0;
    } else
    discountLevel = 0.0;   
    
}

double PreferredCustomer::getPurchasesAmount() const {
    return purchaseAmount;
}

double PreferredCustomer::getDiscountLevel() const{
    return discountLevel;
}