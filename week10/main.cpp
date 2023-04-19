#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glTexCoord2f(0,0); glVertex2f(-1,+1);
        glTexCoord2f(1,0); glVertex2f(+1,+1);
        glTexCoord2f(1,1); glVertex2f(+1,-1);
        glTexCoord2f(0,1); glVertex2f(-1,-1);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week09 texture");

    glutDisplayFunc(display);
    myTexture("earth.jpg");

    glutMainLoop();
}
