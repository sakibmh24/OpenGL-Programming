#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
float angle1 = 0.0f;
float _move = 0.0f;
void circle(float r, float g, float b, float radius, float xc, float yc)
{
    glMatrixMode(GL_MODELVIEW);

    glBegin(GL_POINTS);// Draw a Red 1x1 Square centered at origin
    for (int i = 0;i < 200;i++)
    {
        glColor3ub(r, g, b);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xc, y + yc);
    }
    glEnd();

}
void wheel1()
{
    glPointSize(2);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.3, 0.2, 0);
    glRotatef(angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-0.3, -0.2, 0);
    circle(255, 0, 255, 0.1, 0.3, 0.2);
    glPopMatrix();
}

void wheel2()
{
    glPointSize(2);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.7, 0.2, 0);
    glRotatef(angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-0.7, -0.2, 0);
    circle(255, 0, 255, 0.1, 0.7, 0.2);
    glPopMatrix();
}
void box(float r, float g, float b)
{
    glColor3ub(r, g, b);
    glBegin(GL_POLYGON);
    glVertex2f(0.2, 0.6);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.8, 0.2);
    glVertex2f(0.8, 0.6);
    glEnd();
}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void updateWheelRotation(int a)
{
    angle1 += 2.0f;
    glutPostRedisplay();
    glutTimerFunc(20, updateWheelRotation, 0);
}
void car()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0, 0);
    box(255, 0, 0);
    wheel1();
    wheel2();
    glPopMatrix();
}
void updatCar(int a)
{
    _move += 0.02f;
    glutPostRedisplay();
    glutTimerFunc(20, updatCar, 0);
    if (_move > 1)
    {
        _move = -1;
    }
}
void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    //box(255,0,0);
    //wheel1();
    //wheel2();
    car();
    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Setup Test");
    //gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
    glutInitWindowSize(320, 320);// Set the window's initial width & height
    glutDisplayFunc(display);// Register display callback handler for window re-paint
    glutTimerFunc(20, updateWheelRotation, 0);
    glutTimerFunc(20, updatCar, 0);
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
