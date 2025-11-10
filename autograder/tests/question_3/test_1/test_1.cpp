//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_1() {
    MonteCarloPISimulator sim(42);
    if (sim.set_iterations(100000) && sim.run()) {
        std::cout.setf(std::ios::fixed);
        std::cout
            << std::setprecision(2)
            << "pi hat="
            << sim.pi_hat(); // ~3.14
    }
}

TEST_CASE("Question #3.1") {
    execute_test("question_3_test_1.in", test_1);
}