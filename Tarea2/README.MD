# Proyecto Triángulo Equilátero
## Henry Galuè 14-10373

Este proyecto, realizado en Windows, contiene tres implementaciones de un triángulo equilátero con colores en sus vértices (rojo, verde y azul) y un fondo oscuro. Estas, están divididas en las siguientes tecnologías:

- **OpenGL**
- **Three.js**
- **WebGL2**

Cada carpeta contiene los archivos necesarios para ejecutar el triángulo.

## Requisitos previos

### OpenGL
- **CMake**: Para compilar el proyecto.
- **vcpkg**: Tener instalado `glfw` y `glad` usando `vcpkg` para gestionar las dependencias.
- **Visual Studio** (o cualquier compilador compatible con CMake).
  
### Three.js
- Navegador web moderno (Chrome, Firefox, Edge) que soporte módulos ES6.
  
### WebGL2
- Navegador web moderno con soporte para WebGL2.

## Cómo ejecutar cada implementación

### 1. OpenGL

#### Descripción
Esta implementación utiliza **OpenGL** y **GLFW** para renderizar un triángulo equilátero en una ventana.

#### Pasos para ejecutar
1. Instala `vcpkg` y asegúrate de tener `glfw3` y `glad` instalados:

    vcpkg install glfw3 glad

2. Abre una terminal y navega a la carpeta `OpenGL`.

3. Ejecuta los siguientes comandos para compilar y ejecutar el proyecto:

    #### mkdir build
    #### cd build
    #### cmake .. -DCMAKE_TOOLCHAIN_FILE=C:/Users/Henry/vcpkg/scripts/buildsystems/vcpkg.cmake 
    (Ya que tengo instalada la carpeta vcpkg en la ruta C:/Users/Henry/vcpkg/scripts/buildsystems/vcpkg.cmake)
    #### cmake --build .
    #### cd debug
    #### OpenGLProject.exe


#### Archivos relevantes
- `CMakeLists.txt`: Archivo de configuración de CMake.
- `triangulo.cpp`: Código fuente en C++ con OpenGL.

### 2. Three.js

#### Descripción
Esta implementación utiliza **Three.js**, una biblioteca de JavaScript para gráficos 3D en el navegador, para renderizar el triángulo equilátero en una página web.

#### Pasos para ejecutar
1. Abre el archivo `triangulojs.html` en cualquier navegador moderno que soporte ES6 (módulos JavaScript).
2. El archivo HTML incluye todo el código necesario.

#### Archivos relevantes
- `triangulojs.html`: Página web con el código de Three.js para renderizar el triángulo.

### 3. WebGL2

#### Descripción
Esta implementación utiliza **WebGL2** directamente, lo que permite renderizar gráficos 2D y 3D en un navegador compatible sin bibliotecas adicionales.

#### Pasos para ejecutar
1. Abre el archivo `triangulowg.html` en un navegador moderno compatible con WebGL2.
2. Al igual que con Three.js, no se requiere nada extra para ejecutar este archivo.

#### Archivos relevantes
- `triangulowg.html`: Página web con el código WebGL2 para renderizar el triángulo.



