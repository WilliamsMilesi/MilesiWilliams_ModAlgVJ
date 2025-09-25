#ifndef NDEBUG
#endif

#include "raylib.h"

int main(void)
{
    // Inicializamos una ventana de 800x450 píxeles con un título personalizado
    InitWindow(800, 450, "Proyecto NAVI");

    // Configuramos el framerate deseado (opcional, pero recomendado)
    SetTargetFPS(60);

    // Bucle principal del juego (se repite hasta que se cierre la ventana)
    while (!WindowShouldClose())
    {
        // Iniciamos la etapa de dibujo
        BeginDrawing();

        // Limpiamos la pantalla con un color violeta personalizado
        Color violeta = { 110, 100, 215, 255 };
        ClearBackground(violeta);


        // Dibujamos un texto centrado
        Color blanco = { 255, 255, 255, 255 };
        DrawText("¡Felicitaciones, ejecutaste tu primer proyecto con Raylib!", 90, 200, 20, blanco);


        // Dibujamos un rectángulo a modo decorativo
        DrawRectangle(80, 190, 650, 40, Fade(PURPLE, 0.2f)); // Fondo semitransparente para resaltar el texto

        // Finalizamos el dibujo
        EndDrawing();
    }

    // Cerramos la ventana y liberamos recursos
    CloseWindow();

    return 0;
}
