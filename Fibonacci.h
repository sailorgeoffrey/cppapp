//
// Created by Geoffrey Chandler on 3/28/20.
//

#ifndef CPPAPP_FIBONACCI_H
#define CPPAPP_FIBONACCI_H

#include <vector>

class Fibonacci {
private:
    std::vector<unsigned long long> series{1LL, 1LL};
public:
    unsigned long long with_vector(unsigned int i);
};

#endif //CPPAPP_FIBONACCI_H
