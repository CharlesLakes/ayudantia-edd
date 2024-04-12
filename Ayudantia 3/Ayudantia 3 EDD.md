---
marp: true
math: mathjax
theme: academic
---

<!-- _class: lead -->
# Ayudantía 3
Carlos Lagos - carlos.lagosc@usm.cl

---

<!-- _class: lead -->
## Tipos de Datos Abstractos

---
<!-- _header: Tipos de Datos Abstractos  --->



---

<!-- _class: lead -->
## Análisis de algoritmos

---

<!-- _header: Análisis de algoritmos --->

La notación O grande se define como:

$$
O(g(n)) = \{f(n) : \text{existen constantes } c > 0 \text{ y } n_0 \text{ tales que } 
$$

$$
0 \leq f(n) \leq cg(n) \text{ para todo } n \geq n_0\}
$$


Esto significa que una función $f(n)$ pertenece a $O(g(n))$ si existe una constante positiva $c$ y un valor de $n_0$ a partir del cual $f(n)$ siempre es menor o igual a $cg(n)$. Es decir, $f(n)$ no crece más rápido que una constante múltiplo de $g(n)$.

---
<!-- _header: Análisis de algoritmos --->

Para demostrar que $f(n)$ pertenece a $O(g(n))$, a menudo se utiliza el límite:

$$
\lim_{n \to \infty} \frac{f(n)}{g(n)} = k
$$

donde $k$ es una constante real, que puede ser 0 o un número real finito pero no infinito. Si el límite existe con esas condiciones, entonces $f(n)$ pertenece a $O(g(n))$.

---

<!-- _class: lead -->
### Análisis de algoritmos: Verdadero o Falso

---

<!-- _header: Análisis de algoritmos: Verdadero o Falso  --->

Demostrar la veracidad de las siguientes afirmaciones mediante la definición de pertenencia a la notación O grande.


* $f(n) \in O(g(n))$:
    * $\lim_{n \to \infty} \frac{f(n)}{g(n)} = k, \quad k \in \mathbb{R}^{+} \cup \{0\}, \quad k \neq \infty$

Ejercicios:
1. $n^2 + 3n + 10 \in O(n^2)$
2. $3n \in O(n \log(n))$
3. $n^2 \in O(\sqrt{n})$

---

<!-- _header: Análisis de algoritmos: Verdadero o Falso  --->

#### Verdadero o Falso: $n^2 + 3n + 10 \in O(n^2)$

$$
\lim_{n \to \infty}\frac{n^2+3n+10}{n^2}= \lim_{n \to \infty} \left( 1 + \frac{3}{n} + \frac{10}{n^2} \right) = 1
$$

Es verdadero porque su límite tiende a 1 y no a infinito, por lo tanto, pertenece a $O(n^2)$.

---

<!-- _header: Análisis de algoritmos: Verdadero o Falso  --->

#### Verdadero o Falso: $3n \in O(n \cdot \log(n))$

$$
\lim_{n \to \infty}\frac{3n}{n \log(n)} = \lim_{n \to \infty}\frac{3}{\log(n)} = 0
$$

Es verdadero ya que su límite tiende a 0 y no es infinito, por lo tanto, pertenece a $O(n\log(n))$.

---

<!-- _header: Análisis de algoritmos: Verdadero o Falso  --->

#### Verdadero o Falso: $n^2 \in O(\sqrt{n})$

$$
\lim_{n \to \infty} \frac{n^2}{\sqrt{n}} = 
\lim_{n \to \infty} \frac{n^2}{n^{\frac{1}{2}}} =
$$
$$
\lim_{n \to \infty} n^{\left(2 - \frac{1}{2} \right)} = 
\lim_{n \to \infty} n^{\frac{3}{2}} = \infty
$$

Es falso, ya que para que pertenezca a $O(\sqrt{n})$, el límite debe tender a un valor diferente de $\infty$.

---

<!-- _class: lead -->
### Análisis de algoritmos: Codigos

---

<style scoped>
.main{
    display:flex;
    justify-content:center;
    align-items:center;
    height:500px;
}
.main pre{
    width:50%;
}
</style>

<!-- _header: Análisis de algoritmos: Codigos  --->
<div class="main">

```c++
bool es_primo(int  n){
  int i = 2;
  bool primo = false;
  while(i < n){
    if(n % i == 0){
      primo = true;
      break;
    }
    i++;
  }
  return primo;
}
```

<div style="width:50%;font-size:30px;padding:20px;box-sizing:border-box;">

Responder:

1. ¿Qué hace el algoritmo anterior?
2. ¿Cuál es la cantidad de iteraciones en el mejor caso y en el peor caso?
3. ¿A qué notación de O grande pertenece?

</div>

</div>

---

<style scoped>
.main{
    display:flex;
    justify-content:center;
    align-items:center;
    height:500px;
}
.main pre{
    width:50%;
}
</style>

<!-- _header: Análisis de algoritmos: Codigos  --->
<div class="main">

```c++
void ordenar(int *arreglo, int largo){
  for(int i = 0; i < largo; i++){
    for(int j = 0; i < largo - 1; j++){
      if(arreglo[j] > arreglo[j + 1]){
        int auxiliar = arreglo[j];
        arreglo[j] = arreglo[j + 1];
        arreglo[j + 1] = auxiliar;
      }
    }
  }
}
```

<div style="width:50%;font-size:30px;padding:20px;box-sizing:border-box;">

Responder:

1. ¿Qué hace el algoritmo anterior?
2. ¿Cuál es la cantidad de iteraciones en el mejor caso y en el peor caso?
3. ¿A qué notación de O grande pertenece?

</div>

</div>