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
    Currency() = default;
    virtual ~Currency() = default;
    double changetocu(curr cu, double sum);
    void getcu();
    double getbace() const ;
    curr getCurrencyType() const;
};


//-----------------------------------------------------------------------------------Usd


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


//-----------------------------------------------------------------------------------------Eur


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

//--------------------------------------------------------------------------------------------Irr


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