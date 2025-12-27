#include<iostream>
#include "PreferredCustomer.h"

using namespace std;

int main () {
    PreferredCustomer customer;

    customer.setFirstName("sajid");
    customer.setLastName("habib");
    customer.setCustomerNumber(101);
    customer.setMailingList(true);
    customer.setPurchaesesAmount(1800);

    cout<<"Customer name :"
    <<customer.getFirstName() <<""
    <<customer.getLastName() <<endl;

    cout<<"Customer number :"
    <<customer.getCustomerNumber()<<endl;

    cout<<"Milaing Lidt :"
    <<(customer.getMailingList() ? "yes" : "NO")<<endl;

    cout<<"Toal purchases : $"
    <<customer.getPurchasesAmount()<<endl;

    cout<<"Discount Level :"
    <<customer.getDiscountLevel()<<"%"<<endl;

    return 0;
}