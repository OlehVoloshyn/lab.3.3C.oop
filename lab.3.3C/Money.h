#include<iostream>
#include "Object.h"
#pragma once
using namespace std;
class Money :
    public Object
{
private:
	long uah;
	unsigned int coin;
public:
	long GetUah() const { return uah; }
	unsigned int GetCoin() const { return coin; }
	void SetUah(long uah) { this->uah = uah; }
	void SetCoin(unsigned int coin) { this->coin = coin; }

	Money();
	Money(long u, unsigned int c);
	Money(const Money&);
	~Money();
	Money& operator ++();
	Money& operator --();
	Money operator ++(int);
	Money operator --(int);

	Money& operator = (const Money&);

	

	friend Money Add(Money l, Money r);
	friend Money Div(Money l, Money r);
	friend Money DivD(Money l, double dr);

	friend ostream& operator <<(ostream&, const Money&);
	friend istream& operator >>(istream&, Money&);

	string toString() const;
};

