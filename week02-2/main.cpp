 #include <GL/glut.h>
    void display()
    {
        glColor3f(247/255.0,247/255.0,247/255.0);
        glBegin(GL_POLYGON);///開始畫多邊形
            glVertex2f(  1, 1 );
            glVertex2f( -1, 1 );
            glVertex2f( -1,-1 );
            glVertex2f(  1,-1 );///頂點Vertex
        glEnd();///結束畫

        glColor3f(244/255.0,209/255.0,33/255.0);
        glBegin(GL_POLYGON);///開始畫多邊形
            glVertex2f( (45-100)/100.0, -(134-100)/100.0);
            glVertex2f( (36-100)/100.0, -(171-100)/100.0 );
            glVertex2f( (108-100)/100.0, -(179-100)/100.0 );
            glVertex2f( (104-100)/100.0, -(117-100)/100.0 );
            ///口訣：減一半,除一半,y變負號
        glEnd();///結束畫

        glutSwapBuffers();///step01-1請GLUT把畫面swap送到顯示的地方
    }

    int main(int argc, char *argv[])
    {   ///上面是特別的main()函式 有很多參數
        glutInit(&argc, argv);///把GLUT開起來
        glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///這行把顯示的模型設定
        glutCreateWindow("GLUT Shapes");///要開視窗
        glutDisplayFunc(display);///要顯示的對應函式
        glutMainLoop();///最後用main迴圈,壓在最後面
    }
