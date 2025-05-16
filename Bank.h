#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <ostream>
#include <string>
#include <strstream>
#include <stdexcept>
#include "shop.h"
enum class cu{irr , usd , eur , idn};

class Bank{

protected:
    std::string account_holder_name;
    long int account_number; 
    cu currency_type; 
    double balance;
    int limit;
public:
    Bank();
    Bank(std::string ahn,long int an,cu ct, double b ,int l);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();

};

class Prs_Act : public Bank, public cart_Shop{
public:
    void deposit(double amount);
    Prs_Act(std::string ahn,long int an,cu ct, double b ,int l);
    bool calculate(){
        try{
            deposit(getprice());
            Bank::withdraw(getprice());
        }
        catch(std::invalid_argument &e){
            std::cout << e.what()<< std::endl;
        }
        
    }

};
class Org_Act : public Bank, public cart_Shop{
public:
    void deposit(double amount);
    Org_Act(std::string ahn,long int an,cu ct, double b ,int l);

};




#endif