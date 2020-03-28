//
// Created by Geoffrey Chandler on 3/28/20.
//

#include "Fibonacci.h"

unsigned long long Fibonacci::with_vector(unsigned int n) {
    if (series.size() < n) {
        for (unsigned int i = series.size(); i <= n; i++) {
            series.push_back(series.at(i - 2) + series.back());
        }
    }
    return series.at(n - 1);
}
