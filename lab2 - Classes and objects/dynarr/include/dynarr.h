#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr {
    private:
        int *data;
        int size;
    public:
        dynArr();
        dynArr(int);
        dynArr(int row, int col);
        ~dynArr();
        void setValue(int, int);
        int getValue(int);
        void allocate(int s);
        void deallocate();
};

#endif // DYNARR_H_INCLUDED
