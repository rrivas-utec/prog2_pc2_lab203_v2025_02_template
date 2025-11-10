//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_3() {
    MonteCarloPISimulator a(7), b(7);
    a.set_iterations(1000); a.run();
    b.set_iterations(1000); b.run();
    std::cout
      << (std::abs(a.pi_hat() - b.pi_hat()) < 1e-12 ? "OK" : "DIF");
}

TEST_CASE("Question #3.3") {
    execute_test("question_3_test_3.in", test_3);
}