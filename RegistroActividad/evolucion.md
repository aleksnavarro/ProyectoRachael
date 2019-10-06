# Proyecto _Rachel_: bitácora


## 22 septiembre 2019
Se hizo una prueba con el documento `eyetracker.cpp`, llegando al mismo resultado en el que la ventana de la webcam se cerraba.
El código viene de la [esta liga](https://picoledelimao.github.io/blog/2017/01/28/eyeball-tracking-for-mouse-control-in-opencv/).
En la cuál, en la función `main` existía un error dentro en la cual impedía que la ventana permaneciera abierta. No había un control para evitar su salida y cierre.

Se busco una alternativa para leer la imagen desde la cámara web, y se encontro en el [este enlace](https://answers.opencv.org/question/148407/capture-and-save-with-2-webcams-c/). La solución propuesta funciona para dos cámaras conectadas, **lo que podría ser útil más adelante**.

Se reviso este código usando un archivo en `/Prueba 2/eyedetector.cpp`, que logro abrir la ventana con la cámara web. Se adapto de la función `main` de `eyedetector.cpp` a la misma función en `eyetracker.cpp`. Esta prueba tuvo éxito después de realizar algunos ajustes de las variables.

Se hizo la prueba con `eyetracker.cpp` y finalmente la ventana con la imagen en la cámara pudo abrirse y funciono sin contratiempo con el resto del código. No pude notar si el cursor se movía, puesto que funciona sin gafas (y no veo la pantalla).

Por los resultados mostrados en la terminal se toman demasiados datos a la vez, un objetivo es corregir a una muestra de datos aceptable para evitar posible ruido o torpezas durante la captura.

Falta por lo tanto documentar correctamente usando los comentarios, identar el código y hacerlo más fluido a la vista.
