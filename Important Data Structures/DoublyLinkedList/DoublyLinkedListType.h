#ifndef DOUBLYLINKEDLISTTYPE_H
#define DOUBLYLINKEDLISTTYPE_H

template <class ItemType>
struct NodeType {
    ItemType info;
    NodeType* prev;
    NodeType* next;
};

template <class ItemType>
class DoublyLinkedListType {
    public:
        DoublyLinkedListType();
        ~DoublyLinkedListType();

        void addFront(ItemType);
        void addRear(ItemType);
        void addItemAfter(ItemType, ItemType);
        void addItemBefore(ItemType, ItemType);

        void deleteFront();
        void deleteRear();
        void deleteItem(ItemType);

        bool findItem(ItemType);
        void display();
    private:
        NodeType<ItemType>* front;
        NodeType<ItemType>* rear;
};

#endif // DOUBLYLINKEDLISTTYPE_H
