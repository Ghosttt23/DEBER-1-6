# TAREA 2 - Listas dobles circulares

## Enunciado
Agregar una funcion `obtenerEnPosicion(int pos)` que devuelva el dato almacenado en la posicion `pos` de la lista.

## Implementacion
Funcion: `ListaDobleCircular<T>::obtenerEnPosicion(int pos)` (`ListaDobleCircular.h`)

Las posiciones empiezan en 0. Recorre desde la cabeza hacia adelante si `pos` esta en la primera mitad, o desde el ultimo nodo hacia atras si esta en la segunda. Si la posicion no existe lanza `out_of_range`.

Se agrego una prueba al final de `main.cpp`.

## Compilar
```
g++ main.cpp -o programa
```
