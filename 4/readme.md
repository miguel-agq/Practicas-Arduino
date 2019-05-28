## Práctica 4: Mover un servo motor

En la práctica se pretende mover un servo motor.

Página de simulación online [tinkercad](https://www.tinkercad.com).

<img  width="300" src=ejercicio4a.png>


#### Material y herramientas necesarias:

Aplicación de escritorio ARDUINO IDE.
x1 Arduino uno.
x1 servo motor.
x3 cables macho-hembra.

##### Procedimiento


_En nuestro código utilizamos los siguientes métodos:_

```cpp
  //crear un objeto de tipo Servo
  Servo servo1;
  
  //el pin al que vamos a conectar el servo
  servo1.attach(pin);

  //el angulo que se desea escribir en el servo
  servo1.write(angulo);
```
---

<sub> Miguel Gomez [_@miguel-agq_](https://github.com/miguel-agq). Efrén Alonso [_@efrenenverde_](https://github.com/efrenenverde). Iago Sieiro [_@pachecards_](https://github.com/Pachecards). </sub>