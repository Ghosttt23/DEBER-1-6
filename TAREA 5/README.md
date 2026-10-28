# TAREA 5 - Notaciones infija, postfija y prefija

## Enunciado
Implementar una funcion `contarOperadores()` que reciba una expresion infija y cuente los operadores aritmeticos (+, -, *, /, ^), integrandola en el menu existente sin alterar las demas opciones.

## Implementacion
Funcion: `contarOperadores(string expresion)` (`main.cpp`)

Recorre la expresion y suma uno por cada operador reconocido por `esOperador()`. Parentesis, numeros, letras y espacios no cuentan.

Se agrego la opcion "5. Contar operadores" al menu (Salir paso a ser la opcion 6). Las opciones 1 a 4 no cambian.

## Compilar
```
g++ main.cpp -o programa
```
