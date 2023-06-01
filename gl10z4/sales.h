#ifndef SALES_H
#define SALES_H

namespace SALES
{
    class Sales
    {
        private:
            static const int QUARTERS = 4;

            struct sales
            {
                double sales[QUARTERS];
                double average;
                double max;
                double min;
            };
            sales client;

        public: 
            Sales() {}
            Sales(const double ar[], int n);
            ~Sales() {}
            void setSales();
            double min(const double ar[], int n);
            double max(const double ar[], int n);
            double average(const double ar[], int n);
            void showSales();
    };
}

#endif
