## Práctica 2: Encender y apagar 3 leds de forma consecutiva

En la práctica se pretende encender de forma consecutiva 3 leds de colores, con la ayuda de un Arduino uno.

Página de simulación online [tinkercad](https://www.tinkercad.com).

<img  width="300" src=ejercicio2a.png>


#### Material y herramientas necesarias:

Aplicación de escritorio ARDUINO IDE.
x1 Arduino uno.
x3 resistencias.
x4 cables macho-hembra.
x3 led.

##### Procedimiento

Para realizar esta práctica se conecta el led al arduino por medio de los cables, el led que tiene dos patitas, una larga (conectada al pin 13) y una corta (conectada a tierra), pero a diferencia del caso anterior para que los led funcionen correctamente y no le demos demasiada electricidad
usaremos resistencias para nuestra conexión de tierra


_En nuestro código utilizamos los siguientes métodos:_

```cpp
  pinMode(pin, mode);
``` 
se le pasan 2 parámetros, el primero será el número del pin que usaremos, en nuestro caso el número 13, y el segundo parámetro es el modo , este puede ser de INPUT, de OUTPUT y de INPUT_PULLUP,  no retorna nada.

En nuestra demostración usaremos el modo OUTPUT ya que el led solo recibe.

```cpp
  digitalWrite(pin, value);
```
se le pasan 2 parámetros, el primero será el número del pin que usaremos, en nuestro caso el número 13, y el segundo el parámetro de su valor, este puede ser, HIGH o LOW.

En nuestra demostración usaremos los dos valores, el HIGH para encender nuestro led y el LOW para apagarlo.

```cpp
  delay(ms);
```
se le pasa un parámetro, que viene a ser en milisegundos, el método lo que hace es “esperar” o “dormir” durante ese periodo de tiempo.

Se usara pasa mantener la luz apagada y encendida durante un intervalo de tiempo deseado. 

---

En la siguiente versión 2b se modifica el código para darle un intervalo de cambio más corto, que gracias a un bucle for esta se estará incrementando poco a poco para obtener una velocidad entre cada luz más rápida hasta llegar a un límite de 100ms

En la versión 2c se vuelve a modificar el código para lograr que las tres luces se enciendan y apaguen de forma sincronizada y lo realicen todas juntas.

En la versión 2d se vuelve a modificar el código para lograr que las tres luces se enciendan y apaguen con un patrón distinto, que dos enciendan al mismo tiempo y luego de que se apaguen se encienda la tercera.

<sub> Miguel Gomez [_@miguel-agq_](https://github.com/miguel-agq). Efrén Alonso [_@efrenenverde_](https://github.com/efrenenverde). Iago Sieiro [_@pachecards_](https://github.com/Pachecards). </sub>
