---
marp: true
math: mathjax
theme: academic
---

<!-- _class: lead -->
# Ayudantía 9
Carlos Lagos - carlos.lagosc@usm.cl

---
<!-- _header: Colas de prioridad --->

## ¿Qué es un Heap?

Un **Heap** es una estructura de datos especial que satisface la propiedad de heap. Es un árbol binario completo donde:

- En un **Max-Heap**, el valor de cada nodo es mayor o igual que los valores de sus hijos.
- En un **Min-Heap**, el valor de cada nodo es menor o igual que los valores de sus hijos.

---
<!-- _header: Colas de prioridad --->

## Propiedad de Heap

- **Max-Heap**: `A[parent(i)] ≥ A[i]`
- **Min-Heap**: `A[parent(i)] ≤ A[i]`

![Heap Example](https://upload.wikimedia.org/wikipedia/commons/3/38/Max-Heap.svg)

---
<!-- _header: Colas de prioridad --->

## Operaciones en un Heap

- **Inserción**
- **Borrado**
- **Máximo (para Max-Heap)** o **Mínimo (para Min-Heap)**

---
<!-- _header: Colas de prioridad --->

## Inserción en un Heap

1. Añadir el nuevo elemento al final del heap.
2. "Flotar" el nuevo elemento hacia arriba hasta restaurar la propiedad de heap.

---

<!-- _header: Colas de prioridad --->

## Borrado en un Heap

1. Reemplazar la raíz con el último elemento del heap.
2. "Hundir" el nuevo elemento en la raíz hacia abajo hasta restaurar la propiedad de heap.

---
<!-- _header: Colas de prioridad --->

## Máximo en un Max-Heap

- El máximo valor en un Max-Heap siempre se encuentra en la raíz.
- Obtener el máximo tiene una complejidad de **O(1)**.

---
<!-- _header: Colas de prioridad --->

## Complejidad de las Operaciones

- **Inserción**: `O(log n)`
- **Borrado**: `O(log n)`
- **Máximo**: `O(1)`

---

<!-- _header: Colas de prioridad --->

<style scoped>
  p,li{
    font-size:20px;
  }
</style>

## Ejericios 

En un heap vacío, dibuja los cambios en la estructura de datos después de aplicar las siguientes operaciones.

- Insertar 15
- Insertar 10
- Insertar 20
- Obtener el máximo
- Insertar 30
- Insertar 25
- Obtener el máximo
- Borrar el máximo
- Insertar 5
- Obtener el máximo
- Insertar 35
- Borrar el máximo
- Insertar 40
- Obtener el máximo

