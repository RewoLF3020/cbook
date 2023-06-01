#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
    public:
        enum Mode {STONE, POUND};

    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
        Mode mode;

    public:
        Stonewt(double lbs, Mode form = STONE);
        Stonewt(int stn, double lbs, Mode form = STONE);
        Stonewt();
        ~Stonewt() {}
        void stone_mode();
        void pound_mode();
        operator int() const;
        operator double() const;    
        Stonewt operator*(double n);
        Stonewt operator+(const Stonewt & st) const;
        Stonewt operator-(const Stonewt & st) const;
        bool operator>(const Stonewt & st) const;
        bool operator<(const Stonewt & st) const;
        bool operator>=(const Stonewt & st) const;
        bool operator<=(const Stonewt & st) const;
        bool operator==(const Stonewt & st) const;
        bool operator!=(const Stonewt & st) const;
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
        //friend Stonewt operator*(Stonewt & st, double n);
};

#endif