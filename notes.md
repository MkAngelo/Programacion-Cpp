# C++ 

C fue desarrollado por _Dennis Ritchie_ en laboratorios bell mientras se desarrollaba el sistema operativo Unix
En la epoca nisiquiera habian pantallas ni teclados como los actuales, sus resultados eran impresos en hojas de papel.
(somos afortunados por la tecnologia actual)

C++ fue desarrollado por __Bjarne Stroustrup__, quien diseño una version de C pero con el _paradigma orientado a objetos_,
(Sip, c++ es orientado a objetos, recuerdalo bien ya que es una clave para entender el lenguaje)
Esto quiere decir que tiene un mayor nivel de abstracion en comparacion a C

Con C++ a diferencia de C, es posible desarrollar sin entender por completo el funcionamiento electronico de la computadora
aun asi, muchas de las caracteristicas de C++ son heradadas de C.

En los 60 y 70 recien se estaba desarrollando unix, en los 80 ya habian pantallas, sistemas operativos y lenguajes orientados a objetos

## ESTRUCTURA DE UN PROGRAMA

La librería **iostream**, te permite recibir datos de entrada o mostrar datos de salida.

**using namespace std**, te permite utilizar, en el código, nombres estandar de c++, para poder importarlas sin necesidad de escribir desde donde la estamos importando

La función **main**, es la funcion principal de nuestro código. Es lo primero que ejecuta el programa

Para mostrar en pantalla, utilzar 
    
    cout << "Un texto";

__cout__ te permite mostrar en pantalla

## Tipos de datos

- __Bool (Boolean)__:
    Valor logico
    Puede ser Verdadero o Falso
    Tamaño de 4 bytes
- __Int (Integer)__:
    Numero enteros
    Tamaño: 4 Bytes
- __Float__:
    Numeros de decimales (punto flotante)
    Tamaño: 4 bytes
- __Double__:
    Numeros de punto flotante de doble precision
    Tamaño: 8 bytes (4+4 = doble flotante)
a- __Char__ (Character):
    Caracter (ASCII)
    Muestra el caracter o su numero en ASCII
    Tamaño: 4 bytes
    

También tenemos:

    * Short Int
    * Unsign Int
    * Long Double

## Librerias

    * iostream
    * string 

## .cc o .cpp

    En realidad depende mucho del programador, por lo general se usa .cpp cotidianamente, aunque algunos prefieren .cc No existe diferencia puesto que GCC puede compilar ambos archivos
