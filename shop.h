#ifndef SHOP_H 
#define SHOP_H

#include "item.h"
#include <vector>
#include <stdexcept>


class Shop{
    private:
      static double balance;
    public:
       static void withdraw( double amount);

};

class cart_Shop : public Shop{
     private:
        std::vector<Item*> items;
        double price=0;
     public:
       void take(Item* it , int among);
       double getprice();
       void print();
       virtual ~cart_Shop();

     
};




#endif