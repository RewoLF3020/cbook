#include "dma.h"
#include <cstring>


ABC::ABC(const char * l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}


ABC::ABC(const ABC & rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}


ABC::~ABC()
{
    delete [] label;
}


ABC & ABC::operator=(const ABC & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}


std::ostream & operator<<(std::ostream & os, const ABC & rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}


baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    ABC::operator=(rs);
    return *this;
}


std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << (const ABC &) rs;
    return os;
}


void baseDMA::View() const
{

}


lacksDMA::lacksDMA(const char * c, const char * l, int r) 
    : ABC(l, r) 
{
    color = new char[strlen(c) + 1];
    std::strcpy(color, c);
}


lacksDMA::lacksDMA(const char * c, const ABC & rs) : ABC(rs)
{
    color = new char[strlen(c) + 1];
    std::strcpy(color, c);
}


lacksDMA::lacksDMA(const lacksDMA & ls) : ABC(ls)
{
    color = new char[strlen(ls.color) + 1];
    std::strcpy(color, ls.color);
}

lacksDMA::~lacksDMA()
{
    delete [] color;
}


lacksDMA & lacksDMA::operator=(const lacksDMA & ls)
{
    ABC::operator=(ls);
    delete [] color;
    color = new char[strlen(ls.color) + 1];
    strcpy(color, ls.color);
    return *this;
}


std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const baseDMA &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}


void lacksDMA::View() const
{

}


hasDMA::hasDMA(const char * s, const char * l, int r)
    : ABC(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}


hasDMA::hasDMA(const char * s, const ABC & rs) : ABC(rs)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);   
}


hasDMA::hasDMA(const hasDMA & hs) : ABC(hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}


hasDMA::~hasDMA()
{
    delete [] style;
}


hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    ABC::operator=(hs);
    delete [] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    return *this;    
}


std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << dynamic_cast<const ABC &> (hs);
    os << "Style: " << hs.style << std::endl;
    return os; 
}


void hasDMA::View() const
{

}