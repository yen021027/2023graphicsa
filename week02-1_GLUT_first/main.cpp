#include <GL/glut.h>
void display()
{
    glColor3f(0,1,0);///step01-2綠色
    glutSolidTeapot( 0.5 );///step01-2畫出一個實心大茶壺，它的大小為0.5


    glColor3f(1,1,0);///step01-1黃色
    glutSolidTeapot( 0.3 );///step01-1畫出一個實心小茶壺，它的大小為0.3
    glutSwapBuffers();///step01-1請GLUT把畫面swap送到顯示的地方
}
int main(int argc, char *argv[])
{///上面是特別的main()函式，有很多參數
	glutInit(&argc, argv);///把GLUT開起來
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	//上面這行，把顯示設定好
	glutCreateWindow("GLUT Shapes");//要開視窗
	glutDisplayFunc(display);//要顯示對應函式
	glutMainLoop();//最後用main迴圈，壓在最後面
}
