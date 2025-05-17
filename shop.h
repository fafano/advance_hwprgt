#ifndef SHOP_H 
#define SHOP_H

#include "item.h"
#include <vector>
#include <stdexcept>
#include <utility>


class Shop{
    private:
      static double balance;
    public:
       static void withdraw( double amount);

};

class cart_Shop : public Shop{
     private:
       std::pair<std::vector<Item*> , std::vector<int>> items;
        double price=0;
        int i=0;
     public:
       void take(Item* it , int among);
       double getprice();
       void setprice(double amount);
       void print();
       virtual ~cart_Shop();

     
};




#endif