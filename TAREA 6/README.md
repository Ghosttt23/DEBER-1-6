# TAREA 6 - Pilas (recursividad)

## Enunciado
Implementar la funcion para sumar los elementos de la pila.

## Implementacion
Funcion: `Pila::sumar()` (`Pila.h` / `Pila.cpp`)

Es recursiva, igual que `imprimir()` y `buscar()`: toma el valor de la cima, baja la cima, se suma con el resto de la pila y restaura la cima al volver, por lo que la pila queda intacta. Con la pila vacia devuelve 0.

Se agrego la opcion "5. Sumar elementos" al menu (Salir paso a ser la opcion 6).

## Compilar
```
g++ Pila.cpp main.cpp -o programa
```
