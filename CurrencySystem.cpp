#include "CurrencySystem.h"

using namespace std;

double Currency::changetocu(curr cu, double sum) {
    if (cu == curr::usd) {
        currency = cu;
        base = sum;
        getcu();
        return base;
    } else if (cu == curr::irr) {
        currency = cu;
        base = sum / 3;
        getcu();
        return base;
    } else if (cu == curr::eur) {
        currency = cu;
        base = sum / 2;
        getcu();
        return base;
    } else {
        throw invalid_argument("This currency is not acceptable!!sorry.");
    }
}

void Currency::getcu() {
    if (currency == curr::usd) {
        cout << base << " $_usd" << endl;
    } else if (currency == curr::irr) {
        cout << base << " IR_irr" << endl;
    } else if (currency == curr::eur) {
        cout << base << " €_eur" << endl;
    }
}


Usd::Usd(int am) {
    among = am;
    base += among * 1;
    currency = usd;
}

Usd Usd::operator+(const Usd& other) const {
    Usd result;
    result.base = this->base + other.base;
    return result;
}

Usd Usd::operator-(const Usd& other) const {
    Usd result;
    result.base = this->base - other.base;
    return result;
}


Eur::Eur(int am) {
    among = am;
    base += among * 2;
    currency = eur;
}

Eur Eur::operator+(const Eur& other) const {
    Eur result;
    result.base = this->base + other.base;
    return result;
}

Eur Eur::operator-(const Eur& other) const {
    Eur result;
    result.base = this->base - other.base;
    return result;
}


Irr::Irr(int am) {
    among = am;
    base += among * 3;
    currency = irr;
}

Irr Irr::operator+(const Irr& other) const {
    Irr result;
    result.base = this->base + other.base;
    return result;
}

Irr Irr::operator-(const Irr& other) const {
    Irr result;
    result.base = this->base - other.base;
    return result;
}



bool Usd::operator==(const Usd& other) const {
    return std::abs(base - other.base) < 0.0001f; 
}

bool Usd::operator!=(const Usd& other) const {
    return !(*this == other);
}

bool Usd::operator<(const Usd& other) const {
    return base < other.base;
}

bool Usd::operator>(const Usd& other) const {
    return base > other.base;
}

// عملگرهای مقایسه برای EUR
bool Eur::operator==(const Eur& other) const {
    return std::abs(base - other.base) < 0.0001f;
}

bool Eur::operator!=(const Eur& other) const {
    return !(*this == other);
}

bool Eur::operator<(const Eur& other) const {
    return base < other.base;
}

bool Eur::operator>(const Eur& other) const {
    return base > other.base;
}

// عملگرهای مقایسه برای IRR
bool Irr::operator==(const Irr& other) const {
    return std::abs(base - other.base) < 0.0001f;
}

bool Irr::operator!=(const Irr& other) const {
    return !(*this == other);
}

bool Irr::operator<(const Irr& other) const {
    return base < other.base;
}

bool Irr::operator>(const Irr& other) const {
    return base > other.base;
}