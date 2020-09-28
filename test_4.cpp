//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP4.h"
#include "redirect_io.h"

#include <string>

using namespace std;

TEST_CASE("Ejercicio #4") {
    redirect_io_t redir;
    ifstream file("test_4.in");
    string line;
    string result;
    while (!file.eof())
    {
        redir.redirect();
        getline(file, line); redir << line;
        ejercicio_4();
        getline(file, line); redir.getline(result);
        REQUIRE(line == result);
        redir.reestablish();
    }
    // Verificando solamente la función
    auto numero_nuevo = contar_digitos(112444);
    REQUIRE(numero_nuevo == 211234);
}
