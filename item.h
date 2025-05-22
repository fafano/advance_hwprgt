#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <ostream>
#include <string>
// #include <strstream>



class Item{
    friend std::ostream& operator<<(std::ostream& os, const Item& item);
private:

    public:
    Item();
    virtual ~Item();

    Item(std::string, double p, std::string u, int a);
    virtual double get_price() const;
    virtual int get_amount() const;
    virtual std::string get_unit() const;
    void set_amount(int number);
    Item &operator=(const Item & other);
    void operator-=(int a);
    void operator+=(int a);
   std::string get_name();
protected:
    std::string name;
    double price;
    std::string unit;
    int amount;
    


};


//--------------------------------------------------------------class Fruit


class Fruit : public Item{

public:
    Fruit(std::string n, double p, int a);
    
    double get_price() const override;
    int get_amount() const override;
    void operator-=(int a);

    ~Fruit(){};
};



//---------------------------------------------------------------class seasoning


class Seasoning : public Item{
public:

    Seasoning(std::string n, double p, int a);
    double get_price() const override;
    int get_amount() const override;
    void operator-=(int a);
};


//---------------------------------------------------------------class Snack


class Snack: public Item{

public:
    Snack(std::string n, double p, int a);
    void operator-=(int a);
};
















#endif