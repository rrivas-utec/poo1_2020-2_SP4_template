//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP4.h"
#include "redirect_io.h"

#include <fstream>
#include <string>

using namespace std;

TEST_CASE("Ejercicio #2") {
    redirect_io_t redir;
    ifstream file("test_2.in");
    string line;
    string result;
    while (!file.eof())
    {
        redir.redirect();
        getline(file, line); redir << line;
        size_t n = stoi(line);
        ejercicio_2();
        for(size_t i = 0; i < n; ++i) {
            getline(file, line); redir.getline(result);
            REQUIRE(line == result);
        }
        redir.reestablish();
    }
    // Verificando solamente la función
    redir.redirect();
    triangulo_binario(3);
    redir.getline(result);
    REQUIRE(result == "101");
    redir.getline(result);
    REQUIRE(result == "01");
    redir.getline(result);
    REQUIRE(result == "1");
    redir.reestablish();
}