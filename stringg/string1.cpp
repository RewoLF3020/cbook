#include <cstring>
#include <cctype>
#include "string1.h"

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}


String::String(const char * s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
}


String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}


String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
}


String::~String()
{
    --num_strings;
    delete [] str;
}


String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;    
}


String & String::operator=(const char * s)
{
    delete [] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}


char & String::operator[](int i)
{
    return str[i];
}


const char & String::operator[](int i) const
{
    return str[i];
}


bool operator<(const String & st1, const String & st2)
{
    return (strcmp(st1.str, st2.str) < 0);
}


bool operator>(const String & st1, const String & st2)
{
    return st2.str < st1.str;
}


bool operator==(const String & st1, const String & st2)
{
    return (strcmp(st1.str, st2.str) == 0);
}


std::ostream & operator<<(std::ostream & os, const String & st)
{
    os << st.str;
    return os;
}


std::istream & operator>>(std::istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while(is && is.get() != '\n')
        continue;
    return is;         
}


String String::operator+(const String & s) const
{
    String sum;
    sum.len = strlen(str) + strlen(s.str);
    sum.str = new char[sum.len + 1];
    strcpy(sum.str, str);
    strcat(sum.str, s.str);
    return sum;
}


String String::operator+(const char * s) const
{
    String sum;
    sum.len = strlen(str) + strlen(s);
    sum.str = new char[sum.len + 1];
    strcpy(sum.str, str);
    strcat(sum.str, s);
    return sum;
}


String operator+(const char * s, const String & st)
{
    String sum;
    sum.len = strlen(s) + strlen(st.str);
    sum.str = new char[sum.len + 1];
    strcpy(sum.str, s);
    strcat(sum.str, st.str);
    return sum;
}


void String::stringlow()
{
    for (int i = 0; i < len; i++)
        if (isalpha(str[i]) && isupper(str[i]))
            str[i] = tolower(str[i]);
}


void String::stringup()
{
    for (int i = 0; i < len; i++)
        if (isalpha(str[i]) && islower(str[i]))
            str[i] = toupper(str[i]);
}


int String::similar(char ch)
{
    int count = 0;
    for (int i = 0; i < len; i++)
        if (str[i] == ch)
            count++;
    return count;        
}