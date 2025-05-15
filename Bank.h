#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <ostream>
#include <string>
#include <strstream>
#include <stdexcept>
enum class cu{irr , usd , eur , idn};







class Bank{

private:
    std::string account_holder_name;
    long int account_number; 
    cu currency_type; 
    double balance;
    int limit;
public:
    Bank();
    Bank(std::string account_holder_name,long int account_number,cu currency_type, double balance ,int limit);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance();

};

class Prs_Act : public Bank{
    public:
       Prs_Act(std::string account_holder_name,long int account_number,cu currency_type, double balance):
       Bank( account_holder_name,account_number,currency_type,  balance , 1000){

       }

};




#endif