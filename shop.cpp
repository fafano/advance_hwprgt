#include "shop.h"
// #include <memory>
// #include <iostream>

using namespace std;


double Shop::balance=0;

void Shop::withdraw( double amount){
    balance +=amount;
}


void cart_Shop::take(std::shared_ptr<Item> it , int among){
          
    if(it->get_amount() < among ){
         throw std::invalid_argument("sorry we have not that mouch!!");
    }else{
         
         items.first.push_back(std::make_shared<Item>(*it));
         items.second.push_back(among);
        //   it -= among; 
        it->set_amount(among);
        
            int free = among / 5;
            among -=free;
         price+=(among*(it->get_price()));
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
       cout<<"*********list**********";
       for(auto it : items.first){
         cout<<*it<<"   among : "<<items.second[i]<<endl;i++;

       }
       cout<<"final amount with discount "<<getprice()<<endl;
 }


