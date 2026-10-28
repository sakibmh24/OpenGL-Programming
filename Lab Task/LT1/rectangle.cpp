

#include <windows.h>
#include <GL/glut.h>
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(7.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(.2f, .2f);
    glVertex2f(.4f, .2f);
    glVertex2f(.4f, .2f);
    glVertex2f(.4f, .0f);
    glVertex2f(.4f, .0f);
    glVertex2f(.2f, .0f);
    glVertex2f(.2f, .0f);
    glVertex2f(.2f, .2f);
    glEnd();
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Setup Test");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


