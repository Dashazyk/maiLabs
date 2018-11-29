#include "TQueueItem.h"
#include <iostream>

template <typename T> 
TQueueItem<T>::TQueueItem(const std::shared_ptr<T>& item) {
    this->item = item;
    this->next = nullptr;
    std::cout << "Stack item: created" << std::endl;
}

template <typename T> 
std::shared_ptr<TQueueItem<T>> TQueueItem<T>::SetNext(std::shared_ptr<TQueueItem<T>> &next) {
    std::shared_ptr<TQueueItem <T>> old = this->next;
    this->next = next;
    return old;
}

template <typename T> 
std::shared_ptr<T> TQueueItem<T>::GetValue() const {
    return this->item;
}

template <typename T> 
std::shared_ptr<TQueueItem<T>> TQueueItem<T>::GetNext() {
    return this->next;
}

template <typename T> 
TQueueItem<T>::~TQueueItem() {
    std::cout << "Stack item: deleted" << std::endl;

}

template <typename A> 
std::ostream& operator<<(std::ostream& os, const TQueueItem<A>& obj) {
    os << *obj.item << std::endl;
    return os;
}
