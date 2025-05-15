#ifndef SHOP_H 
#define SHOP_H

#include "item.h"
#include <vector>
#include <stdexcept>


class Shop{
    private:
      static float balance;
    public:
       static void withdraw( float amount);

};

class cart_Shop : public Shop{
     private:
        std::vector<Item*> items;
        float price=0;
     public:
       void take(Item* it , int among);
       float getprice();
       virtual ~cart_Shop();

     
};




#endif