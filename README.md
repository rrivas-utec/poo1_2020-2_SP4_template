# Set de Problemas #4

Ejercicios sobre estructuras de control repetitivas del curso de programación orientada a objetos 1 (CS1102).

## Ejercicio #1 - Triangulo Espejo  

### Problem Statement  

Escribir la función `triangulo_espejo` cuyos parametros son: la altura (`int`) y el carácter (`char`) con el que dibujará un triángulo rectángulo alineado a la derecha y mostrara al final el número de caracteres que contiene el triangulo. 

#### Input Format  

```cpp
5
+
```

#### Constraints  

```cpp
No utizar etiquetas
```

#### Output Format

```
    +
   ++
  +++
 ++++
+++++
La cantidad de + es: 15
```
#### Ejemplo 1
**Input**
```cpp
1
+
```
**Output**
```cpp
+
La cantidad de + es: 1
```
#### Ejemplo 2
**Input**
```cpp
0
@
```
**Output**
```
La cantidad de @ es: 0
```
#### Ejemplo 3
**Input**
```cpp
10
#
```
**Output**
```
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
La cantidad de # es: 55
```

## Ejercicio #2 - Triangulo Binario Invertido  

### Problem Statement

Escribir la función `triangulo_binario` que tenga como parametro un valor `n` y que imprima un triángulo rectángulo invertido de valores binarios (0s y 1s) de altura `n` como se muestra a continuación:

n = 5
```
10101 
0101 
101 
01 
1
```
n = 4
```
0101 
101 
01 
1
```
#### Input Format
```cpp
9
```
Constraints
```
- No debe utilizarse etiquetas (std::cout) para ingresar los valores
- El parametro n debe ser positivo
```
Output Format
```
101010101
01010101
1010101
010101
10101
0101
101
01
1
```
#### Ejemplo 1
**Input**
```cpp
1
```
**Output**
```
1
```
#### Ejemplo 2
**Input**
```cpp
6
```
**Output**
```
010101
10101
0101
101
01
1
```

## Ejercicio #3 - Guerra de digitos

### Problem Statement  
Empezando desde la izquierda de un entero y tomando de 2 en 2 los digitos iniciar lo que se denominará **`la guerra de los digitos`**, que consiste en comparar los 2 digitos y aquel dígito que sea mayor gana una batalla y si ambos son iguales ambos pierden la batalla, en caso de que quedara algún dígito solo, ese dígito gana. 

Desarrollar la función `guerra_digitos` que tenga como parametros un número retorne los digitos ganadores.

Ejemplo
```cpp
135224
```

Los ganadores serian: `354`  
```
De 3,1 -> 3, De 5,2 -> 5, De 2,4 -> 4
```
Input Format
```cpp
194749368
```
Constraints
```
- Números enteros grandes
- No utilizar etiquetas
```
Output Format
```
97968
```
#### Ejemplo 1
**Input**
```cpp
483972847
```
**Output**
```
89787
```
#### Ejemplo 2
**Input**
```cpp
2
```
**Output**
```
2
```
## Ejercicio #4 - Contar digitos

### Problem Statement
Escribir una función `contar_digitos` que tenga como parametro un número y que retorne un nuevo número que incluya por cada dígito la cantidad de veces que se repite el dígito.

Ejemplo:
  
Para el número `112444` el nuevo número generado por la función es: `211234` donde el primer dígito (`2`) representa la veces que se repite el dígito `1` y el segundo `1` representa las veces que se repite en el número original el valor de `2` y el `3` las veces que se repite el dígito `4`.  


## Input Format
```cpp
12233344445
```
## Constraints
```
- No utilizar etiquetas
- El número a ingresar debe ser positivo y grandes
```
## Output Format
```
1122334415
```
#### Ejemplo 1
**Input**
```cpp
1
```
**Output**
```
11
```
#### Ejemplo 2
**Input**
```cpp
1234
#
-
```
**Output**
```
11121314
```
#### Ejemplo 3
**Input**
```cpp
1112334
#
-
```
**Output**
```
31122314
```

## Ejercicio #5 - Invertir texto - Recursividad

### Problem Statement
Utilizando recursividad escribir una función `invertir_texto` cuyo parametro sea un texto y que retorne el texto de forma reversa.

Ejemplo: 

- Si el texto es `hola` debe retornar `aloh`

### Input Format
```cpp
peru
```
### Constraints
```
- No utilizar etiquetas
```
### Output Format
```
urep
```
#### Ejemplo 1
**Input**
```cpp
hola mundo
```
**Output**
```
odnum aloh
```
#### Ejemplo 2
**Input**
```cpp
universidad
```
**Output**
```
dadisrevinu
```