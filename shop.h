#ifndef SHOP_H 
#define SHOP_H

#include "item.h"
#include <vector>
#include <stdexcept>


class Shop{
    private:
      static float balance;
    public:
       static void withdraw( float amount){
        balance +=amount;
       }

};

class cart_Shop : public Shop{
     private:
        std::vector<Item*> items;
        float price=0;
     public:
       void take(Item* it , int among){
          
          if(it->get_amount() < among ){
              throw std::invalid_argument("sorry we have not that mouch!!");
          }else{
              items.push_back(it);  
              price+=(it->get_price());
          }

       }
       float getprice(){
          return price;
       }

     
};




#endif