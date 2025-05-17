#ifndef BANK_H
#define BANK_H

// #include <iostream>
// #include <ostream>
// #include <string>
// #include <strstream>
// #include <stdexcept>
#include "shop.h"
#include "CurrencySystem.h"


class Bank{

protected:
    std::string account_holder_name;
    long int account_number; 
    curr currency_type; 
    double balance;
    int limit;
    
public:
 
    Bank(std::string ahn,long int an,curr ct, double b ,int l);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();

};

//------------------------------------------------------------------------

class Prs_Act : public Bank, public cart_Shop{
public:
    void deposit(double amount);
    Prs_Act(std::string ahn,long int an,curr ct, double b);
    void calculate();

};

//---------------------------------------------------------------------

class Org_Act : public Bank, public cart_Shop{
public:
    void deposit(double amount);
    Org_Act(std::string ahn,long int an,curr ct, double b);
    void calculate();

};




#endif