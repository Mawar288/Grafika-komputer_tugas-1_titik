//MENGGAMBAR TITIK 6 BEDA WARNA

#include <windows.h>
#include <GL/glut.h>

void titik() {
    glPointSize(5.0);
    glBegin(GL_POINTS); //sintaks awal menggambarkan titik

    glColor3f(1.0,0.0,0.0);
    glVertex2i(50,50);

    glColor3f(0.1,1.0,1.0);
    glVertex2i(120,100);

    glColor3f(0.9,0.2,1.0);
    glVertex2i(120,80);

    glColor3f(0.1,0.1,0.1);
    glVertex2i(180,100);

    glColor3f(0.2,0.5,1.0);
    glVertex2i(160,50);

    glColor3f(0.5,1.0,0.5);
    glVertex2i(80,60);

    glEnd(); //mengakhiri gambaran
    glFlush(); //memulai proses penggambaran
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT); //membersihkan buffer
    titik();
    glutSwapBuffers(); //mnukar bgian blkng buffer mgnjadi buffer layar
}

int main (int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(250,250); //posisi window/jendelanya
    glutInitWindowSize(500,500);
    glutCreateWindow("Menggambar 6 Titik Berwarna Beda"); //title bar pd window
    glClearColor(1.0,1.0,1.0,0.0); //warna baground putih
    gluOrtho2D(0.0,500.0,-250,250); //besar titik koordinat dengan range (x,x,y,y)
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
