#include <windows.h>
#include <GL/glut.h>
void display() {

    glClearColor(0.55f, 0.80f, 0.87f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    //ground rectangle
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(-1.0f, -.6f);
    glVertex2f(1.0f, -.6f);
    glVertex2f(1.0f, -1.0f);
    glEnd();

    //walk path
    glBegin(GL_POLYGON);
    glColor3f(0.65f, 0.65f, 0.65f);
    glVertex2f(-0.15f, -0.6f);
    glVertex2f(0.15f, -0.6f);
    glVertex2f(0.244f, -1.0f);
    glVertex2f(-0.244f, -1.0f);
    glEnd();

    //whole house
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.88f, 0.70f);
    glVertex2f(-.5f, -.6f);
    glVertex2f(-.5f, .8f);
    glVertex2f(.5f, .8f);
    glVertex2f(.5f, -0.6f);
    glEnd();

    //1st floor divider
    glBegin(GL_POLYGON);
    glColor3f(0.85f, 0.70f, 0.50f);
    glVertex2f(-0.525f, -0.09f);
    glVertex2f(0.525f, -0.09f);
    glVertex2f(0.525f, -0.20f);
    glVertex2f(-0.525f, -0.20f);
    glEnd();

    //Top floor divider
    glBegin(GL_POLYGON);
    glColor3f(0.85f, 0.70f, 0.50f);
    glVertex2f(-0.525f, 0.9f);
    glVertex2f(0.525f, 0.9f);
    glVertex2f(0.525f, 0.8f);
    glVertex2f(-0.525f, 0.8f);
    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(-.15f, -.3f);
    glVertex2f(0.15, -.3f);
    glVertex2f(0.15f, -.6f);
    glVertex2f(-.15f, -.6f);
    glEnd();


    // Left lower window
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(-0.42f, -0.32f);
    glVertex2f(-0.34f, -0.32f);
    glVertex2f(-0.34f, -0.52f);
    glVertex2f(-0.42f, -0.52f);
    glEnd();

    // Right lower window
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(0.34f, -0.32f);
    glVertex2f(0.42f, -0.32f);
    glVertex2f(0.42f, -0.52f);
    glVertex2f(0.34f, -0.52f);
    glEnd();



    // ===== UPPER FLOOR: FIRST ROW =====

// Window 1 - Left
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(-0.40f, 0.55f);
    glVertex2f(-0.32f, 0.55f);
    glVertex2f(-0.32f, 0.33f);
    glVertex2f(-0.40f, 0.33f);
    glEnd();

    // Window 2 - Middle
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(-0.04f, 0.55f);
    glVertex2f(0.04f, 0.55f);
    glVertex2f(0.04f, 0.33f);
    glVertex2f(-0.04f, 0.33f);
    glEnd();

    // Window 3 - Right
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(0.32f, 0.55f);
    glVertex2f(0.40f, 0.55f);
    glVertex2f(0.40f, 0.33f);
    glVertex2f(0.32f, 0.33f);
    glEnd();


    // ===== UPPER FLOOR: SECOND ROW =====
// Window 4 - Left
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(-0.40f, 0.18f);
    glVertex2f(-0.32f, 0.18f);
    glVertex2f(-0.32f, -0.02f);
    glVertex2f(-0.40f, -0.02f);
    glEnd();

    // Window 5 - Middle
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(-0.04f, 0.18f);
    glVertex2f(0.04f, 0.18f);
    glVertex2f(0.04f, -0.02f);
    glVertex2f(-0.04f, -0.02f);
    glEnd();

    // Window 6 - Right
    glBegin(GL_POLYGON);
    glColor3f(0.05f, 0.68f, 0.78f);
    glVertex2f(0.32f, 0.18f);
    glVertex2f(0.40f, 0.18f);
    glVertex2f(0.40f, -0.02f);
    glVertex2f(0.32f, -0.02f);
    glEnd();


    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Building");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}


