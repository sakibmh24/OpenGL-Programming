#include <windows.h>
#include <GL/glut.h>
void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, .0f, .0f);

    glVertex2f(.4f, .6f);
    glVertex2f(.7f, .6f);
    glVertex2f(.8f, .2f);
    glVertex2f(.3f, .2f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, .0f, .0f);
    glVertex2f(.4f, .6f);
    glVertex2f(.7f, .6f);

    glVertex2f(.7f, .6f);
    glVertex2f(.8f, .2f);

    glVertex2f(.8f, .2f);
    glVertex2f(.3f, .2f);

    glVertex2f(.3f, .2f);
    glVertex2f(.4f, .6f);
    glEnd();

    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Vertex,Primitive&Color");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}


