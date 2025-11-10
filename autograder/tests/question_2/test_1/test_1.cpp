//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

static void test_1() {
    std::vector<std::string> base;
    std::vector<std::string> query;
    int n = 0;
    cin >> n;
    while (n--) {
        std::string s;
        getline(cin, s, ',');
        base.push_back(trim(s));
    }
    cin >> n;
    while (n--) {
        std::string s;
        getline(cin, s, ',');
        query.push_back(trim(s));
    }
    cout << boolalpha << is_subset(base, query) << endl;
}

TEST_CASE("Question #2.1") {
    execute_test("question_2_test_1.in", test_1);
}