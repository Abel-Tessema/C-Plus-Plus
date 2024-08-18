//
// Created by Abel XO on 1/28/2024.
//

#ifndef MUKERA_LINKEDLIST_HPP
#define MUKERA_LINKEDLIST_HPP

#include <stdexcept>
#include <iostream>

template <typename T>
class LinkedList {

public:
    class Node {
    public:
        T data;
        Node* next;
        Node() = default;
        explicit Node(T value) {
            data = value;
            next = nullptr;
        }
    };
    Node* head;
    Node* tail;
    int count = 0;

public:
    LinkedList() {
        head = tail = nullptr;
    };

    bool isEmpty() {
        return head == nullptr;
    };

    void addFirst(T value) {
        Node* newNode = new Node(value);
        if (isEmpty())
            head = tail = newNode;
        else {
            newNode->next = head;
            head = newNode;
        }
        count++;
    };

    void addLast(T value) {
        Node* newNode = new Node(value);
        if (isEmpty())
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
        count++;
    };

    void addAt(int index, T value) {
        if (index < 0 || index > count) {
            std::cout << "Index is out of bounds." << std::endl;
            return;
        } else if (index == 0) {
            addFirst(value);
        } else if (index == count) {
            addLast(value);
        } else {
            Node* newNode = new Node(value);
            Node* previous = head;
            for (int i = 0; i < index - 1; i++)
                previous = previous->next;
            newNode->next = previous->next;
            previous->next = newNode;
            count++;
        }
    };

    void removeFirst() {
        if (isEmpty()) {
            std::cout << "linkedList is empty. There's nothing to remove." << std::endl;
            return;
        } else if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        count--;
    };

    void removeLast() {
        if (isEmpty()) {
            std::cout << "linkedList is empty. There's nothing to remove." << std::endl;
            return;
        } else if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != tail)
                temp = temp->next;
            temp->next = nullptr;
            delete tail;
            tail = temp;
        }
        count--;
    };

    void removeAt(int index) {
        if (isEmpty()) {
            std::cout << "List is empty. There's nothing to remove." << std::endl;
        } else if (index < 0 || index >= count) {
            std::cout << "Index is out of bounds." << std::endl;
        } else if (index == 0) {
            removeFirst();
        } else if (index == count - 1) {
            removeLast();
        } else {
            Node* previous = head;
            for (int i = 0; i < index - 1; i++)
                previous = previous->next;
            Node* toBeDeleted = previous->next;
            previous->next = toBeDeleted->next;
            toBeDeleted->next = nullptr;
            delete toBeDeleted;
            count--;
        }
    };

    template <typename U>
    friend std::ostream& operator<< (std::ostream& stream, const LinkedList<U>& linkedList);
};

template <typename T>
std::ostream& operator<< (std::ostream& stream, const LinkedList<T>& linkedList) {
    typename LinkedList<T>::Node* temp = linkedList.head;
    while (temp != nullptr) {
        stream << temp->data << " ";
        temp = temp->next;
    }
    return stream;
}

#endif //MUKERA_LINKEDLIST_HPP
