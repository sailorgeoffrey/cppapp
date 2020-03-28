#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Fibonacci {
private:
    vector<unsigned long long> series{1LL, 1LL};

public:
    unsigned long long with_vector(unsigned int n) {
        if (series.size() < n) {
            for (unsigned int i = series.size(); i <= n; i++) {
                series.push_back(series.at(i - 2) + series.back());
            }
        }
        return series.at(n - 1);
    }
};

int main() {
    Fibonacci fibonacci;
    const unsigned int depth = 10'000'000;
    const unsigned int times = 10'000'000;
    const time_point stack_start_time = system_clock::now();
    for (int count = 0; count < times; count++) {
        fibonacci.with_vector(depth);
    }
    cout << "elapsed time: " << (system_clock::now() - stack_start_time).count() << endl;
    return 0;
}
