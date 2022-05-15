#ifndef DYN_ARR_H
#define DYN_ARR_H

using namespace std;

template <class T>
class Dyn_Arr {

    private:
        T *data;
        int size;

    public:
        Dyn_Arr();
        Dyn_Arr(int size);
        ~Dyn_Arr();
        void allocate(int size);
        void setValue(int idx, T value);
        T getValue(int idx);

};


template <class T>
Dyn_Arr<T>::Dyn_Arr() {
    data = 0;
    size = 0;
}

template <class T>
Dyn_Arr<T>::Dyn_Arr(int s) {
    data = new int[s];
    size = s;
}

template <class T>
Dyn_Arr<T>::~Dyn_Arr() {
    delete [] data;
}

template <class T>
T Dyn_Arr<T>::getValue(int idx) {
    return data[idx];
}

template <class T>
void Dyn_Arr<T>::setValue(int idx, T value){
    data[idx] = value;
}

#endif // DYN_ARR_H
