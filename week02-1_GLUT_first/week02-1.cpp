#include <GL/glut.h>
void display()
{
    glColor3f(0,1,0);///step01-2���
    glutSolidTeapot( 0.5 );///step01-2�e�X�@�ӹ�ߤj�����A�����j�p��0.5


    glColor3f(1,1,0);///step01-1����
    glutSolidTeapot( 0.3 );///step01-1�e�X�@�ӹ�ߤp�����A�����j�p��0.3
    glutSwapBuffers();///step01-1��GLUT��e��swap�e����ܪ��a��
}
int main(int argc, char *argv[])
{///�W���O�S�O��main()�禡�A���ܦh�Ѽ�
	glutInit(&argc, argv);///��GLUT�}�_��
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	//�W���o��A����ܳ]�w�n
	glutCreateWindow("GLUT Shapes");//�n�}����
	glutDisplayFunc(display);//�n��ܹ����禡
	glutMainLoop();//�̫��main�j��A���b�̫᭱
}
