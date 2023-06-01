#ifndef DMA_H_
#define DMA_H_
#include <iostream>


class ABC
{
    private:
        char * label;
        int rating;
    public:
        ABC(const char * l = "null", int r = 0);    
        ABC(const ABC & rs);
        virtual ~ABC();
        virtual void View() const = 0;  // если понадобиться метод View сделать рабочим нужно будет определить методы Label() и Rating()
        ABC & operator=(const ABC & rs);
        friend std::ostream & operator<<(std::ostream & os, const ABC & rs);
};


class baseDMA : public ABC
{
    public:
        baseDMA(const char * l = "null", int r = 0) : ABC(l, r) {};
        baseDMA(const baseDMA & rs) : ABC(rs) {};
        baseDMA & operator=(const baseDMA & rs);
        friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);    
        virtual void View() const;
};


class lacksDMA : public ABC
{
    private:
        char *  color;
    public:
        lacksDMA(const char * c = "blank", const char * l = "null", 
                int r = 0);
        lacksDMA(const char * c, const ABC & rs);  
        lacksDMA(const lacksDMA & ls);
        ~lacksDMA();
        lacksDMA & operator=(const lacksDMA & ls);
        friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);          
        virtual void View() const;
};


class hasDMA : public ABC
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null",
            int r = 0);
        hasDMA(const char * s, const ABC & rs);
        hasDMA(const hasDMA & hs);
        ~hasDMA();
        hasDMA & operator=(const hasDMA & rs);        
        friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
        virtual void View() const;
};

#endif