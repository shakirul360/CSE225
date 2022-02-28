#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

//const int MAX_ITEMS = 5;

template <class ItemType>
class SortedType
{
public :
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&, int l, int r);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    int currentPos;
    ItemType info[MAX_ITEMS];
};
#endif // SORTEDTYPE_H_INCLUDED

using namespace std;

template <class ItemType>
SortedType<ItemType>::SortedType() {
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty() {
    length = 0;
}
template <class ItemType>
bool SortedType<ItemType>::IsFull() {
    return (length == MAX_ITEMS);
}

template <class ItemType>
int SortedType<ItemType>::LengthIs() {
    return length;
}
template <class ItemType>
void SortedType<ItemType>::ResetList() {
    currentPos = -1;
}
template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType& item) {
    currentPos++;
    item = info [currentPos];
}

template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item){

    int position = 0;

    while (position < length) {
        if (info[position] < item){
            position++;
        } else {
            break;
        }
    }

    for (int i = length; i > position; i--) {
        info[i] = info[i - 1];
    }

    info[position] = item;
    length++;

}
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item){

    int position = 0;
    bool found = false;

    while (position < length){
        if (info[position] == item){
            found = true;
            break;
        } else {
            position++;
        }
    }

    if (found){
        for (int idx = position; idx < length - 1; idx++){
            info[idx] = info[idx + 1];
        }
    }

    length--;

}
template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &flag, int l, int r){

    cout << "here" << endl;
    if (r >= 1) {

        int mid = (l + r) / 2;

        if (info[mid] == item) {
            //item = info[mid];
            flag = true;
            return;
        }
        else if (info[mid] < item){
            return RetrieveItem(item, flag, mid + 1, r);
        }
        else{
            return RetrieveItem(item, flag, l, mid - 1);
        }
    }

    flag = false;

}

