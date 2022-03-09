#ifndef TIMESTAMP_H
#define TIMESTAMP_H

class Timestamp
{
    public:
        Timestamp();
        Timestamp(int h, int m, int s);
        void print();

    private:
        int hour;
        int mint;
        int sec;

        friend bool operator>(Timestamp a, Timestamp b);
};

#endif // TIMESTAMP_H
