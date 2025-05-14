#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>


class Item{
private:
    double price;
    std::string unit;
    int amount;
public: 
    virtual double cal_price(int number);
    Item(double p, std::string u, int a);
    ~Item();
};


//--------------------------------------------------------------class Fruit


class Fruit : private Item{
public:
    Fruit(double p, int a);
    ~Fruit(){};
};


//---------------------------------------------------------------class seasoning


class Seasoning : private Item{
public:
    Seasoning(double p, int a);
};


//---------------------------------------------------------------class Snack


class Snack: private Item{
public:
    Snack(double p, int a);
};


















#endif