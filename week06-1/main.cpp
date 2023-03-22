#include <GL/glut.h>

float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.02,30,30);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glTranslatef(0.46,0.05,0);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
glPushMatrix();
glTranslated(-1,1,0)
glRotated(-45,0,0,1);
glTranslated(0.5,,0);
drawHand();
glPopMatrix();
