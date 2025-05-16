#ifndef CURRENCYSYSTEM_H
#define CURRENCYSYSTEM_H

#include <stdexcept>
#include <iostream>
#include <cmath> // برای تابع abs

enum curr { usd, irr, eur, idn };

class Currency {
protected:
    curr currency;
    double base = 0;
    double among = 0;
    
public:
    Currency() = default;
    virtual ~Currency() = default;
    
    double changetocu(curr cu, double sum);
    void getcu();
    double getbace() const { return base; }
    curr getCurrencyType() const { return currency; }
};

class Usd : public Currency {
public:
    Usd(int am = 0);
    Usd operator+(const Usd& other) const;
    Usd operator-(const Usd& other) const;
    bool operator==(const Usd& other) const;
    bool operator!=(const Usd& other) const;
    bool operator<(const Usd& other) const;
    bool operator>(const Usd& other) const;
};

class Eur : public Currency {
public:
    Eur(int am = 0);
    Eur operator+(const Eur& other) const;
    Eur operator-(const Eur& other) const;
    bool operator==(const Eur& other) const;
    bool operator!=(const Eur& other) const;
    bool operator<(const Eur& other) const;
    bool operator>(const Eur& other) const;
};

class Irr : public Currency {
public:
    Irr(int am = 0);
    Irr operator+(const Irr& other) const;
    Irr operator-(const Irr& other) const;
    bool operator==(const Irr& other) const;
    bool operator!=(const Irr& other) const;
    bool operator<(const Irr& other) const;
    bool operator>(const Irr& other) const;
};

#endif