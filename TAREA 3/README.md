# TAREA 3 - Pilas

## Enunciado
Agregar una funcion `sizePila()` que permita devolver el numero actual de elementos almacenados en la pila.

## Implementacion
Funcion: `Pila::sizePila()` (`Pila.h` / `Pila.cpp`), declarada tambien en la interfaz `IPila.h`.

Como la pila esta hecha con nodos enlazados, recorre la pila desde el `tope` hasta llegar a `nullptr` y cuenta los nodos. No modifica la pila y devuelve 0 si esta vacia.

```cpp
int Pila::sizePila() {
  int contador = 0;
  Nodo *actual = this->tope;

  while (actual != nullptr) {
    contador++;
    actual = actual->getSiguiente();
  }
  return contador;
}
```

Ademas, el constructor `Pila::Pila()` ahora inicializa `tope` en `nullptr` (antes quedaba sin inicializar).

## Menu del programa
1. Insertar
2. Imprimir
3. Buscar
4. Eliminar
5. Tamanio de la pila (nueva opcion con `sizePila()`)
6. Salir

## Compilar
```
g++ Nodo.cpp Persona.cpp Pila.cpp main.cpp -o ejecutar
```
