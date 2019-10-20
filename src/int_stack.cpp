////////////////////////////////////////////////////////////////////////////////
// Module Name:  int_stack.h/cpp
// Authors:      Sergey Shershakov
// Version:      0.2.0
// Date:         23.01.2017
//
// This is a part of the course "Algorithms and Data Structures" 
// provided by  the School of Software Engineering of the Faculty 
// of Computer Science at the Higher School of Economics.
////////////////////////////////////////////////////////////////////////////////

#include "int_stack.h"

// TODO: add necessary headers here
// #include <...

namespace xi {

// TODO: add method definitions here
    IntStack::IntStack(size_t sz) {
        _ssize = sz;
        _head = -1;
        _stack = new int[_ssize];

    }

    IntStack::~IntStack() {
        delete[] _stack;
    }

    void IntStack::push(int el) {
        _head++;
        if (_head < _ssize) {
            _stack[_head] = el;
        }

    }

    int IntStack::pop() {
        if (_head > -1) {
            _stack[_head] = NULL;
        }
        _head--;
    }

    void IntStack::clear() {
        _head = -1;
        delete _stack;
        _stack = new int[_ssize];
    }

    int IntStack::top() {
        return _stack[_head];
    }

    bool IntStack::isEmpty() const {
        return _head == -1;
    }

    bool IntStack::isFull() const {
        return _head==_ssize;
    }

} // namespace xi

