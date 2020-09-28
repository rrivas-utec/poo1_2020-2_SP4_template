//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP4.h"
#include "redirect_io.h"

#include <fstream>
#include <string>

using namespace std;

TEST_CASE("Ejercicio #3") {
    redirect_io_t redir;
    ifstream file("test_3.in");
    string line;
    string result;
    while (!file.eof())
    {
        redir.redirect();
        getline(file, line); redir << line;
        ejercicio_3();
        getline(file, line); redir.getline(result);
        REQUIRE(line == result);
        redir.reestablish();
    }
    // Verificando solamente la función
    auto winner = guerra_digitos(123334);
    REQUIRE(winner == 24);
}