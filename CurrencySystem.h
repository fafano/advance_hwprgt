#ifndef CURRENCYSYSTEM_H
#define CURRENCYSYSTEM_H

#include <stdexcept>
#include <iostream>
#include <cmath> // برای تابع abs

enum curr { usd, irr, eur, idn };
// هر بیس 1 دلاره و هر 2 بیس یه یورو عه و هر 3 بیس یه ریال هست !!

class Currency {
protected:
    curr currency;
    double base = 0;
    double among = 0;
    
public:
    virtual ~Currency() = default;
    double changetocu(curr cu, double sum);
    double getbace() const;
    Currency operator+(const Usd& other) const;
    Currency operator-(const Usd& other) const;
    bool operator==(const Usd& other) const;
    bool operator!=(const Usd& other) const;
    bool operator<(const Usd& other) const;
    bool operator>(const Usd& other) const;
};

class Usd : public Currency {
public:
    Usd(int am = 0);
   
};

class Eur : public Currency {
public:
    Eur(int am = 0);
   
};

class Irr : public Currency {
public:
    Irr(int am = 0);
 
};

#endif