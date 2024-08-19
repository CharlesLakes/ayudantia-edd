---
marp: true
math: mathjax
theme: academic
---

<!-- _class: lead -->
# Ayudantía 7
Carlos Lagos - carlos.lagosc@usm.cl

---

<!-- _header: Árbol AVL  --->

## Árbol AVL

- Un Árbol AVL es un tipo de árbol binario de búsqueda balanceado.
- La altura de los subárboles izquierdo y derecho difiere en máximo una unidad.
- Esto garantiza tiempos de búsqueda, inserción y eliminación eficientes.

---
<!-- _header: Árbol AVL  --->

## Factores de Equilibrio

- Cada nodo de un AVL tiene un factor de equilibrio:
  - Factor de equilibrio = Altura del subárbol derecho - Altura del subárbol izquierdo.
- El factor de equilibrio debe estar en el rango [-1, 0, 1] para cada nodo.

---

<!-- _header: Árbol AVL  --->

#### Casos de Rotación

##### Rotación Simple Izquierda (LL)

- Desbalance: Factor de equilibrio = 2 en nodo X.
- Solución: Rotación simple a la izquierda en X para equilibrar el árbol.

##### Rotación Simple Derecha (RR)

- Desbalance: Factor de equilibrio = -2 en nodo X.
- Solución: Rotación simple a la derecha en X para equilibrar el árbol.

---

<!-- _header: Árbol AVL  --->

#### Casos de Rotación

##### Rotación Doble Izquierda-Derecha (LR)

- Desbalance: Factor de equilibrio = -2 en nodo X y 1 en nodo Y (hijo izquierdo de X).
- Solución: Rotación a la izquierda en Y seguida de rotación a la derecha en X.

---

<!-- _header: Árbol AVL  --->

#### Casos de Rotación


##### Rotación Doble Derecha-Izquierda (RL)

- Desbalance: Factor de equilibrio = 2 en nodo X y -1 en nodo Y (hijo derecho de X).
- Solución: Rotación a la derecha en Y seguida de rotación a la izquierda en X.

---

<!-- _header: Árbol AVL  --->

## Ejercicios

* Dado el orden de inserción de los elementos $[10, 5, 3, 8, 15, 12]$, grafica cómo quedaría el árbol después de cada inserción.

* Explica cuál sería la complejidad temporal de la inserción si se insertan los elementos del 1 hasta n en ese orden, es decir, $[1, 2, ..., n]$.

* Analiza la complejidad temporal al eliminar la raíz de un árbol binario que fue construido insertando los elementos en el siguiente orden: $[2, 1, n, 3, 4, ..., n-1]$.

---

<!-- _header: Árbol 2-3  --->

## ¿Qué es un Árbol 2-3?

- Es una estructura de datos en la que cada nodo puede tener 2 o 3 hijos.
- Permite almacenar más de un valor en cada nodo, lo que lo hace eficiente para ciertas operaciones.

---
<!-- _header: Árbol 2-3  --->
## Propiedades del Árbol 2-3

- Cada nodo puede tener 1 o 2 valores.
- Los nodos internos tienen 2 o 3 hijos.
- Todas las hojas están en el mismo nivel.

---

<!-- _header:  Ejercicio: Árboles  --->

## Ejercicio

Escriba la función `kLargestElements` usando el lenguaje C++, la cual recibe como parámetros:

- un puntero al nodo raíz de un ABB
- un entero $k \leq n$, donde $n$ es la cantidad de nodos del ABB.

La función debe imprimir el contenido de los $k$ nodos del ABB más grandes en orden creciente (de menor a mayor). Use las estructuras de datos adicionales que sean necesarias. Su función debe visitar la menor cantidad de nodos posibles.

---

<!-- _class: lead -->

# Gracias por su atención :smile: