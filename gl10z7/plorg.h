#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
    private:
        char fullname[20];
        int CI;

    public:
        Plorg(const char * name = "Plorga", int index = 50);
        ~Plorg() {}
        void change_ind(int index);
        void showPlorg();
};

#endif