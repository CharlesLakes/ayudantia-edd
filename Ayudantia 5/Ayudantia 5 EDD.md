---
marp: true
math: mathjax
theme: academic
---

<!-- _class: lead -->
# Ayudantía 5
Carlos Lagos - carlos.lagosc@usm.cl

---

<!-- _header: Listas  --->
```c++
class tLista {
    private:
        unsigned int maxSize; // Tamaño maximo de la lista
        unsigned int listSize; // Tamaño actual de la lista
        unsigned int curr; // Posición actual de la lista
        tElemLista* listaArray; // Arreglo con los elementos de la lista
    public:
        tLista();
        ~tLista();
        void clear();
        int length();
        int currPos();
        void moveToPos(int pos);
        tElemLista getValue();
        int insert(tElemLista item);
        int append(tElemLista item);
        tElemLista erase();
        void moveToStart();
        void moveToEnd();
        void prev();
        void next();
}
```

---

<!-- _class: lead -->
# Ejercicios


---

<style scoped>
#aux{
    font-size:22px;
}
</style>

<!-- _header: Ejercicios: Listas  --->

<div id="aux">

Dada la lista de valores:

$$
[5,-1,7,8,10,20,21,5,90]
$$

Representa el proceso de las siguientes operaciones en dos tipos de estructuras de datos:

1. Lista basada en arreglos.
2. Lista enlazada.

Operaciones:
- `$moveToStart()$`
- `$insert(100)$`
- `$moveToPos(4)$`
- `$erase()$`
- `$next()$`
- `$insert(-1)$`

Ilustra estos procesos para entender cómo cada estructura de datos gestiona las operaciones mencionadas.


</div>

---

<!-- _header: Ejercicios: Listas  --->

Se te dan dos listas, $A$ y $B$, con solo enteros iguales a 1 o 0. Tu tarea es determinar el número máximo posible $k$ tal que un prefijo (los primeros $k$ elementos) de la lista $A$ sea una subsecuencia de la lista $B$. 

Un prefijo es una subcadena que abarca desde el inicio hasta una posición específica en la cadena. 

Una secuencia $A$ es una subsecuencia de una secuencia $B$ si $A$ se puede obtener a partir de $B$ eliminando varios (posiblemente ninguno o todos) elementos. 

Debes crear una función que resuelva este problema usando los metodos correspondientes.

---


<!-- _header: Ejercicios: Listas  --->


En una lista enlazada, normalmente cada nodo guarda un valor y apunta al siguiente elemento. Ahora, quiero que hagas una modificación: cada nodo debe guardar un valor, apuntar al siguiente elemento y también al elemento que está dos posiciones hacia adelante. Teniendo en cuenta esta modificación, necesito que re-implementes la función ```moveToPos(pos)```.

Además, se plantea la pregunta: ¿Qué sucede si en vez de avanzar dos posiciones, avanzo la raíz cuadrada del largo posiciones?

---
<!-- _class: lead -->

# Árboles Binarios

---
<!-- _header: Árboles Binarios --->

## Introducción a Árboles Binarios

- Estructura de datos jerárquica.
- Cada nodo tiene, como máximo, dos hijos: izquierdo y derecho.

---
<!-- _header: Árboles Binarios --->
## Árbol Binario

- **Nodo**: Elemento de un árbol.
- **Raíz**: Nodo principal del árbol.
- **Hijo Izquierdo/Derecho**: Hijos de un nodo.
- **Hoja**: Nodo sin hijos.

---
<!-- _header: Árboles Binarios --->
## Recorridos en Árboles Binarios

### Inorden

- Recorre primero el subárbol izquierdo, luego la raíz y finalmente el subárbol derecho.
- **Izquierda - Raíz - Derecha**

---
<!-- _header: Árboles Binarios --->
## Recorridos en Árboles Binarios

### Preorden

- Visita primero la raíz, luego el subárbol izquierdo y finalmente el subárbol derecho.
- **Raíz - Izquierda - Derecha**

---
<!-- _header: Árboles Binarios --->
## Recorridos en Árboles Binarios

### Postorden

- Recorre primero el subárbol izquierdo, luego el subárbol derecho y finalmente la raíz.
- **Izquierda - Derecha - Raíz**


---
<!-- _header: Árboles Binarios --->
## Aplicaciones de los Recorridos

- **Inorden**: Imprime nodos en orden ascendente en un árbol de búsqueda binario.
- **Preorden**: Clonar árboles.
- **Postorden**: Libera la memoria de los nodos en un árbol.

---
<!-- _class: lead -->

# THE END
