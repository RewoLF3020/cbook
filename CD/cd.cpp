#include "cd.h"
#include <cstring>
#include <iostream>


Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    perfomers = new char[strlen(s1) + 1];
    strcpy(perfomers, s1);
    label = new char[strlen(s2)];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd & d)
{
    perfomers = new char[strlen(d.perfomers) + 1];
    strcpy(perfomers, d.perfomers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}


Cd::~Cd()
{
    delete [] perfomers;
    delete [] label;
}


void Cd::Report() const
{
    std::cout << "Perfomers: " << perfomers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Number of selections: " << selections << std::endl;
    std::cout << "Playback time: " << playtime << std::endl; 
}


Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    delete [] perfomers;
    perfomers = new char[strlen(d.perfomers) + 1];
    strcpy(perfomers, d.perfomers);
    delete [] label;
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char * s1, const char * s2, const char * s3,
        int n, double x) : Cd::Cd(s2, s3, n, x)
{

    main_s = new char[strlen(s1) + 1];
    strcpy(main_s, s1);
}            


Classic::Classic(const char * s, const Cd & d) : Cd(d)
{
    main_s = new char[strlen(s) + 1];
    strcpy(main_s, s);
}


Classic::~Classic()
{
    delete [] main_s;
}


void Classic::Report() const
{
    Cd::Report();
    std::cout << "Main composition: " << main_s << std::endl;
}


Classic & Classic::operator=(const Classic & d)
{
    if (this == &d)
        return *this;
    Cd::operator=(d);
    delete [] main_s;
    main_s = new char[strlen(d.main_s) + 1];
    strcpy(main_s, d.main_s);
    return *this;    
}