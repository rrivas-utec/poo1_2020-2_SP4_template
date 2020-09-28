//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP4.h"
#include "redirect_io.h"

#include <string>

using namespace std;

TEST_CASE("Ejercicio #5") {
    redirect_io_t redir;
    ifstream file("test_5.in");
    string line;
    string result;
    while (!file.eof()) {
        redir.redirect();
        getline(file, line); redir << line;
        ejercicio_5();
        getline(file, line); redir.getline(result);
        REQUIRE(line == result);
        redir.reestablish();
    }
    // Verificando solamente la función
    auto texto_invertido = invertir_texto("hola");
    REQUIRE(texto_invertido == "aloh");
}