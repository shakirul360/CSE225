
#ifndef DYNARR_H
#define DYNARR_H

template <class T>

class DynArr
{
    public:
        DynArr();
        DynArr(int size);
        ~DynArr();
        void allocate(int s);
        void setValue(int idx, T val);
        T getValue(int idx);


    private:
        T *data;
        int size;
};

#endif // DYNARR_H
