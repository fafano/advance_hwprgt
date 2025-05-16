#include "shop.h"
#include <iostream>

using namespace std;


double Shop::balance=0;

void Shop::withdraw( double amount){
    balance +=amount;
}

void cart_Shop::take(Item* it , int among){
          
    if(it->get_amount() < among ){
         throw std::invalid_argument("sorry we have not that mouch!!");
    }else{
         items.push_back(it);  
         price+=(it->get_price());
     }

}
double cart_Shop::getprice(){
    return price;
}

cart_Shop::~cart_Shop() {
      
    for (Item* item : items) {
        delete item;
    }
    items.clear();
}

 void cart_Shop::print(){
       cout<<"*********list**********";
       for(auto it : items){
         cout<<*it;
       }
       cout<<"final amount with discount "<<getprice()<<endl;
 }


