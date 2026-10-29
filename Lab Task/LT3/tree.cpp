
#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(.0f, .0f, .0f);
    glVertex2f(0.44f, 0.10f);
    glVertex2f(0.56f, 0.10f);
    glVertex2f(0.56f, 0.32f);
    glVertex2f(0.44f, 0.32f);
    glEnd();

    // Bottom triangle
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.8f, 0.1f);
    glVertex2f(0.08f, 0.32f);
    glVertex2f(0.92f, 0.32f);
    glVertex2f(0.50f, 0.72f);
    glEnd();

    // Middle triangle
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.18f, 0.48f);
    glVertex2f(0.82f, 0.48f);
    glVertex2f(0.50f, 0.86f);
    glEnd();

    // Top triangle
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.28f, 0.64f);
    glVertex2f(0.72f, 0.64f);
    glVertex2f(0.50f, 0.98f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Tree");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
