#ifndef CURRENCYSYSTEM_H
#define CURRENCYSYSTEM_H
#include <stdexcept>
#include <iostream>


enum curr { usd, irr, eur, idn };

class Currency {
protected:
    curr currency;
    double base = 0;
    double among = 0;
public:
    virtual ~Currency() = default;
    double changetocu(curr cu, double sum);
    double getbace() const ;
    Currency operator+(const Currency& other) const;
    Currency operator-(const Currency& other) const;
    bool operator==(const Currency& other) const;
    bool operator!=(const Currency& other) const;
    bool operator<(const Currency& other) const;
    bool operator>(const Currency& other) const;
};


//-----------------------------------------------------------------------------------Usd


class Usd : public Currency {
public:
    Usd(int am = 0);
};


//-----------------------------------------------------------------------------------------Eur


class Eur : public Currency {
public:
    Eur(int am = 0);
};

//--------------------------------------------------------------------------------------------Irr


class Irr : public Currency {
public:
    Irr(int am = 0);
};

#endif