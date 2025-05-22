#ifndef SHOP_H 
#define SHOP_H

#include "item.h"



class Shop{
    private:
      static double balance;
    public:
      static void withdraw( double amount);
      static double get_balance(){
        return balance;
      }

};


//-----------------------------------------------------------------------------------------------------cart_shop


class cart_Shop : public Shop{
private:
  std::pair <std::vector<Item*>, std::vector<int>> items;
  double price=0;
  int i=0;
  std::string name;
public:
  cart_Shop( std::string ahn );
  void take( Item* it, int among );
  double getprice();
  void setprice( double amount );
  void print(std::string s);
  virtual ~cart_Shop();
  void return_item();
};




#endif