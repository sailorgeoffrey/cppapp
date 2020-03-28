#include <iostream>
#include <chrono>
#include "fibonacci.h"

using namespace std;
using namespace std::chrono;

int main() {
    fibonacci my_fibonacci;
    const unsigned int depth = 10'000'000;
    const unsigned int times = 10'000'000;
    const time_point stack_start_time = system_clock::now();
    for (int count = 0; count < times; count++) {
        my_fibonacci.with_vector(depth);
    }
    cout << "elapsed time: " << (system_clock::now() - stack_start_time).count() << endl;
    return 0;
}
