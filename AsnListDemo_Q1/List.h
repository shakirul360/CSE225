#ifndef LIST_H
#define LIST_H


struct Node {
    int val;
    Node* next;
};

class List {
    public:
        List();
        bool IsEmpty();
        int LengthIs();
        void AddAsTail(int i);
        void AddAsHead(int i);
        void Print();
        Node Find(int i);
        void Reverse();
        int PopHead();
        void RemoveFirst(int i);
        void RemoveAll(int i);
        void AddAll(List l);



    private:
        Node* head;
};

#endif // LIST_H
