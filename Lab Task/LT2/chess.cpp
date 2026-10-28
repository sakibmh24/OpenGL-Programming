
#include <windows.h>
#include <GL/glut.h>

void display() {

    glClearColor(1.0f, 0.96f, 0.86f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, 0.8f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.2f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, 0.8f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(0.8f, 0.6f);
    glVertex2f(0.6f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.8f, 0.8f);
    glVertex2f(1.0f, 0.8f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(0.8f, 0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.4f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.8f, 0.6f);
    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.6f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(0.8f, 0.4f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, 0.4f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.2f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.8f, 0.4f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.8f, 0.4f);
    glVertex2f(1.0f, 0.4f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.6f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.6f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, 0.2f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("OpenGL Setup Test:Chess Board");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}



