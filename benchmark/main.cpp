#include <benchmark/benchmark.h>

#include "fp-cpp/core.h"

#include <vector>

#define COUNT_ELEMENTS 10000

struct Position {
    std::vector<int> x, y;
};

static void BM_Row_counter(benchmark::State &state) {

    Hello();
    Position a;

    for (int i = 0; i < COUNT_ELEMENTS; i++) {
        a.x.push_back(i + 3);
        a.y.push_back(i + 7);
    }

    for (auto _ : state) {
        for (size_t i = 0; i < COUNT_ELEMENTS; i++) {
            a.x[i] += 3;
            a.y[i] += 2;
        }
    }
}
BENCHMARK(BM_Row_counter);