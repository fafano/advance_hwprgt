#include "Bank.h"
#include <stdexcept>


Bank::Bank(){}
Bank::Bank(std::string ahn,long int an,cu ct, double b , int l): account_holder_name(ahn), account_number(an), currency_type(ct), balance(b){}

void Bank:: withdraw(double amount){
    if(amount > 0){
        balance += amount;
    }
    else{
        throw std::invalid_argument ("this amount is lower than zero");
    }
}
double Bank:: get_balance(){
    return balance;
};
//-----------------------------------------------------------------------------------------------------------------------

Prs_Act::Prs_Act(std::string ahn,long int an,cu ct, double b ,int l):
       Bank( ahn, an, ct, b , 1000 ){}

void Prs_Act:: deposit(double amount){
    if(amount > Bank::balance || limit < amount ){
        throw std::out_of_range ("limit per day or no enough balance!!");
    }
    limit -= amount;
    Bank::balance -= amount;
}

//--------------------------------------------------------------------------------------------------------------------------
Org_Act::Org_Act(std::string ahn,long int an,cu ct, double b ,int l):
       Bank( ahn, an, ct, b, 10000){}

void Org_Act:: deposit(double amount){
    if(amount > Bank::balance || limit >= 10000){
        throw std::out_of_range ("limit per day or no enough balance!!");
    }
    limit -= amount;
    Bank::balance -= amount;
}
