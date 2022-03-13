#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class Timestamp
{
    public:
        Timestamp();
        Timestamp(int s, int m, int h);
        void print();

    private:
        int hour;
        int mint;
        int sec;

        friend bool operator>(Timestamp a, Timestamp b);
        friend bool operator==(Timestamp a, Timestamp b);
        friend bool operator!=(Timestamp a, Timestamp b);
};

#endif // TIMESTAMP_H
