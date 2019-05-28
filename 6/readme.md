## Práctica 6: Sensor de proximidad.

En la práctica se pretende utilizar un sensor de proximidad que detecte objetos a 20 centímetros de distancia y encienda un led.

Página de simulación online [tinkercad](https://www.tinkercad.com).

<img  width="300" src=ArduinoUnoEx6Schema.png>


#### Material y herramientas necesarias:

Aplicación de escritorio ARDUINO IDE.
x1 Arduino uno.
x1 Sensor de proximidad.
x6 cables macho-hembra.
x1 resistencia.

##### Procedimiento


_En nuestro código utilizamos los siguientes métodos:_

```cpp
  // configura la velocidad de datos para la transición de datos en baudios
  // se usa para imprimir datos con Serial.print();
  Serial.begin(9600);
  
  digitalWrite(TriggerPin, LOW);  //para generar un pulso limpio ponemos a LOW 4us
  delayMicroseconds(4);
  digitalWrite(TriggerPin, HIGH);  //generamos Trigger (disparo) de 10us
 
 ```
---

<sub> Miguel Gomez [_@miguel-agq_](https://github.com/miguel-agq). Efrén Alonso [_@efrenenverde_](https://github.com/efrenenverde). Iago Sieiro [_@pachecards_](https://github.com/Pachecards). </sub>