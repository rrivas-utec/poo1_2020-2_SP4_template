//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP4.h"
#include "redirect_io.h"

#include <fstream>
#include <string>

using namespace std;

TEST_CASE("Ejercicio #1") {
    redirect_io_t redir;
    ifstream file("test_1.in");
    string line;
    string result;
    while (!file.eof())
    {
        int n = 0;
        redir.redirect();
        getline(file, line); redir << line << " ";
        n = stoi(line);
        getline(file, line); redir << line;
        ejercicio_1();
        for(size_t i = 0; i < n + 1; ++i) {
            getline(file, line); redir.getline(result);
            REQUIRE(line == result);
        }
        redir.reestablish();
    }
    // Verificando solamente la función
    redir.redirect();
    triangulo_espejo(3, '*');
    redir.getline(result);
    REQUIRE(result == "  *");
    redir.getline(result);
    REQUIRE(result == " **");
    redir.getline(result);
    REQUIRE(result == "***");
    redir.getline(result);
    REQUIRE(result == "La cantidad de * es: 6");
    redir.reestablish();
}
