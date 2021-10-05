# Algebra_abstracta_2021_2: Euclides extendido

En el programa se encuentra una funcion Euclides extendido que lleva toda la teoria vista en clase, ademas del main.

PARA EJECUTARLO:
  - Unicamente se debe ingresar dos valores de entrada a y b en ese orden

EJEMPLO Y RESULTADO ESPERADO:
  - En caso la entrada sea a=141, b=96
  - El resultado esperado sera gcd(141,96)=3, x=15, y=-22
  

![image](https://user-images.githubusercontent.com/70384384/135956619-09071e89-6a10-4072-9a66-29f3c6b261de.png)


EXPLICACION DEL PROGRAMA:

En la funcion tenemos 5 parametros de entrada de los cuales 2 de ellos son los valores de los cuales se desea calcular el gcd (a y b) mientras que los otros 3 que los encontramos como punteros son las variables encargadas de almacenar la respuesta (d=gcd(a,b), (x,y) de ax+by).
  
  1. La función esta hecha de manera recursiva
  2. Apoyados en dos variables auxiliares para almacenar los valores con los que calculamos (x,y)
  3. Usamos el caso base en el que la variable b es divisor de a
  4. En caso no lo sea, llamamos la función nuevamente haciendo uso de la recursividad y luego del llamado (IMPORTANTE) almacenamos los valores necesarios para conseguir hallar la variable y
  5. aplicamos la formula y=x'-(a/b)y' para de esta manera obtener el resultado deseado luego de la ejecución
 
 En el caso de la funcion main:
   1. Declaramos las variables
   2. Pedimos que se ingrese unicamente a y b
   3. LLamamos a la funcion de Euclides extendido
   4. Retornamos las respuestas a travez de un cout 
