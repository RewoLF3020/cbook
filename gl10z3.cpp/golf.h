#ifndef GOLF
#define GOLF

class Golf
{
    private:
        static const int LEN = 20;
        //static const int PLAYERS = 7;

        struct golf
        {
            char fullname[LEN];
            int handicap;
        };
        golf player;

    public:
        Golf() {}
        Golf(const char * name, int hc);
        ~Golf() {}
        int setgolf();
        void handicap(int hc);
        void showgolf() const;
};

#endif