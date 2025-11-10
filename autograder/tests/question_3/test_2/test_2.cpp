//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_2() {
    MonteCarloPISimulator sim(2025);
    const bool ok = sim.add_batch(200000) && sim.add_batch(300000) && sim.run();
    if (ok) {
        std::cout
            << std::setprecision(4)
            << "pi hat=" << sim.pi_hat(); // cercano a 3.14
    }
}

TEST_CASE("Question #3.2") {
    execute_test("question_3_test_2.in", test_2);
}