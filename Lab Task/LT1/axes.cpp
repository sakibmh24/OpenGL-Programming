#include<windows.h>
#include<GL/glut.h>

void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(.5);

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);

    glVertex2f(0.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, 0.5f);
    glVertex2f(-0.2f, 0.5f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.5f, 0.2f);
    glEnd();

    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(.2f, .4f);
    glVertex2f(.6f, .4f);
    glVertex2f(.6f, .6f);
    glVertex2f(.2f, .6f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(.6f, .7f);
    glVertex2f(.6f, .3f);
    glVertex2f(.88f, .5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.45f, 0.15f, 0.65f);

    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-0.2f, -0.1f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.2f, -0.6f);
    glVertex2f(0.6f, -0.6f);
    glVertex2f(0.4f, -0.2f);

    glEnd();


    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


