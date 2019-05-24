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

_En nuestro código utilizamos los siguientes métodos:_

```cpp
  pinMode(pin, mode);
  digitalWrite(pin, value);
  delay(ms);
```
---

En la siguiente versión 2b se modifica el código para darle un intervalo de cambio más corto, que gracias a un bucle for esta se estará incrementando poco a poco para obtener una velocidad entre cada luz más rápida hasta llegar a un límite de 100ms

En la versión 2c se vuelve a modificar el código para lograr que las tres luces se enciendan y apaguen de forma sincronizada y lo realicen todas juntas.

En la versión 2d se vuelve a modificar el código para lograr que las tres luces se enciendan y apaguen con un patrón distinto, que dos enciendan al mismo tiempo y luego de que se apaguen se encienda la tercera.

<sub> Miguel Gomez [_@miguel-agq_](https://github.com/miguel-agq). Efrén Alonso [_@efrenenverde_](https://github.com/efrenenverde). Iago Sieiro [_@pachecards_](https://github.com/Pachecards). </sub>
