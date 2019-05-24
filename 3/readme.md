## Práctica 3: Encender y apagar 4 leds de forma consecutiva con sonido.

En la práctica se pretende encender 4 leds y luego emitir un sonido con el buzzer, con la ayuda de un Arduino uno.

Página de simulación online [tinkercad](https://www.tinkercad.com).

<img  width="300" src=ejercicio3a.png>


#### Material y herramientas necesarias:

Aplicación de escritorio ARDUINO IDE.
x1 Arduino uno.
x1 buzzer.
x10 cables macho-hembra.
x4 led.

##### Procedimiento

_En nuestro código utilizamos los siguientes métodos:_

```cpp
  pinMode(pin, mode);
  digitalWrite(pin, value);
  delay(ms);
```

```cpp
  tone(pin, frequency);
```
se le pasan 2 parámetros, el primero será el número del pin que usaremos, en nuestro caso el numero 9, y frequency es el tono.

---

<sub> Miguel Gomez [_@miguel-agq_](https://github.com/miguel-agq). Efrén Alonso [_@efrenenverde_](https://github.com/efrenenverde). Iago Sieiro [_@pachecards_](https://github.com/Pachecards). </sub>
