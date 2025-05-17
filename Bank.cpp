#include "Bank.h"
// #include "shop.h"

// #include <stdexcept>



Bank::Bank(std::string ahn,long int an,curr ct, double b , int l): account_holder_name(ahn), account_number(an), currency_type(ct), balance(b){}

void Bank:: withdraw(double amount){
    if(amount > 0){
        balance += amount;
    }
    else{
        throw std::invalid_argument ("this amount is lower than zero");
    }
}
double Bank:: get_balance(){
    return Bank::balance;
};
//-----------------------------------------------------------------------------------------------------------------------

Prs_Act::Prs_Act(std::string ahn,long int an,curr ct, double b ):
       Bank( ahn, an, ct, b , 1000 ){}

void Prs_Act:: deposit(double amount){
    if(amount > Bank::balance || limit < amount ){
        throw std::out_of_range ("limit per day or no enough balance!!");
    }
    limit -= amount;
    // std::cout<<Bank::balance <<amount;
    Bank::balance -= amount;
    // std::cout<<Bank::balance ;
}
void Prs_Act:: calculate(){
    // std::cout<<"yy";
        
            if(currency_type != curr::usd){ 
                Usd money(getprice());
                setprice( money.changetocu(currency_type, getprice()));
            }try
        {deposit(getprice());}catch(std::invalid_argument &e){
            std::cout << e.what()<< std::endl;
        }
            Shop::withdraw(getprice());
           
            // cart_Shop::print();
        
    
            
        
        
    }

//--------------------------------------------------------------------------------------------------------------------------
Org_Act::Org_Act(std::string ahn,long int an,curr ct, double b ):
       Bank( ahn, an, ct, b, 10000){}

void Org_Act:: deposit(double amount){
    if(amount > Bank::balance || limit >= 10000){
        throw std::out_of_range ("limit per day or no enough balance!!");
    }
    limit -= amount;
    Bank::balance -= amount;
}
void Org_Act:: calculate(){
        try{
            if(currency_type != curr::usd){
                Usd money(getprice());
                setprice( money.changetocu(currency_type, getprice()));
            }
            deposit(cart_Shop::getprice());
            Bank::withdraw(getprice());
            cart_Shop::print();
        }
        catch(std::invalid_argument &e){
            std::cout << e.what()<< std::endl;
        }
        
    }
