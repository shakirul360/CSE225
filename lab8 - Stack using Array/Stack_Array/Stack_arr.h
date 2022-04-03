#ifndef STACK_ARR_H
#define STACK_ARR_H

const int MAX_ITEMS = 10;

class EmptyStack{};
class FullStack{};

template <class T>
class Stack_arr {
    public:
        Stack_arr();
        bool is_Empty();
        bool is_full();
        void push(T item);
        void pop();
        T Top();

    private:
        int top;
        T items[MAX_ITEMS];
};

#endif // STACK_ARR_H
