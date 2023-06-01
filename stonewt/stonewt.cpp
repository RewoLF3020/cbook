#include "stonewt.h"
using std::cout;


Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}


Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}


Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    mode = STONE;
}


void Stonewt::stone_mode()
{
    mode = STONE;
}


void Stonewt::pound_mode()
{
    mode = POUND;
}


Stonewt::operator int() const
{
    return int(pounds + 0.5);
}


Stonewt::operator double() const
{
    return pounds;
}


Stonewt Stonewt::operator+(const Stonewt & st) const
{
    Stonewt sum;
    sum.pounds = pounds + st.pounds;
    sum.stone = int(sum.pounds) / Lbs_per_stn;
    sum.pds_left = int(sum.pounds) % Lbs_per_stn + sum.pounds - int(sum.pounds);
    return sum;
}


Stonewt Stonewt::operator-(const Stonewt & st) const
{
    Stonewt diff;
    diff.pounds = pounds - st.pounds;
    diff.stone = int(diff.pounds) / Lbs_per_stn;
    diff.pds_left = int(diff.pounds) % Lbs_per_stn + diff.pounds - int(diff.pounds);
    return diff;
}


Stonewt Stonewt::operator*(double n) 
{
    return Stonewt(n * pounds);
}


std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    if (st.mode == Stonewt::STONE)
        os << st.stone << " stone, " << st.pds_left << " pounds";
    else if (st.mode == Stonewt::POUND)
        os << st.pounds << " pounds";
    return os;
}


bool Stonewt::operator>(const Stonewt & st) const
{
    return pounds > st.pounds;
}


bool Stonewt::operator<(const Stonewt & st) const
{
    return pounds < st.pounds;
}


bool Stonewt::operator>=(const Stonewt & st) const
{
    return pounds >= st.pounds;
}


bool Stonewt::operator<=(const Stonewt & st) const
{
    return pounds <= st.pounds;
}


bool Stonewt::operator==(const Stonewt & st) const
{
    return pounds == st.pounds;
}


bool Stonewt::operator!=(const Stonewt & st) const
{
    return pounds != st.pounds;
}


/*Stonewt operator*(Stonewt & st, double n)
{
    return Stonewt(n * st.pounds);
}*/