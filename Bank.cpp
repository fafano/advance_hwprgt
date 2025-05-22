#include "Bank.h"


Bank::Bank(std::string ahn,long int an,curr ct, double b , int l): account_holder_name(ahn), account_number(an), currency_type(ct), balance(b), limit(l){}

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

std::string  Bank:: getcu(){
    std::string s;
    if(currency_type==curr::usd){
        s = " $";
        return s;
    }else if(currency_type==curr::irr){
        s = " IRR";
        return s;
    }else{
        s = " €";
        return s;
    }
}


//---------------------------------------------------------------------------------------------------------------------Prs_Act


Prs_Act::Prs_Act(std::string ahn,long int an,curr ct, double b ):
       Bank( ahn, an, ct, b , 1000 ), cart_Shop(ahn){}

void Prs_Act:: deposit(double amount){

    if(Bank::limit < amount ){
        throw std::out_of_range ("\nYour purchase and money transfer limit has been reached today.\n");
    }
    else if(amount > Bank::balance){
        throw std::invalid_argument ("\nyour account ballance is not enough.\n");
    }
    Bank::limit -= amount;
    Bank::balance -= amount;
}
void Prs_Act:: calculate(){   
    if(currency_type != curr::usd){ 
        Usd money(getprice());
        setprice( money.changetocu(currency_type, money.getbace()));
    }
    try{
        deposit(getprice()); 
        Shop::withdraw(getprice());
        cart_Shop::print(getcu());
    }
    catch(std::out_of_range &e){
        return_item();
        std::cout << e.what()<< std::endl;  
    }
    catch(std::invalid_argument &a){
        return_item();
        std::cout << a.what()<< std::endl;
    }
      
}


//--------------------------------------------------------------------------------------------------------------------Org_Act


Org_Act::Org_Act(std::string ahn,long int an,curr ct, double b ):
    Bank( ahn, an, ct, b, 10000), cart_Shop(ahn){}

void Org_Act:: deposit(double amount){
    
    if(Bank::limit < amount ){
        throw std::out_of_range ("\nYour purchase and money transfer limit has been reached today.\n" );
    }
    if(amount > Bank::balance){
        throw std::invalid_argument ("\nyour account ballance is not enough.\n" );
    }
    Bank::limit -= amount;
    Bank::balance -= amount;
}

void Org_Act:: calculate(){

    if(currency_type != curr::usd){ 
        Usd money(getprice());
        setprice( money.changetocu(currency_type, money.getbace()));
        Usd money2(limit);
        limit =  money.changetocu(currency_type,money2.getbace());
       
    }
    try{
        deposit(getprice());
        Shop::withdraw(getprice());
        cart_Shop::print(getcu());
    }
    catch(std::out_of_range &e){
        return_item();
        std::cout << e.what()<< std::endl;  
    }
    catch(std::invalid_argument &a){
        return_item();
        std::cout << a.what()<< std::endl;
    }
    
}
