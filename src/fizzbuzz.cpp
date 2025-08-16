#include "fizzbuzz.h"
#include <string>

namespace FizzBuzz {

std::string generarFizzBuzz(int numero) {
    if (numero % 3 == 0 && numero % 5 == 0) {
        return "FizzBuzz";
    } else if (numero % 3 == 0) {
        return "Fizz";
    } else if (numero % 5 == 0) {
        return "Buzz";
    } else {
        return std::to_string(numero);
    }
}

}
