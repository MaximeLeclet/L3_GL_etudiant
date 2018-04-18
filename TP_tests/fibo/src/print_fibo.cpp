#include "Fibo.hpp"
#include <iostream>
#include <assert.h>

int main() {

    for (int i=0; i<50; i++) {

        //assert(fibo(i) >= 0);
        //assert(fibo(i) > fibo(i-1));

        if(fibo(i) < 0) throw std::string("Erreur : resultat négatif");

        if(fibo(i) < fibo(i-1)) throw std::string("Erreur : resultat inférieur au précédent");

        std::cout << fibo(i) << std::endl;

    }
    return 0;
}
