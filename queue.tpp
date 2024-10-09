#ifndef QUEUE_TPP
#define QUEUE_TPP

#include "queue.hpp"

template <typename T>
void Queue<T>::enqueue(const T& value) {
    data.push_back(value);
}

template <typename T>
void Queue<T>::dequeue() {
    if (is_empty()) {
        throw std::out_of_range("Queue is empty, cannot dequeue");
    }
    data.erase(data.begin());
}

template <typename T>
bool Queue<T>::is_empty() const {
    return data.empty();
}

template <typename T>
T Queue<T>::front() const {
    if (is_empty()) {
        throw std::out_of_range("Queue is empty, no front element");
    }
    return data.front();
}

template <typename T>
T Queue<T>::back() const {
    if (is_empty()) {
        throw std::out_of_range("Queue is empty, no back element");
    }
    return data.back();
}

#endif // QUEUE_TPP
