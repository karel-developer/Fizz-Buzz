# Fizz-Buzz
FizzBuzz in C++: Optimized logic (O(1)), modular design. Perfect for interviews! #CPP #Algorithms

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

## Descripción

Este proyecto implementa la solución al problema FizzBuzz:
- Para números divisibles por 3, imprime "Fizz"
- Para números divisibles por 5, imprime "Buzz"
- Para números divisibles por ambos (3 y 5), imprime "FizzBuzz"
- Para otros números, imprime el número mismo

## Estructura del proyecto

src/
├── fizzbuzz.h # Declaración de la función generarFizzBuzz
├── fizzbuzz.cpp # Implementación de la función generarFizzBuzz
└── main.cpp # Programa principal que usa la función

## Requisitos

- Compilador de C++ (g++, clang++, etc.)
- CMake (opcional, si quieres usar el sistema de build)

## Compilación y ejecución

### Compilación manual

```bash
g++ main.cpp fizzbuzz.cpp -o main
```

### Compilación con CMake

```bash
mkdir build
cd build
cmake ..
g++ main.cpp fizzbuzz.cpp -o main
```

### Ejecución

```bash
./main
```

### Con CMAKE

```bash
mkdir build && cd build
cmake ..
make
```

## Uso

El programa imprimirá la secuencia FizzBuzz del 1 al 100. Para modificar el rango, edita el archivo main.cpp.

## Ejemplo de salida
```text
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
... 
```

## Contribuciones

Las contribuciones son bienvenidas. Por favor, abre un issue o envía un pull request.

## Licencia

Este proyecto está licenciado bajo la licencia MIT - ver el archivo LICENSE para más detalles.