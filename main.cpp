#include <iostream>
#include <GLUT/glut.h>
#include <OpenGL/OpenGL.h>
float x1, y1, x2, y2, dx,dy, m, p, c;
void display2(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glEnd();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POINTS);
    p=(2*dy)-dx;
    while(x1<=x2 && y1<=y2){
        if(p>=0){
            x1=x1+1;
            y1=y1+1;
            glVertex3f((x1/100), (y1/100), 0.0);
            printf("%0.2f %0.2f\n", x1, y1);
            p = p+(2*dy) - (2*dx);
        }
        else if (p<0){
            x1=x1+1;
            printf("%0.2f %0.2f\n", x1, y1);
            glVertex3f((x1/100), (y1/100), 0.0);
            p = p+(2*dy);
        }
    }
    glEnd();
    glFlush();
}
void display1(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glEnd();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POINTS);
    while(x1<=x2 && y1<=y2){
        if(m < 1){
            x1 = x1 + 1;
            y1 = y1 + m;
            glVertex3f((x1/100), (y1/100), 0.0);
            printf("%0.2f %0.2f\n", x1, y1);
        }
        else if (m > 1){
            x1 = x1 + (1/m);
            y1 = y1 + 1;
            glVertex3f((x1/100), (y1/100), 0.0);
            printf("%0.2f %0.2f\n", x1, y1);
        }
        else{
            x1 = x1 + 1;
            y1 = y1 + 1;
            printf("%0.2f %0.2f\n", x1, y1);
            glVertex3f((x1/100), (y1/100), 0.0);
        }
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    printf("1= DDA\n2= Bressenham\nEnter choise:");
    scanf("%f",&c);
    printf("Enter point x1:");
    scanf("%f",&x1);
    printf("Enter point y1:");
    scanf("%f",&y1);
    printf("Enter point y2:");
    scanf("%f",&x2);
    printf("Enter point y2:");
    scanf("%f",&y2);
    
    dx = x2-x1;
    dy = y2-y1;
    m = dy/dx;
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    
    if(c==2){
        glutCreateWindow("Bressenham");
        glutDisplayFunc(display2);
    }
    if(c==1){
        glutCreateWindow("DDA");
        glutDisplayFunc(display1);
    }
    glutMainLoop();
    return 0;
}
