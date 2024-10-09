#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Queue {
private:
    std::vector<T> data;

public:
    void enqueue(const T& value);
    void dequeue();
    bool is_empty() const;
    T front() const;
    T back() const;
};

#include "queue.tpp"

#endif // QUEUE_HPP
