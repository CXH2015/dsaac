#ifndef SALESITEM_H
#define SALESITEM_H
#include<iostream>
#include<string>
class Sales_item{
public:
std::istream& input(std::istream& in);
std::ostream& output(std::ostream& out) const;
Sales_item add(Sales_item& other)
{
revenue+=other.revenue;
units_sold+=other.units_sold;
return *this;
}
double avg_price() const;
bool same_isbn(const Sales_item &rhs) const
{
return isbn==rhs.isbn;
}
Sales_item(): units_sold(0),revenue(0.0){}
private:
std::string isbn;
unsigned units_sold;
double revenue;
};
#endif
