# TAREA 1 - Listas dobles (doblemente enlazadas)

## Enunciado
Agregar una funcion `invertir()` a la lista doblemente enlazada, que invierta el orden de los nodos cambiando los punteros.

## Implementacion
Funcion: `ListaDoble::invertir()` (`Lista.h` / `Lista.cpp`)

Recorre la lista una sola vez e intercambia los punteros `siguiente` y `anterior` de cada nodo; al final intercambia `cabeza` y `cola`. No crea ni elimina nodos.

Se agrego una prueba al final de `main.cpp`.

## Compilar
```
g++ Lista.cpp main.cpp Nodo.cpp -o programa
```
