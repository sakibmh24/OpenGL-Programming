
#include <windows.h>
#include <GL/glut.h>

void display() {

    glClearColor(.0f, .0f, .0f, .0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //indonesia
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.05f, 0.9f);
    glVertex2f(0.25f, 0.9f);
    glVertex2f(0.25f, 0.8f);
    glVertex2f(0.05f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, 0.8f);
    glVertex2f(0.25f, 0.8f);
    glVertex2f(0.25f, 0.7f);
    glVertex2f(0.05f, 0.7f);
    glEnd();


    //poland
    glBegin(GL_QUADS);
    glColor3f(1.0f, 01.0f, 1.0f);
    glVertex2f(0.30f, 0.9f);
    glVertex2f(0.50f, 0.9f);
    glVertex2f(0.50f, 0.8f);
    glVertex2f(0.30f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, .0f, .0f);
    glVertex2f(0.30f, 0.8f);
    glVertex2f(0.50f, 0.8f);
    glVertex2f(0.50f, 0.7f);
    glVertex2f(0.30f, 0.7f);
    glEnd();


    //ukraine
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.35f, 0.85f);
    glVertex2f(0.55f, 0.9f);
    glVertex2f(0.75f, 0.9f);
    glVertex2f(0.75f, 0.8f);
    glVertex2f(0.55f, 0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.55f, 0.8f);
    glVertex2f(0.75f, 0.8f);
    glVertex2f(0.75f, 0.7f);
    glVertex2f(0.55f, 0.7f);
    glEnd();

    //nedarlands
    glBegin(GL_QUADS);
    glColor3f(0.68f, 0.0f, 0.0f);
    glVertex2f(0.1f, 0.5f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.1f, 0.4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, 0.4f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.1f, 0.3f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.0f, .22f, .65f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.3f, 0.2f);
    glVertex2f(0.1f, 0.2f);
    glEnd();

    //france
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.22f, 0.65f);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.4559f, 0.5f);
    glVertex2f(0.4567f, 0.2f);
    glVertex2f(0.4f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.4559f, 0.5f);
    glVertex2f(0.5198f, 0.5f);
    glVertex2f(0.5209f, 0.2f);
    glVertex2f(0.4567f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.68f, 0.0f, 0.0f);
    glVertex2f(0.5198f, 0.5f);
    glVertex2f(0.5774f, 0.5f);
    glVertex2f(0.5806f, 0.2f);
    glVertex2f(0.5209f, 0.2f);
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("OpenGL Setup Test:Flag");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

