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

        void AddAsHeadV2(int i);
        void AddAsTailV2(int i);
        void Print_tail();       //helper method
        void ReverseV2();
        void AddAllV2(List l);


    private:
        Node* head;
        Node *tail;
        //Node* tail; // this is for Part B
};

#endif // LIST_H
