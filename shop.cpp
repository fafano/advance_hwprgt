#include "shop.h"
#include <stdexcept>
// #include <memory>
// #include <iostream>

using namespace std;


double Shop::balance=0;

void Shop::withdraw( double amount){
    balance +=amount;
}
void cart_Shop:: amount_setter(Item & item, int amount){
    auto  it = std::make_shared<Item>(item);
    try{
        if(take( it, amount)){
        item.set_amount(item.get_amount()-amount);
        }
    }
    catch(invalid_argument &e){
        cout << e.what()<< endl;
    }
    

}

bool cart_Shop::take(std::shared_ptr<Item> it , int amount){
          
    if(it->get_amount() < amount ){
        cout<<"theres no enough amount of: "<< it->get_name();
         throw std::invalid_argument(" !!");
         return false;
    }else{
         
         items.first.push_back(std::make_shared<Item>(*it));
         items.second.push_back(amount);
         (*it)-= amount;
        // it->set_amount(among);
        
            int free = amount / 5;
            amount -=free;
         price+=(amount*(it->get_price()));
         return true;
     }
   

}

double cart_Shop::getprice(){
    return price;
}
void cart_Shop :: setprice(double amount){
    price = amount;
}
// cart_Shop::~cart_Shop() {
      
//     for (Item* item : items.first) {
//         delete item;
//     }
//     items.first.clear();
// }

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


cart_Shop::cart_Shop(std::string name){
    this->name = name;
}