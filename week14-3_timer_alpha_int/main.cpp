#include <GL/glut.h>
float angle=0,oldangle=0,newangle=0; ///宣告變數
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)///timer()函式,做對應動作
{
    if(t<100) glutTimerFunc(50,timer,t+1);
    float alpha = t/100.0;///變成float值介於0.00~1.00之間
    angle = newangle*alpha +(1-alpha) * oldangle;
    glutPostRedisplay();///重畫畫面
}
void motion(int x,int y)
{
    angle = x;///即時更新角度
    glutPostRedisplay();///重畫畫面
}
void mouse(int button,int state,int x,int y)
{
    if(state==GLUT_DOWN) oldangle=x;///放下去
    if(state==GLUT_UP) newangle=x;///放開來
    glutPostRedisplay();///重畫畫面
}
void keyboard(unsigned char key,int x,int y)
{
    glutTimerFunc(0,timer,0);///設定timer函式

}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE |GLUT_DEPTH);
    glutCreateWindow("week14");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///按下去表示起點
    glutMotionFunc(motion);///當mouse在motion時，即時更新畫面
    glutKeyboardFunc(keyboard);///keyboard()

    glutMainLoop();
}
