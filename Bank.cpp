#include "Bank.h"
#include <stdexcept>


Bank::Bank(){}
Bank::Bank(std::string ahn,long int an,cu ct, double b , int limit): account_holder_name(ahn), account_number(an), currency_type(ct), balance(b){}
void Bank:: deposit(double amount){
    if(amount > balance || limit >= 1000){
        throw std::out_of_range ("limit per day or no enough balance!!");
    }
}
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
