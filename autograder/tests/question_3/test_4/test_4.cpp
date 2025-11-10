//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_4() {
    MonteCarloPISimulator sim(123);
    if (!sim.set_iterations(0)) {
        std::cout << "N invalido\n"; // manejo por retorno booleano
    }
    sim.reset();                   // deja total=0
    if (sim.pi_hat() == 0.0) {
        std::cout << "Sin datos\n";  // pi_hat no válido sin muestras
    }
}

TEST_CASE("Question #3.4") {
    execute_test("question_3_test_4.in", test_4);
}