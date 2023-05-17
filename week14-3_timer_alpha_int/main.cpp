#include <GL/glut.h>
float angle=0,oldangle=0,newangle=0; ///�ŧi�ܼ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)///timer()�禡,�������ʧ@
{
    if(t<100) glutTimerFunc(50,timer,t+1);
    float alpha = t/100.0;///�ܦ�float�Ȥ���0.00~1.00����
    angle = newangle*alpha +(1-alpha) * oldangle;
    glutPostRedisplay();///���e�e��
}
void motion(int x,int y)
{
    angle = x;///�Y�ɧ�s����
    glutPostRedisplay();///���e�e��
}
void mouse(int button,int state,int x,int y)
{
    if(state==GLUT_DOWN) oldangle=x;///��U�h
    if(state==GLUT_UP) newangle=x;///��}��
    glutPostRedisplay();///���e�e��
}
void keyboard(unsigned char key,int x,int y)
{
    glutTimerFunc(0,timer,0);///�]�wtimer�禡

}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE |GLUT_DEPTH);
    glutCreateWindow("week14");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///���U�h��ܰ_�I
    glutMotionFunc(motion);///��mouse�bmotion�ɡA�Y�ɧ�s�e��
    glutKeyboardFunc(keyboard);///keyboard()

    glutMainLoop();
}
