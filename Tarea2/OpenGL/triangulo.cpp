#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Inicializa OpenGL
void initOpenGL() {
    glClearColor(0.106f, 0.118f, 0.169f, 1.0f); // Fondo oscuro
}

// Renderizar triángulo
void render() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Coordenadas de un triángulo equilátero centrado en el origen
    GLfloat vertices[] = {
         0.0f,   0.87f,  0.0f,  // Vértice 1 (arriba)
        -0.5f,  -0.50f,  0.0f,  // Vértice 2 (abajo izquierda)
         0.5f,  -0.50f,  0.0f   // Vértice 3 (abajo derecha)
    };

    // Colores para cada vértice (Rojo, Verde, Azul)
    GLfloat colors[] = {
        1.0f, 0.0f, 0.0f,   // Rojo en el vértice 1
        0.0f, 1.0f, 0.0f,   // Verde en el vértice 2
        0.0f, 0.0f, 1.0f    // Azul en el vértice 3
    };

    // Habilitar arrays de vértices y colores
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);

    // Definir los punteros de los arrays
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glColorPointer(3, GL_FLOAT, 0, colors);

    // Dibujar el triángulo
    glDrawArrays(GL_TRIANGLES, 0, 3);

    // Deshabilitar los arrays de vértices y colores
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
}

int main() {
    // Inicializar GLFW
    if (!glfwInit()) {
        return -1;
    }

    // Crear una ventana GLFW
    GLFWwindow* window = glfwCreateWindow(800, 600, "Triángulo Equilátero", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Establecer el contexto actual
    glfwMakeContextCurrent(window);

    // Inicializar GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        return -1;
    }

    // Llamar a la función de inicialización de OpenGL
    initOpenGL();

    // Bucle principal
    while (!glfwWindowShouldClose(window)) {
        render();                  // Renderizar el triángulo
        glfwSwapBuffers(window);   // Intercambiar buffers de la ventana
        glfwPollEvents();          // Procesar eventos
    }

    // Finalizar GLFW
    glfwTerminate();
    
    return 0;
}
