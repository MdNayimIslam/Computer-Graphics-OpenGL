#include <GLUT/glut.h>

void display1() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.6, -0.75);
        glVertex2f(0.6, -0.75);
        glVertex2f(0, 0.75);
    glEnd();
    
    glFlush();
}

void display2() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_LINES);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, -0.5f);
    
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f, 0.5f);
        
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        
        glVertex2f(0.5f, 0.5f);
        glVertex2f(-0.5f, 0.5f);
            
        glEnd();
        
        glFlush();
    }

void display3() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.9, -0.0);
    glEnd();
    
    glFlush();
}

void display4() {
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(-0.5, 0.5);
        glEnd();
    
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    
    glutCreateWindow("A Simple Triangle");
    glutInitWindowPosition(80, 80);
    glutInitWindowSize(400, 300);
    glutDisplayFunc(display1);
    
    glutCreateWindow("A Simple LINES");
    glutInitWindowPosition(80, 80);
    glutInitWindowSize(400, 300);
    glutDisplayFunc(display2);
    
    glutCreateWindow("A Simple Polygon");
    glutInitWindowPosition(80, 80);
    glutInitWindowSize(400, 300);
    glutDisplayFunc(display3);
    
    glutCreateWindow("A Simple QUADS");
    glutInitWindowPosition(80, 80);
    glutInitWindowSize(400, 300);
    glutDisplayFunc(display4);
    
    glutMainLoop();
    return 0;
}
