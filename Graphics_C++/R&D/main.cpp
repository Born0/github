#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

bool night=true;
char carnival[]="CARNIVAL";

void printText( float x, float y, char *st)
{
    int l,i;
    l=strlen( st );
    glColor3ub(230,196,38);
    glRasterPos2f( x, y);
    for( i=0; i < l; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);
    }
}

void circle(GLfloat x, GLfloat y, GLfloat radius)
  {
    int i;
    float angle;
    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
	{
        angle = i*2*(M_PI/100);
        glVertex2f(x+(sin(angle)*radius),y+(cos(angle)*radius));
    	}
    glEnd();
  }
void backGround()
{
    //---------------------------------------------SKY
    if(!  night){glColor3ub(100, 160, 210);}
    else{ glColor3ub(13, 42, 67);}
        glBegin(GL_QUADS);
        glVertex2f(-1,-1);
        glVertex2f(1,-1);
        glVertex2f(1,1);
        glVertex2f(-1,1);
        glEnd();

    //----------------------------------green ->back
    glColor3ub(4,88,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(.2,-.1);
    glVertex2f(1,-.1);
    glVertex2f(.6,.35);
    glEnd();

    //----------------------------------green ->front
    glColor3ub(83, 112, 46);
    glBegin(GL_POLYGON);
    glVertex2f(-.8,0);
    glVertex2f(-1,0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,0);
    glVertex2f(.4,0);
    glVertex2f(-.3,.35);
    glEnd();

}

void tent()
{
    //----------------------------------------------- Large
    glColor3ub (230, 0, 5);
    glBegin(GL_QUADS);
    glVertex2f(0.193, 0.051);
    glVertex2f(0.193, -0.076);
    glVertex2f(.421, -.076);
    glVertex2f(.421, .051);
    glEnd();

    glColor3ub (230, 0, 5);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.152, 0.051);
    glVertex2f(0.46, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();

    glPushMatrix();//large wall strip->right
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();

    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(0.152,.051);
    glVertex2f(0.46, 0.051);
    glEnd();

    glColor3ub (255, 255, 255);//roof strip->right
    glBegin(GL_TRIANGLES);
    glVertex2f(0.384, 0.051);
    glVertex2f(0.422, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.322, 0.051);
    glVertex2f(0.345, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.27, 0.051);
    glVertex2f(0.294, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.197, 0.051);
    glVertex2f(0.234, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();

    glColor3ub (5, 0, 245);//gate
    glBegin(GL_TRIANGLES);
    glVertex2f(0.277, -0.076);
    glVertex2f(0.34, -0.076);
    glVertex2f(.3085, 0.0228);
    glEnd();

    //----------------------------------------Small Left
    glPushMatrix();

    glScaled(0.33,1,1);
    glTranslated(.149,-.15,0);

    glColor3ub (230, 0, 5);
    glBegin(GL_QUADS);
    glVertex2f(0.193, 0.051);
    glVertex2f(0.193, -0.076);
    glVertex2f(.421, -.076);
    glVertex2f(.421, .051);
    glEnd();

    glColor3ub (230, 0, 5);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.152, 0.051);
    glVertex2f(0.46, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();

    glPushMatrix();//large wall strip->right
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();

    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(0.152,.051);
    glVertex2f(0.46, 0.051);
    glEnd();

    glColor3ub (255, 255, 255);//roof strip->right
    glBegin(GL_TRIANGLES);
    glVertex2f(0.384, 0.051);
    glVertex2f(0.422, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.322, 0.051);
    glVertex2f(0.345, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.27, 0.051);
    glVertex2f(0.294, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.197, 0.051);
    glVertex2f(0.234, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();

    glColor3ub (5, 0, 245);//window
    glBegin(GL_QUADS);
    glVertex2f(0.277, -0.019);
    glVertex2f(0.34, -0.0178);
    glVertex2f(0.34, -0.04);
    glVertex2f(0.277, -0.04);
    glEnd();
    glPopMatrix();

    //---------------------------------------Small right
        glPushMatrix();

    glScaled(0.33,1,1);
    glTranslated(1.13,-.15,0);

    glColor3ub (230, 0, 5);
    glBegin(GL_QUADS);
    glVertex2f(0.193, 0.051);
    glVertex2f(0.193, -0.076);
    glVertex2f(.421, -.076);
    glVertex2f(.421, .051);
    glEnd();

    glColor3ub (230, 0, 5);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.152, 0.051);
    glVertex2f(0.46, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();

    glPushMatrix();//large wall strip->right
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.031-0.031-0.031-0.031-0.031-0.031,0,0);
    glColor3ub (255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.392, 0.052);
    glVertex2f(0.392, -0.076);
    glVertex2f(.408, -.076);
    glVertex2f(.408, .052);
    glEnd();
    glPopMatrix();

    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(0.152,.051);
    glVertex2f(0.46, 0.051);
    glEnd();

    glColor3ub (255, 255, 255);//roof strip->right
    glBegin(GL_TRIANGLES);
    glVertex2f(0.384, 0.051);
    glVertex2f(0.422, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.322, 0.051);
    glVertex2f(0.345, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.27, 0.051);
    glVertex2f(0.294, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();
    glColor3ub (255, 255, 255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.197, 0.051);
    glVertex2f(0.234, 0.051);
    glVertex2f(.309, 0.18);
    glEnd();

    glColor3ub (5, 0, 245);//window
    glBegin(GL_QUADS);
    glVertex2f(0.277, -0.019);
    glVertex2f(0.34, -0.0178);
    glVertex2f(0.34, -0.04);
    glVertex2f(0.277, -0.04);
    glEnd();
    glPopMatrix();

}

void gate()
{
    //--------------------------left
    glPushMatrix();
    glScaled(1,2,1);
    glColor3ub(230,196,38);
    glBegin(GL_QUADS);
    glVertex2f(-.415, -.37);
    glVertex2f(-.402, -.37);
    glVertex2f(-.402, -.293);
    glVertex2f(-.415, -.293);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.390, -.37);
    glVertex2f(-.373, -.37);
    glVertex2f(-.373, -.316);
    glVertex2f(-.390, -.316);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.360, -.37);
    glVertex2f(-.334, -.37);
    glVertex2f(-.334, -.138);
    glVertex2f(-.360, -.138);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.407, -.31);
    glVertex2f(-.355, -.32);
    glVertex2f(-.355, -.31);
    glVertex2f(-.407, -.32);
    glEnd();
    glPopMatrix();

    //-------------------------right
    glPushMatrix();
    glScaled(1,2,1);
    glRotated(180,0,1,0);
    glTranslated(.25,0,0);
    glColor3ub(230,196,38);
    glBegin(GL_QUADS);
    glVertex2f(-.415, -.37);
    glVertex2f(-.402, -.37);
    glVertex2f(-.402, -.293);
    glVertex2f(-.415, -.293);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.390, -.37);
    glVertex2f(-.373, -.37);
    glVertex2f(-.373, -.316);
    glVertex2f(-.390, -.316);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.360, -.37);
    glVertex2f(-.334, -.37);
    glVertex2f(-.334, -.138);
    glVertex2f(-.360, -.138);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-.407, -.31);
    glVertex2f(-.355, -.32);
    glVertex2f(-.355, -.31);
    glVertex2f(-.407, -.32);
    glEnd();
    glPopMatrix();

    //-------------------------frame
    glBegin(GL_QUADS);
    glVertex2f(-.345, -.37);
    glVertex2f(.1, -.37);
    glVertex2f(.1, -.2);
    glVertex2f(-.345, -.2);
    glEnd();
    glColor3ub(0,140,190);
    glBegin(GL_QUADS);
    glVertex2f(-.345, -.37);
    glVertex2f(.1, -.37);
    glVertex2f(.1, -.2);
    glVertex2f(-.345, -.2);
    glEnd();


    glPushMatrix();
    printText(-.165, -.3,carnival);
    glPopMatrix();





}

void character()
{
    //---------------------------------------head
    glColor3ub(250,220,190);//face
    glBegin(GL_POLYGON);
    glVertex2f(.8435,-.0941);
    glVertex2f(.8789,-.081);
    glVertex2f(.888,-.0);
    glVertex2f(.808,-.0);
    glVertex2f(.808,-.081);
    glEnd();

    glColor3ub(240,240,240);// tupi
    glBegin(GL_QUADS);
    glVertex2f(.888,-.01);
    glVertex2f(.808,-.01);
    glVertex2f(.82,.05);
    glVertex2f(.883,.05);
    glEnd();




}


void display()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
    backGround();
    //tent();
    //gate();
    character();
   glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1300, 650);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Carnival");
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;
}
