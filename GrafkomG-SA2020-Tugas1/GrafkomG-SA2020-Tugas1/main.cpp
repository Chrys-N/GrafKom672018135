#include <gl/glut.h>
void userdraw()
{
    //atap
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(300, 400);
    glVertex2i(200, 300);
    glVertex2i(400, 300);
    glEnd();

    //tembok
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(200, 100);
    glVertex2i(200, 300);
    glVertex2i(400, 300);
    glVertex2i(400, 100);
    glEnd();

    //jendela1
    glColor3f(4, 0, 2);
    glBegin(GL_POLYGON);
    glVertex2i(210, 165);
    glVertex2i(240, 165);
    glVertex2i(240, 260);
    glVertex2i(210, 260);
    glEnd();

    //pintu
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(250, 100);
    glVertex2i(350, 100);
    glVertex2i(350, 250);
    glVertex2i(250, 250);
    glEnd();

    //jalan
    glBegin(GL_POLYGON);
    glVertex2i(250, 90);
    glVertex2i(350, 90);
    glVertex2i(350, 60);
    glVertex2i(250, 60);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(260, 50);
    glVertex2i(360, 50);
    glVertex2i(360, 20);
    glVertex2i(260, 20);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(270, 10);
    glVertex2i(370, 10);
    glVertex2i(370, 0);
    glVertex2i(270, 0);
    glEnd();

    //jendela2
    glColor3f(4, 0, 2);
    glBegin(GL_POLYGON);
    glVertex2i(360, 165);
    glVertex2i(390, 165);
    glVertex2i(390, 260);
    glVertex2i(360, 260);
    glEnd();

    //pagar kiri
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(65, 170);
    glVertex2i(65, 50);
    glVertex2i(55, 50);
    glVertex2i(55, 170);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(115, 170);
    glVertex2i(115, 50);
    glVertex2i(125, 50);
    glVertex2i(125, 170);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(165, 170);
    glVertex2i(165, 50);
    glVertex2i(175, 50);
    glVertex2i(175, 170);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(15, 105);
    glVertex2i(215, 105);
    glVertex2i(215, 115);
    glVertex2i(15, 115);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(15, 140);
    glVertex2i(215, 140);
    glVertex2i(215, 150);
    glVertex2i(15, 150);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(15, 70);
    glVertex2i(215, 70);
    glVertex2i(215, 80);
    glVertex2i(15, 80);
    glEnd();

    //pagar kanan
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(440, 170);
    glVertex2i(440, 50);
    glVertex2i(430, 50);
    glVertex2i(430, 170);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(535, 170);
    glVertex2i(535, 50);
    glVertex2i(545, 50);
    glVertex2i(545, 170);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(480, 170);
    glVertex2i(480, 50);
    glVertex2i(490, 50);
    glVertex2i(490, 170);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(380, 80);
    glVertex2i(580, 80);
    glVertex2i(580, 70);
    glVertex2i(380, 70);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(380, 140);
    glVertex2i(580, 140);
    glVertex2i(580, 150);
    glVertex2i(380, 150);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(380, 105);
    glVertex2i(580, 105);
    glVertex2i(580, 115);
    glVertex2i(380, 115);
    glEnd();

    //gunung kiri
    glColor3f(0, 0.5, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(0, 200);
    glVertex2i(95, 470);
    glVertex2i(200, 200);
    glEnd();

    //gunung kanan
    glColor3f(0, 0.5, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(640, 200);
    glVertex2i(540, 470);
    glVertex2i(400, 200);
    glEnd();

    //tiang bendera
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(90, 270);
    glVertex2i(90, 30);
    glVertex2i(80, 30);
    glVertex2i(80, 270);
    glEnd();

    //bendera merah
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(90, 270);
    glVertex2i(90, 240);
    glVertex2i(150, 240);
    glVertex2i(150, 270);
    glEnd();

    //bendera putih
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(90, 240);
    glVertex2i(90, 210);
    glVertex2i(150, 210);
    glVertex2i(150, 240);
    glEnd();

    //awan1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(100, 570);
    glVertex2f(70, 550);
    glVertex2f(70, 520);
    glVertex2f(100, 500);
    glVertex2f(140, 500);
    glVertex2f(170, 520);
    glVertex2f(170, 550);
    glVertex2f(140, 570);
    glEnd();

    //awan2
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(300, 490);
    glVertex2f(270, 470);
    glVertex2f(270, 440);
    glVertex2f(300, 420);
    glVertex2f(340, 420);
    glVertex2f(370, 440);
    glVertex2f(370, 470);
    glVertex2f(340, 490);
    glEnd();

    //awan3
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(500, 550);
    glVertex2f(470, 530);
    glVertex2f(470, 500);
    glVertex2f(500, 480);
    glVertex2f(540, 480);
    glVertex2f(570, 500);
    glVertex2f(570, 530);
    glVertex2f(540, 550);
    glEnd();


}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char** argv)

{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(200, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Made By ChrysN");
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    gluOrtho2D(0.0, 800.0, 0.0, 600.0);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}