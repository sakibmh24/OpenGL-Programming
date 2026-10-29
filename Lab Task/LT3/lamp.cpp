#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Lamp Base
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.37f, 0.08f);
    glVertex2f(0.63f, 0.08f);
    glVertex2f(0.63f, 0.13f);
    glVertex2f(0.37f, 0.13f);
    glEnd();


    // Lamp Pole
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.47f, 0.12f);
    glVertex2f(0.526f, 0.12f);
    glVertex2f(0.526f, 0.75f);
    glVertex2f(0.47f, 0.75f);
    glEnd();


    // Lamp Roof down
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.43f, 0.74f);
    glVertex2f(0.56f, 0.74f);
    glVertex2f(0.56f, 0.75f);
    glVertex2f(0.43f, 0.75f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.40f, 0.85f);
    glVertex2f(0.60f, 0.85f);
    glVertex2f(0.60f, 0.78f);
    glVertex2f(0.55f, 0.74f);
    glVertex2f(0.45f, 0.74f);
    glVertex2f(0.40f, 0.78f);
    glEnd();

    /*
   // Roof Peak
   glBegin(GL_TRIANGLES);
   glColor3f(0.40f, 0.43f, 0.47f);
   glVertex2f(0.47f, 0.90f);
   glVertex2f(0.53f, 0.90f);
   glVertex2f(0.50f, 0.97f);
   glEnd();

   // Left Glass
   glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.90f, 0.45f);
   glVertex2f(0.36f, 0.75f);
   glVertex2f(0.48f, 0.75f);
   glVertex2f(0.48f, 0.48f);
   glVertex2f(0.41f, 0.48f);
   glEnd();

   // Right Glass
   glBegin(GL_POLYGON);
   glColor3f(1.0f, 0.90f, 0.45f);
   glVertex2f(0.52f, 0.75f);
   glVertex2f(0.64f, 0.75f);
   glVertex2f(0.59f, 0.48f);
   glVertex2f(0.52f, 0.48f);
   glEnd();

   // Lamp Frame
   glBegin(GL_LINE_LOOP);
   glColor3f(0.55f, 0.58f, 0.62f);
   glVertex2f(0.33f, 0.77f);
   glVertex2f(0.67f, 0.77f);
   glVertex2f(0.61f, 0.45f);
   glVertex2f(0.39f, 0.45f);
   glEnd();

   // Bottom Cap
   glBegin(GL_POLYGON);
   glColor3f(0.25f, 0.28f, 0.32f);
   glVertex2f(0.38f, 0.45f);
   glVertex2f(0.62f, 0.45f);
   glVertex2f(0.58f, 0.41f);
   glVertex2f(0.42f, 0.41f);
   glEnd();
  */

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitWindowSize(500, 500);
    glutCreateWindow("Street Lamp");

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}