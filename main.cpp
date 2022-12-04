#include <iostream>
#include <GLUT/glut.h>
#include <OpenGL/OpenGL.h>

float x=0, y, x1, y1, x2, y2,  m, p, c, xn1, yn1, xn2, yn2, tx, ty, angle, scale, x_positiont = -10.0, x_positions = 0.0;
int dx=0, dy=0, r, state = 1;

void AllShape(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_LINES);
           glColor3f(0.0f, 1.0f, 0.0f);
           glVertex2f(-0.2f, 0.8f);
           glVertex2f(0.2f, 0.8f);
    glEnd();
    glBegin(GL_LINES);
           glColor3f(1.0f, 0.0f, 0.0f);
           glVertex2f(-0.2f, 0.3f);
           glVertex2f(0.2f, 0.3f);
           glVertex2f(-0.2f, 0.3f);
           glVertex2f(-0.2f, 0.7f);
           glVertex2f(0.2f, 0.7f);
           glVertex2f(0.2f, 0.3f);
           glVertex2f(0.2f, 0.7f);
           glVertex2f(-0.2f, 0.7f);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.2f, -0.2f);
        glVertex2f(0.2f, -0.2f);
        glVertex2f(0.2f, -0.2f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(-0.2f, -0.2f);
    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.1f, -0.3f);
        glVertex2f(0.1f, -0.3f);
        glVertex2f(-0.1f, -0.3f);
        glVertex2f(-0.2f, -0.5f);
        glVertex2f(-0.2f, -0.5f);
        glVertex2f(-0.1f, -0.7f);
        glVertex2f(0.1f, -0.3f);
        glVertex2f(0.2f, -0.5f);
        glVertex2f(0.2f, -0.5f);
        glVertex2f(0.1f, -0.7f);
        glVertex2f(-0.1f, -0.7f);
        glVertex2f(0.1f, -0.7f);
    glEnd();
    glFlush ();
}
void Triangle(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f (1.0, 0.0, 0.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.0f, 0.25f);
    glEnd();
    glFlush ();
}
void Polygon(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f (.0, 1.0, .0);
        glVertex2f(-0.3f, 0.3f);
        glVertex2f(0.3f, 0.3f);
        glVertex2f(0.6f, 0.0f);
        glVertex2f(0.3f, -0.3f);
        glVertex2f(-0.3f, -0.3f);
        glVertex2f(-0.6f, 0.0f);
    glEnd();
    glFlush ();
}
void Square(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_QUADS);
        glColor3f (0.0, 0.0, 1.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.25f, 0.25f);
        glVertex2f(-0.25f, 0.25f);
    glEnd();
    glFlush ();
}
void DDA(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_POINTS);
        glColor3f(0.0,0.0,1.0);
        while(x1<=x2 && y1<=y2){
            if(m < 1){
                x1 = x1 + 1;
                y1 = y1 + m;
                glVertex2f((x1/100), (y1/100));
                printf("%0.2f %0.2f\n", x1, y1);
            }
            else if (m > 1){
                x1 = x1 + (1/m);
                y1 = y1 + 1;
                glVertex2f((x1/100), (y1/100));
                printf("%0.2f %0.2f\n", x1, y1);
            }
            else{
                x1 = x1 + 1;
                y1 = y1 + 1;
                printf("%0.2f %0.2f\n", x1, y1);
                glVertex2f((x1/100), (y1/100));
            }
        }
    glEnd();
    glFlush();
}
void BressenhamLine(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_POINTS);
        glColor3f(0.0,1.0,0.0);
        p=(2*dy)-dx;
        while(x1<=x2 && y1<=y2){
            if(p>=0){
                x1=x1+1;
                y1=y1+1;
                glVertex2f((x1/100), (y1/100));
                printf("%0.2f %0.2f\n", x1, y1);
                p = p+(2*dy) - (2*dx);
            }
            else if (p<0){
                x1=x1+1;
                printf("%0.2f %0.2f\n", x1, y1);
                glVertex2f((x1/100), (y1/100));
                p = p+(2*dy);
            }
        }
    glEnd();
    glFlush();
}
void MidPointCircle(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
        glVertex2f(-0.9f, -0.9f);
        glVertex2f(0.9f, 0.9f);
        glVertex2f(-0.9f, 0.9f);
        glVertex2f(0.9f, -0.9f);
    glEnd();
    glBegin(GL_POINTS);
        glColor3f (1.0, 0.0, 0.0);
        p=1-r;
        while((x<=y)){
            if(p<0){
                x=x+1;
                y=y;
                printf("%0.2f %0.2f\n",x,y);
                p=p+(2*x)+1;
            }
            else{
                x=x+1;
                y=y-1;
                printf("%0.2f %0.2f\n",x,y);
                p=p+(2*x)+1-(2*y);
            }
            glVertex2f (((x/100)), ((y/100)));
            glVertex2f (((y/100)), ((x/100)));
            glVertex2f ((-(x/100)), (-(y/100)));
            glVertex2f ((-(x/100)), ((y/100)));
            glVertex2f (((x/100)), (-(y/100)));
            glVertex2f (((y/100)), (-(x/100)));
            glVertex2f ((-(y/100)), (-(x/100)));
            glVertex2f ((-(y/100)), ((x/100)));
        }
    glEnd();
    glFlush ();
}
void Translation(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f (0.3, 0.0, 0.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.0f, 0.25f);
    glEnd();
    glBegin(GL_TRIANGLES);
        glColor3f (1.0, 0.0, 0.0);
        glVertex2f(-0.25f+(tx/100), -0.25f+(ty/100));
        glVertex2f(0.25f+(tx/100), -0.25f+(ty/100));
        glVertex2f(0.0f+(tx/100), 0.25f+(ty/100));
    glEnd();
    glFlush ();
}
void Translation2D (){
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode (GL_PROJECTION) ;
    glLoadIdentity () ;
    gluOrtho2D(-10.,10,-10,10);
    glMatrixMode (GL_MODELVIEW);
    glBegin (GL_POLYGON);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(x_positiont, 1.0);
        glVertex2f(x_positiont, -1.0);
        glVertex2f(x_positiont+2.0, -1.0);
        glVertex2f(x_positiont+2.0, 1.0);
    glEnd () ;
    glutPostRedisplay () ;
    glutTimerFunc (1000/60, 0, 0);
    switch (state){
    case 1:
        if(x_positiont<8)
            x_positiont +=0.30;
        else
           state = -1;
        break;
    case -1:
            if(x_positiont>-10)
                x_positiont -= 0.30;
            else
            state = 1;
            break;
    }
    glutSwapBuffers () ;
}
void Scaling(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_TRIANGLES);
       glColor3f (0.2, 0.0, 0.0);
       glVertex2f(-0.25f, -0.25f);
       glVertex2f(0.25f, -0.25f);
       glVertex2f(0.0f, 0.25f);
   glEnd();
    glMatrixMode (GL_PROJECTION) ;
    gluPerspective (scale/100,1,2.0,50.0);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0,0.0,-8.0);
     glBegin(GL_TRIANGLES);
        glColor3f (1.0, 0.0, 0.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.0f, 0.25f);
    glEnd();
    glutSwapBuffers () ;
}
void Scaling2D (void){
    glClear (GL_COLOR_BUFFER_BIT);
    glMatrixMode (GL_PROJECTION) ;
    glLoadIdentity () ;
    gluPerspective (60,1,2.0,50.0);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0,0.0,x_positions);
    glBegin(GL_TRIANGLES);
        glColor3f (1.0, 0.0, 0.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.0f, 0.25f);
    glEnd();
    glutPostRedisplay () ;
    glutTimerFunc (1000/60,0, 0);
    switch (state){
        case 1:
            if (x_positions<-5)
                x_positions+=0.30;
            else
                state = -1;
            break;
        case -1:
            if (x_positions>-15)
                x_positions-=0.30;
            else
                state=1;
            break;
    }
    glutSwapBuffers () ;
}
void Rotation(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glBegin(GL_LINES);
        glColor3f(0.10f, 0.10f, .10f);
        glVertex2f(-0.9f, 0.0f);
        glVertex2f(0.9f, 0.0f);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.0f, -0.9f);
    glEnd();
    glBegin(GL_TRIANGLES);
       glColor3f (0.2, 0.0, 0.0);
       glVertex2f(-0.25f, -0.25f);
       glVertex2f(0.25f, -0.25f);
       glVertex2f(0.0f, 0.25f);
   glEnd();
    glMatrixMode (GL_PROJECTION) ;
    gluPerspective (14.2,1,2.0,50.0);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef (0.0,0.0,-8.0);
    glRotatef(angle, 1.0, 1.0, 1.0);
     glBegin(GL_TRIANGLES);
        glColor3f (1.0, 0.0, 0.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.0f, 0.25f);
    glEnd();
    glutSwapBuffers () ;
}
void Rotation2D(void){
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode (GL_PROJECTION) ;
    glLoadIdentity () ;
    gluPerspective (10,1,2.0,50.0);
    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
    glutPostRedisplay () ;
    angle += 0.8;
    glTranslatef (0.0,0.0,-8.0);
    glRotatef(angle, 1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
        glColor3f (0.0, 0.0, 1.0);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(0.25f, 0.25f);
        glVertex2f(-0.25f, 0.25f);
    glEnd();
    glutSwapBuffers () ;
}

int main(int argc, char** argv){
    printf(" 1. All Shape \n");
    printf(" 2. Triangle Shape \n 3. Polygon Shape \n 4. Square Shape \n");
    printf(" 5. DDA Line \n 6. Bressenham Line \n 7. Mid-Point Circle \n");
    printf(" 8. Translation (Square, Triangle, Polygon, Quad) Shape \n");
    printf(" 9. Scaling (Square, Triangle, Polygon, Quad) Shape \n");
    printf(" 10. Rotation (Square, Triangle, Polygon, Quad) Shape \n");
    printf(" 11.Exit \n\n");
    printf("Enter choise:");
    scanf("%f",&c);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    if(c==1){
        glutCreateWindow("All Shape");
        glutDisplayFunc(AllShape);
    }
    else if(c==2){
        glutCreateWindow("Triangle Shape");
        glutDisplayFunc(Triangle);
    }
    else if(c==3){
        glutCreateWindow("Polygon Shape");
        glutDisplayFunc(Polygon);
    }
    else if(c==4){
        glutCreateWindow("Square Shape");
        glutDisplayFunc(Square);
    }
    else if(c==5){
        printf("Enter point x1:");
        scanf("%f",&x1);
        printf("Enter point y1:");
        scanf("%f",&y1);
        printf("Enter point x2:");
        scanf("%f",&x2);
        printf("Enter point y2:");
        scanf("%f",&y2);
        dx = x2-x1;
        dy = y2-y1;
        m = dy/dx;
        glutCreateWindow("DDA Line");
        glutDisplayFunc(DDA);
    }
    else if(c==6){
        printf("Enter point x1:");
        scanf("%f",&x1);
        printf("Enter point y1:");
        scanf("%f",&y1);
        printf("Enter point x2:");
        scanf("%f",&x2);
        printf("Enter point y2:");
        scanf("%f",&y2);
        dx = x2-x1;
        dy = y2-y1;
        m = dy/dx;
        glutCreateWindow("Bressenham Line");
        glutDisplayFunc(BressenhamLine);
    }
    else if(c==7){
        printf("Enter radius: ");
        scanf("%d",&r);
        y=r;
        glutCreateWindow ("Mid-Point Circle");
        glutDisplayFunc(MidPointCircle);
    }
    else if(c==8){
        printf(" 1. Only Translation \n");
        printf(" 2. Only 2D Translation \n");
        printf("Enter choise:");
        scanf("%f",&c);
        if(c==1){
            printf("Enter point tx:");
            scanf("%f",&tx);
            printf("Enter point ty:");
            scanf("%f",&ty);
            glutCreateWindow ("Only Translation");
            glutDisplayFunc(Translation);
        }
        if(c==2){
            glutCreateWindow ("only 2D Translation");
            glutDisplayFunc(Translation2D);
        }
    }
    else if(c==9){
        printf(" 1. Only Scaling \n");
        printf(" 2. Only 2D Scaling \n");
        printf("Enter choise:");
        scanf("%f",&c);
        if(c==1){
            printf("Enter Scale:");
            scanf("%f",&scale);
            glutCreateWindow ("Scaling");
            glutDisplayFunc(Scaling);
        }
        if(c==2){
            glutCreateWindow ("Scaling 2D");
            glutDisplayFunc(Scaling2D);
        }
    }
    else if(c==10){
        printf(" 1. Only Rotation \n");
        printf(" 2. Only 2D Rotation \n");
        printf("Enter choise:");
        scanf("%f",&c);
        if(c==1){
            printf("Enter angle:");
            scanf("%f",&angle);
            glutCreateWindow ("Rotation");
            glutDisplayFunc(Rotation);
        }
         if(c==2){
            glutCreateWindow ("Rotation 2D");
            glutDisplayFunc(Rotation2D);
        }
    }
    else
        return 0;
    glutMainLoop();
    return 0;
}
