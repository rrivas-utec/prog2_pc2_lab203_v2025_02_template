//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

static void test_4() {
    int n = 0;
    std::cin >> n;
    auto m1 = create_matriz(n);
    leer_matriz(m1, n);
    recorrido_espiral(m1, n);
    liberar_matriz(m1, n);
}

TEST_CASE("Question #1.4") {
    execute_test("question_1_test_4.in", test_4);
}