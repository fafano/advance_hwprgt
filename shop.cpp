#include "shop.h"
// #include <memory>
// #include <iostream>

using namespace std;


double Shop::balance=0;

void Shop::withdraw( double amount){
    balance +=amount;
}
cart_Shop::cart_Shop(std::string ahn) : name(ahn){}

void cart_Shop:: return_item(){
        for(int i = 0 ;i<items.first.size(); i++ )
            items.first[i]+= items.second[i];
} 


void cart_Shop::take(Item* it , int amount){
          
    if(it->get_amount() < amount ){
        cout<<"theres no enough amount of: "<< it->get_name();
         throw std::invalid_argument(" !!");
        }
    else if(amount < 0){
        throw std::out_of_range("You've entered a number lower than zero!!");

    }
    else{
         
        items.first.push_back(it);
        items.second.push_back(amount);
        *it -= amount; 
        // it->set_amount(among);
        
        int free = amount / 5;
        amount -=free;
        price+=(amount*(it->get_price()));
     }

}

double cart_Shop::getprice(){
    return price;
}
void cart_Shop :: setprice(double amount){
    price = amount;
}
cart_Shop::~cart_Shop() {
      
   
    items.first.clear();
}

 void cart_Shop::print(){
    if(items.first.empty()){
        return;
    }
       cout<<"*********list**********";
       for(auto it : items.first){
        // (*it) -=items.second[i];
    //   it->set_amount(it->get_amount() - items.second[i]);
        cout<<*it<<"   amount you buy : "<<items.second[i];
        i++;

       }
       cout<<endl<<"Dear " << this->name <<", thank you for your choice. final amount with discount "<<getprice()<<endl;
 }


