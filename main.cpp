#include "queue.hpp"
#include <iostream>

int main() {
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;

    q.dequeue();

    std::cout << "After dequeue, front: " << q.front() << std::endl;

    return 0;
}
