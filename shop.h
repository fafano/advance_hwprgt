#ifndef SHOP_H 
#define SHOP_H

#include "item.h"
#include <vector>
#include <stdexcept>
#include <utility>
#include <memory>


class Shop{
    private:
      static double balance;
    public:
       static void withdraw( double amount);

};

class cart_Shop : public Shop{

     private:
       std::pair<std::vector<std::shared_ptr<Item>> , std::vector<int>> items;
        double price=0;
        int i=0;
        std::string name;
     public:
       bool take(std::shared_ptr<Item>it , int amount);
       double getprice();
       void setprice(double amount);
       void print();
       void amount_setter(Item & item, int amount);
;      //  virtual ~cart_Shop();
      cart_Shop(std::string name);
     
      
};




#endif