#ifndef HASHTABLE_H
#define HASHTABLE_H


class HashTable
{
    public:
        HashTable(int max);
        virtual ~HashTable();
        int hash_func(int key);
        void Insert(int x);
        int Find(int x);
        void Delete(int x);
        HashTable Rehash();
        void print();

    private:
        int *list;
        int maxSize;
        int nums;
};

#endif // HASHTABLE_H
