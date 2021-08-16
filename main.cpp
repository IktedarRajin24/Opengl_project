#include <stdio.h>
#include<iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.1416

float theta;
int x,y;
GLfloat positionCloud1 = 0.0f;
GLfloat positionCloud2 = 0.0f;
GLfloat positionCloud3 = 0.0f;
GLfloat positionWave1 = 0.0f;
GLfloat positionWave2 = 0.0f;

void humanHair()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
      for(int i=0;i<=180;i++)
      {
          theta = i*(PI/180);
          glVertex2f(0.015*cos(theta),0.52+0.03*sin(theta));
      }
      glEnd();
}

void humanHairFemale()
{

    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(-0.013,0.53);
    glVertex2f(0.013,0.53);
    glVertex2f(0.03,0.4);
    glVertex2f(-0.03,0.4);
    glEnd();

}

void humanHead()
{
    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(0.015*cos(theta),0.5+0.04*sin(theta));
      }
      glEnd();
}

void humanNeck()
{
    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
    glVertex2f(-0.005,0.5);
    glVertex2f(0.005,0.5);
    glVertex2f(0.010,0.452);
    glVertex2f(-0.010,0.452);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
      for(int i=180;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(0.01*cos(theta),0.452+0.02*sin(theta));
      }
      glEnd();
}

void tops()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.025,0.452);
    glVertex2f(0.025,0.452);
    glVertex2f(0.025,0.33);
    glVertex2f(-0.025,0.33);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.025,0.452);
    glVertex2f(-0.045,0.4);
    glVertex2f(-0.025,0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.025,0.452);
    glVertex2f(0.045,0.4);
    glVertex2f(0.025,0.4);
    glEnd();
}


void pants()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.025,0.33);
    glVertex2f(0.0,0.33);
    glVertex2f(0.0,0.3);
    glVertex2f(-0.01,0.2);
    glVertex2f(-0.035,0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.025,0.33);
    glVertex2f(0.0,0.33);
    glVertex2f(0.0,0.3);
    glVertex2f(0.01,0.2);
    glVertex2f(0.035,0.2);
    glEnd();
}

void skirts()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.025,0.33);
    glVertex2f(0.025,0.33);
    glVertex2f(0.035,0.25);
    glVertex2f(-0.035,0.25);
    glEnd();
}

void humanLegs()
{
    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(0.02,0.25);
    glVertex2f(0.025,0.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(-0.02,0.25);
    glVertex2f(-0.025,0.2);
    glEnd();
}

void humanShoe()
{
      glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(0.03+0.015*cos(theta),0.198+0.01*sin(theta));
      }
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.03+0.015*cos(theta),0.198+0.01*sin(theta));
      }
      glEnd();
}

void humanHands()
{
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(-0.032,0.4);
    glVertex2f(-0.037,0.33);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(0.032,0.4);
    glVertex2f(0.037,0.33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.037+0.008*cos(theta),0.33+0.008*sin(theta));
      }
      glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(0.037+0.008*cos(theta),0.33+0.008*sin(theta));
      }
      glEnd();
}

void humanHandsSalman()
{
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(-0.032,0.4);
    glVertex2f(-0.045,0.37);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(-0.045,0.37);
    glVertex2f(-0.06,0.42);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,218,185);
    glVertex2f(0.032,0.4);
    glVertex2f(0.037,0.33);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.06+0.008*cos(theta),0.42+0.008*sin(theta));
      }
      glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,218,185);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(0.037+0.008*cos(theta),0.33+0.008*sin(theta));
      }
      glEnd();

      glBegin(GL_LINES);
      glColor3ub(0,0,0);
      glVertex2f(-0.06,0.42);
      glVertex2f(-0.08,0.52);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      glVertex2f(-0.1,0.55);
      glVertex2f(-0.06,0.55);
      glVertex2f(-0.06,0.52);
      glVertex2f(-0.1,0.52);
      glEnd();
}

void Rajin()
{
    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    humanHead();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    humanHair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    glColor3ub(72,61,139);
    tops();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    humanNeck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    humanHands();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    glColor3ub(240,230,140);
    pants();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8, -0.51, 0.0f);
    humanShoe();
    glPopMatrix();

}

void Shehrin()
{
    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    humanHairFemale();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    humanHead();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    humanHair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    glColor3ub(255,255,0);
    tops();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    humanNeck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    humanHands();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    glColor3ub(240,230,140);
    pants();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7, -0.51, 0.0f);
    humanShoe();
    glPopMatrix();
}

void Jannat()
{
    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanHairFemale();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanHead();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanHair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    glColor3ub(255,20,147);
    tops();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanNeck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanHands();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    glColor3ub(75,0,130);
    skirts();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanLegs();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4, -0.51, 0.0f);
    humanShoe();
    glPopMatrix();
}

void Srijon()
{
    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    humanHead();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    humanHair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    glColor3ub(64,224,208);
    tops();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    humanNeck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    humanHands();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    glColor3ub(240,230,140);
    pants();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.25, -0.65, 0.0f);
    humanShoe();
    glPopMatrix();

}

void Sajjad()
{
    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    humanHead();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    humanHair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    glColor3ub(128,0,128);
    tops();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    humanNeck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    humanHands();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    glColor3ub(0,0,128);
    pants();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2, -0.85, 0.0f);
    humanShoe();
    glPopMatrix();

}

void Salman()
{
    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    humanHead();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    humanHair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    glColor3ub(0,0,0);
    tops();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    humanNeck();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    humanHandsSalman();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    glColor3ub(106,90,205);
    pants();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.85, -0.9, 0.0f);
    humanShoe();
    glPopMatrix();

}

void moveCloud1(int value)
{
    if(positionCloud1 >1.0)
        positionCloud1 = -1.0f;

    positionCloud1 += 0.008;

	glutPostRedisplay();

	glutTimerFunc(100, moveCloud1, 0);
}

void moveCloud2(int value)
{

    if(positionCloud2 >1.0)
        positionCloud2 = -1.0f;

    positionCloud2 += 0.012;

	glutPostRedisplay();

	glutTimerFunc(100, moveCloud2, 0);
}

void moveCloud3(int value)
{

    if(positionCloud3 <-1.0)
        positionCloud3 = 1.0f;

    positionCloud3 -= 0.013;

	glutPostRedisplay();

	glutTimerFunc(100, moveCloud3, 0);
}
void wave1(int value)
{
    if(positionWave1 >1.0)
        positionWave1 = -0.2f;

    positionWave1 += 0.05;

	glutPostRedisplay();

	glutTimerFunc(100, wave1, 0);
}

void wave2(int value)
{
    if(positionWave2 >1.0)
        positionWave2 = -0.2f;

    positionWave2 += 0.053;

	glutPostRedisplay();

	glutTimerFunc(100, wave2, 0);
}
void circle(GLfloat rad)
{
    glBegin(GL_POLYGON);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(rad*cos(theta),rad*sin(theta));
      }
      glEnd();
}

void triangle1()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 219, 189);
    glVertex2f(-0.78,0.33);
    glVertex2f(-0.42,0.33);
    glVertex2f(-0.6,0.22);
    glEnd();
}
void triangle2()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 219, 189);
    glVertex2f(-0.6,0.18);
    glVertex2f(-0.42,0.07);
    glVertex2f(-0.78,0.07);
    glEnd();
}

void triangle3()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 219, 189);
    glVertex2f(-0.58,0.2);
    glVertex2f(-0.32,0.25);
    glVertex2f(-0.32,0.15);
    glEnd();
}

void triangle4()
{
    glBegin(GL_TRIANGLES);
    glColor3ub(239, 219, 189);
    glVertex2f(-0.62,0.2);
    glVertex2f(-0.88,0.15);
    glVertex2f(-0.88,0.25);
    glEnd();
}

void line()
{
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,255,255);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.5,-0.2);
    glEnd();
}
void grass()
{
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(0.1f,-0.08f);
    glVertex2f(0.11f,-0.03f);
    glVertex2f(0.12f,-0.08f);
    glVertex2f(0.13f,-0.03f);
    glVertex2f(0.14f,-0.08f);
    glVertex2f(0.15f,-0.03f);
    glVertex2f(0.16f,-0.08f);
    glVertex2f(0.17f,-0.03f);
    glVertex2f(0.18f,-0.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.1f,-0.08f);
    glVertex2f(-0.11f,-0.03f);
    glVertex2f(-0.12f,-0.08f);
    glVertex2f(-0.13f,-0.03f);
    glVertex2f(-0.14f,-0.08f);
    glVertex2f(-0.15f,-0.03f);
    glVertex2f(-0.16f,-0.08f);
    glVertex2f(-0.17f,-0.03f);
    glVertex2f(-0.18f,-0.08f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(-0.30f,-0.10f);
    glVertex2f(-0.31f,-0.06f);
    glVertex2f(-0.32f,-0.10f);
    glVertex2f(-0.33f,-0.06f);
    glVertex2f(-0.34f,-0.10f);
    glVertex2f(-0.35f,-0.06f);
    glVertex2f(-0.36f,-0.10f);
    glVertex2f(-0.37f,-0.06f);
    glVertex2f(-0.38f,-0.10f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.50f,-0.15f);
    glVertex2f(-0.51f,-0.10f);
    glVertex2f(-0.52f,-0.15f);
    glVertex2f(-0.53f,-0.10f);
    glVertex2f(-0.54f,-0.15f);
    glVertex2f(-0.55f,-0.10f);
    glVertex2f(-0.56f,-0.15f);
    glVertex2f(-0.57f,-0.10f);
    glVertex2f(-0.58f,-0.15f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(-0.68f,-0.15f);
    glVertex2f(-0.69f,-0.10f);
    glVertex2f(-0.70f,-0.15f);
    glVertex2f(-0.71f,-0.10f);
    glVertex2f(-0.72f,-0.15f);
    glVertex2f(-0.73f,-0.10f);
    glVertex2f(-0.74f,-0.15f);
    glVertex2f(-0.75f,-0.10f);
    glVertex2f(-0.76f,-0.15f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.87f,-0.25f);
    glVertex2f(-0.88f,-0.20f);
    glVertex2f(-0.89f,-0.25f);
    glVertex2f(-0.90f,-0.20f);
    glVertex2f(-0.91f,-0.25f);
    glVertex2f(-0.92f,-0.20f);
    glVertex2f(-0.93f,-0.25f);
    glVertex2f(-0.94f,-0.20f);
    glVertex2f(-0.95f,-0.25f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(0.10f,-0.20f);
    glVertex2f(0.11f,-0.15f);
    glVertex2f(0.12f,-0.20f);
    glVertex2f(0.13f,-0.15f);
    glVertex2f(0.14f,-0.20f);
    glVertex2f(0.15f,-0.15f);
    glVertex2f(0.16f,-0.20f);
    glVertex2f(0.17f,-0.15f);
    glVertex2f(0.18f,-0.20f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.14f,-0.20f);
    glVertex2f(-0.15f,-0.15f);
    glVertex2f(-0.16f,-0.20f);
    glVertex2f(-0.17f,-0.15f);
    glVertex2f(-0.18f,-0.20f);
    glVertex2f(-0.19f,-0.15f);
    glVertex2f(-0.20f,-0.20f);
    glVertex2f(-0.21f,-0.15f);
    glVertex2f(-0.22f,-0.20f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.58f,-0.25f);
    glVertex2f(-0.59f,-0.20f);
    glVertex2f(-0.60f,-0.25f);
    glVertex2f(-0.61f,-0.20f);
    glVertex2f(-0.62f,-0.25f);
    glVertex2f(-0.63f,-0.20f);
    glVertex2f(-0.64f,-0.25f);
    glVertex2f(-0.65f,-0.20f);
    glVertex2f(-0.66f,-0.25f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.80f,-0.15f);
    glVertex2f(-0.81f,-0.10f);
    glVertex2f(-0.82f,-0.15f);
    glVertex2f(-0.83f,-0.10f);
    glVertex2f(-0.84f,-0.15f);
    glVertex2f(-0.85f,-0.10f);
    glVertex2f(-0.86f,-0.15f);
    glVertex2f(-0.87f,-0.10f);
    glVertex2f(-0.88f,-0.15f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(189,183,107);
    glVertex2f(0.02f,-0.13f);
    glVertex2f(0.03f,-0.07f);
    glVertex2f(0.04f,-0.13f);
    glVertex2f(0.05f,-0.07f);
    glVertex2f(0.06f,-0.13f);
    glVertex2f(0.07f,-0.07f);
    glVertex2f(0.08f,-0.13f);
    glVertex2f(0.09f,-0.07f);
    glVertex2f(0.10f,-0.13f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(0.02f,-0.35f);
    glVertex2f(0.03f,-0.30f);
    glVertex2f(0.04f,-0.35f);
    glVertex2f(0.05f,-0.30f);
    glVertex2f(0.06f,-0.35f);
    glVertex2f(0.07f,-0.30f);
    glVertex2f(0.08f,-0.35f);
    glVertex2f(0.09f,-0.30f);
    glVertex2f(0.10f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(0.00f,-0.45f);
    glVertex2f(0.01f,-0.40f);
    glVertex2f(0.02f,-0.45f);
    glVertex2f(0.03f,-0.40f);
    glVertex2f(0.04f,-0.45f);
    glVertex2f(0.05f,-0.40f);
    glVertex2f(0.06f,-0.45f);
    glVertex2f(0.07f,-0.40f);
    glVertex2f(0.08f,-0.45f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.10f,-0.20f);
    glVertex2f(-0.11f,-0.15f);
    glVertex2f(-0.12f,-0.20f);
    glVertex2f(-0.13f,-0.15f);
    glVertex2f(-0.14f,-0.20f);
    glVertex2f(-0.15f,-0.15f);
    glVertex2f(-0.16f,-0.20f);
    glVertex2f(-0.17f,-0.15f);
    glVertex2f(-0.18f,-0.20f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(-0.27f,-0.20f);
    glVertex2f(-0.28f,-0.15f);
    glVertex2f(-0.29f,-0.20f);
    glVertex2f(-0.30f,-0.15f);
    glVertex2f(-0.31f,-0.20f);
    glVertex2f(-0.32f,-0.15f);
    glVertex2f(-0.33f,-0.20f);
    glVertex2f(-0.34f,-0.15f);
    glVertex2f(-0.35f,-0.20f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.27f,-0.50f);
    glVertex2f(-0.28f,-0.45f);
    glVertex2f(-0.29f,-0.50f);
    glVertex2f(-0.30f,-0.45f);
    glVertex2f(-0.31f,-0.50f);
    glVertex2f(-0.32f,-0.45f);
    glVertex2f(-0.33f,-0.50f);
    glVertex2f(-0.34f,-0.45f);
    glVertex2f(-0.35f,-0.50f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.22f,-0.60f);
    glVertex2f(-0.23f,-0.55f);
    glVertex2f(-0.24f,-0.60f);
    glVertex2f(-0.25f,-0.55f);
    glVertex2f(-0.26f,-0.60f);
    glVertex2f(-0.27f,-0.55f);
    glVertex2f(-0.28f,-0.60f);
    glVertex2f(-0.29f,-0.55f);
    glVertex2f(-0.30f,-0.60f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.81f,-0.35f);
    glVertex2f(-0.82f,-0.30f);
    glVertex2f(-0.83f,-0.35f);
    glVertex2f(-0.84f,-0.30f);
    glVertex2f(-0.85f,-0.35f);
    glVertex2f(-0.86f,-0.30f);
    glVertex2f(-0.87f,-0.35f);
    glVertex2f(-0.88f,-0.30f);
    glVertex2f(-0.89f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.81f,-0.45f);
    glVertex2f(-0.82f,-0.40f);
    glVertex2f(-0.83f,-0.45f);
    glVertex2f(-0.84f,-0.40f);
    glVertex2f(-0.85f,-0.45f);
    glVertex2f(-0.86f,-0.40f);
    glVertex2f(-0.87f,-0.45f);
    glVertex2f(-0.88f,-0.40f);
    glVertex2f(-0.89f,-0.45f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(-0.91f,-0.55f);
    glVertex2f(-0.92f,-0.50f);
    glVertex2f(-0.93f,-0.55f);
    glVertex2f(-0.94f,-0.50f);
    glVertex2f(-0.95f,-0.55f);
    glVertex2f(-0.96f,-0.50f);
    glVertex2f(-0.97f,-0.55f);
    glVertex2f(-0.98f,-0.50f);
    glVertex2f(-0.99f,-0.55f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.87f,-0.65f);
    glVertex2f(-0.88f,-0.60f);
    glVertex2f(-0.89f,-0.65f);
    glVertex2f(-0.90f,-0.60f);
    glVertex2f(-0.91f,-0.65f);
    glVertex2f(-0.92f,-0.60f);
    glVertex2f(-0.93f,-0.65f);
    glVertex2f(-0.94f,-0.60f);
    glVertex2f(-0.95f,-0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.87f,-0.85f);
    glVertex2f(-0.88f,-0.80f);
    glVertex2f(-0.89f,-0.85f);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.91f,-0.85f);
    glVertex2f(-0.92f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.94f,-0.80f);
    glVertex2f(-0.95f,-0.85f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.67f,-0.85f);
    glVertex2f(-0.68f,-0.80f);
    glVertex2f(-0.69f,-0.85f);
    glVertex2f(-0.70f,-0.80f);
    glVertex2f(-0.71f,-0.85f);
    glVertex2f(-0.72f,-0.80f);
    glVertex2f(-0.73f,-0.85f);
    glVertex2f(-0.74f,-0.80f);
    glVertex2f(-0.75f,-0.85f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.57f,-0.85f);
    glVertex2f(-0.58f,-0.80f);
    glVertex2f(-0.59f,-0.85f);
    glVertex2f(-0.60f,-0.80f);
    glVertex2f(-0.61f,-0.85f);
    glVertex2f(-0.62f,-0.80f);
    glVertex2f(-0.63f,-0.85f);
    glVertex2f(-0.64f,-0.80f);
    glVertex2f(-0.65f,-0.85f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(-0.67f,-0.65f);
    glVertex2f(-0.68f,-0.60f);
    glVertex2f(-0.69f,-0.65f);
    glVertex2f(-0.70f,-0.60f);
    glVertex2f(-0.71f,-0.65f);
    glVertex2f(-0.72f,-0.60f);
    glVertex2f(-0.73f,-0.65f);
    glVertex2f(-0.74f,-0.60f);
    glVertex2f(-0.75f,-0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.62f,-0.75f);
    glVertex2f(-0.63f,-0.70f);
    glVertex2f(-0.64f,-0.75f);
    glVertex2f(-0.65f,-0.70f);
    glVertex2f(-0.66f,-0.75f);
    glVertex2f(-0.67f,-0.70f);
    glVertex2f(-0.68f,-0.75f);
    glVertex2f(-0.69f,-0.70f);
    glVertex2f(-0.70f,-0.75f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.42f,-0.75f);
    glVertex2f(-0.43f,-0.70f);
    glVertex2f(-0.44f,-0.75f);
    glVertex2f(-0.45f,-0.70f);
    glVertex2f(-0.46f,-0.75f);
    glVertex2f(-0.47f,-0.70f);
    glVertex2f(-0.48f,-0.75f);
    glVertex2f(-0.49f,-0.70f);
    glVertex2f(-0.50f,-0.75f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.29f,-0.70f);
    glVertex2f(-0.30f,-0.65f);
    glVertex2f(-0.31f,-0.70f);
    glVertex2f(-0.32f,-0.65f);
    glVertex2f(-0.33f,-0.70f);
    glVertex2f(-0.34f,-0.65f);
    glVertex2f(-0.35f,-0.70f);
    glVertex2f(-0.36f,-0.65f);
    glVertex2f(-0.37f,-0.70f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.19f,-0.70f);
    glVertex2f(-0.20f,-0.65f);
    glVertex2f(-0.21f,-0.70f);
    glVertex2f(-0.22f,-0.65f);
    glVertex2f(-0.23f,-0.70f);
    glVertex2f(-0.24f,-0.65f);
    glVertex2f(-0.25f,-0.70f);
    glVertex2f(-0.26f,-0.65f);
    glVertex2f(-0.27f,-0.70f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(-0.09f,-0.80f);
    glVertex2f(-0.10f,-0.75f);
    glVertex2f(-0.11f,-0.80f);
    glVertex2f(-0.12f,-0.75f);
    glVertex2f(-0.13f,-0.80f);
    glVertex2f(-0.14f,-0.75f);
    glVertex2f(-0.15f,-0.80f);
    glVertex2f(-0.16f,-0.75f);
    glVertex2f(-0.17f,-0.80f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.01f,-0.65f);
    glVertex2f(-0.02f,-0.60f);
    glVertex2f(-0.03f,-0.65f);
    glVertex2f(-0.04f,-0.60f);
    glVertex2f(-0.05f,-0.65f);
    glVertex2f(-0.06f,-0.60f);
    glVertex2f(-0.07f,-0.65f);
    glVertex2f(-0.08f,-0.60f);
    glVertex2f(-0.09f,-0.65f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.01f,-0.35f);
    glVertex2f(-0.02f,-0.30f);
    glVertex2f(-0.03f,-0.35f);
    glVertex2f(-0.04f,-0.30f);
    glVertex2f(-0.05f,-0.35f);
    glVertex2f(-0.06f,-0.30f);
    glVertex2f(-0.07f,-0.35f);
    glVertex2f(-0.08f,-0.30f);
    glVertex2f(-0.09f,-0.35f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(124,252,0);
    glVertex2f(-0.04f,-0.55f);
    glVertex2f(-0.04f,-0.50f);
    glVertex2f(-0.06f,-0.55f);
    glVertex2f(-0.07f,-0.50f);
    glVertex2f(-0.08f,-0.55f);
    glVertex2f(-0.09f,-0.50f);
    glVertex2f(-0.10f,-0.55f);
    glVertex2f(-0.11f,-0.50f);
    glVertex2f(-0.12f,-0.55f);
    glEnd();
}
void waveLine1()
{
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.16, 0.0, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.32, 0.0, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.48, 0.0, 0.0f);
    line();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(-0.04, -0.3, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.12, -0.3, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.28, -0.3, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.44, -0.3, 0.0f);
    line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.08, -0.6, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.08, -0.6, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.24, -0.6, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4, -0.6, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.56, -0.6, 0.0f);
    line();
    glPopMatrix();
}

void waves1()
{
    glPushMatrix();
    glTranslatef(positionWave1, 0.0f, 0.0f);
    waveLine1();
    glPopMatrix();
}


void waveLine2()
{
    glPushMatrix();
    glTranslatef(-0.02, -0.15, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.14, -0.15, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3, -0.15, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.46, -0.15, 0.0f);
    line();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(-0.06, -0.45, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.1, -0.45, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.26, -0.45, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.42, -0.45, 0.0f);
    line();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.58, -0.45, 0.0f);
    line();
    glPopMatrix();
}

void waves2()
{
    glPushMatrix();
    glTranslatef(positionWave2, 0.0f, 0.0f);
    waveLine2();
    glPopMatrix();
}

void table()
{
    glBegin(GL_POLYGON);
      glColor3ub(165,42,42);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.6+0.3*cos(theta),-0.3+0.15*sin(theta));
      }
      glEnd();
}

void tableLayer1()
{
    glBegin(GL_POLYGON);
      glColor3ub(0,0,0);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.6+0.3*cos(theta),-0.315+0.15*sin(theta));
      }
      glEnd();
}

void tableLayer2()
{
    glBegin(GL_POLYGON);
      glColor3ub(178,34,34);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.6+0.28*cos(theta),-0.3+0.125*sin(theta));
      }
      glEnd();
}

void poleTop()
{
    glBegin(GL_POLYGON);
    glColor3ub(7,7,7);
    glVertex2f(-0.625,0.1);
    glVertex2f(-0.575,0.1);
    glVertex2f(-0.575,-0.3);
    glVertex2f(-0.625,-0.3);
    glEnd();
}

void poleBottom()
{
    glBegin(GL_POLYGON);
    glColor3ub(7,7,7);
    glVertex2f(-0.575,-0.3);
    glVertex2f(-0.575,-0.7);
    glVertex2f(-0.6,-0.8);
    glVertex2f(-0.625,-0.7);
    glVertex2f(-0.625,-0.3);
    glEnd();

}

void poleTriangle()
{
    glBegin(GL_POLYGON);
    glColor3ub(7,7,7);
    glVertex2f(-0.5,-0.7);
    glVertex2f(-0.7,-0.7);
    glVertex2f(-0.6,-0.6);
    glEnd();
}

void chata()
{
    glBegin(GL_POLYGON);
    glColor3ub(30,30,30);

    glVertex2f(-0.8,0.35);
    glVertex2f(-0.4,0.35);
    glVertex2f(-0.3,0.25);
    glVertex2f(-0.3,0.15);
    glVertex2f(-0.4,0.05);
    glVertex2f(-0.8,0.05);
    glVertex2f(-0.9,0.15);
    glVertex2f(-0.9,0.25);
    glEnd();
}

void bench1()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-0.2,-0.308);
    glVertex2f(-0.1,-0.308);
    glVertex2f(-0.4,-0.608);
    glVertex2f(-0.5,-0.608);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(40,40,40);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.1,-0.3);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.5,-0.6);
    glEnd();

    glLineWidth(5);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.4,-0.8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.494,-0.6);
    glVertex2f(-0.494,-0.8);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.105,-0.3);
    glVertex2f(-0.105,-0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.2,-0.45);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.2,-0.45);
    glEnd();
}

void bench2()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-0.7,-0.082);
    glVertex2f(-0.3,-0.082);
    glVertex2f(-0.4,-0.182);
    glVertex2f(-0.8,-0.182);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(40,40,40);
    glVertex2f(-0.7,-0.08);
    glVertex2f(-0.3,-0.08);
    glVertex2f(-0.4,-0.18);
    glVertex2f(-0.8,-0.18);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-0.4,-0.182);
    glVertex2f(-0.4,-0.382);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.305,-0.082);
    glVertex2f(-0.305,-0.22);
    glEnd();
}

void ground()
{
    glBegin(GL_POLYGON);
    glColor3ub(34,139,34);
    glVertex2f(-1.0,0.0);
    glVertex2f(0.25,0.0);
    glVertex2f(0.0,-1.0);
    glVertex2f(-1.0,-1.0);
    glEnd();

}

void pool()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,191,255);
    glVertex2f(0.25,0.0);
    glVertex2f(1.0,0.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(0.0,-1.0);
    glEnd();
}
void isleTop()
{
    glBegin(GL_POLYGON);
    glColor3ub(188,143,143);
    glVertex2f(0.25,0.0);
    glVertex2f(1.0,0.0);
    glVertex2f(1.0,-0.15);
    glVertex2f(0.215,-0.15);
    glEnd();
}

void isleLeft()
{
    glBegin(GL_POLYGON);
    glColor3ub(188,143,143);
    glVertex2f(0.25,0.0);
    glVertex2f(0.4,0.0);
    glVertex2f(0.15,-1.0);
    glVertex2f(0.0,-1.0);
    glEnd();
}

void wallLayer1()
{
    glBegin(GL_POLYGON);
    glColor3ub(152, 87, 73);
    glVertex2f(-1.0,0.25);
    glVertex2f(1.0,0.25);
    glVertex2f(1.0,0.025);
    glVertex2f(-1.0,0.025);
    glEnd();

}
void wallLayer2()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-1.0,0.275);
    glVertex2f(1.0,0.275);
    glVertex2f(1.0,0.0);
    glVertex2f(-1.0,0.0);
    glEnd();

}

void sun()
{
    glColor3f(255,215,0);

    glBegin(GL_POLYGON);
      for(int i=0;i<=360;i++)
      {
          theta = i*(PI/180);
          glVertex2f(-0.7+0.1*cos(theta),0.7+0.15*sin(theta));
      }
    glEnd();
}
void cloud1()
{
    glColor3f(255,255,255);

    glPushMatrix();
    glTranslatef(0.08,0.84,0.0);
    circle(0.05);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,0.9,0.0);
    circle(0.065);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.075,0.85,0.0);
    circle(0.055);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.015,0.79,0.0);
    circle(0.052);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.035,0.8,0.0);
    circle(0.052);
    glPopMatrix();
}

void updateCloud1()
{
    glPushMatrix();
    glTranslatef(positionCloud2, 0.0, 0.0);

    cloud1();
    glPopMatrix();
}
void cloud2()
{
    glColor3f(255,255,255);

    glPushMatrix();
    glTranslatef(0.38,0.58,0.0);
    circle(0.05);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3,0.64,0.0);
    circle(0.065);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.225,0.59,0.0);
    circle(0.055);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.285,0.53,0.0);
    circle(0.052);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.335,0.54,0.0);
    circle(0.052);
    glPopMatrix();


}
void updateCloud2()
{
    glPushMatrix();
    glTranslatef(positionCloud1, 0.0, 0.0);

    cloud2();
    glPopMatrix();
}
void cloud3()
{
    glColor3f(255,255,255);

    glPushMatrix();
    glTranslatef(0.68,0.44,0.0);
    circle(0.05);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6,0.5,0.0);
    circle(0.065);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.525,0.45,0.0);
    circle(0.055);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.585,0.39,0.0);
    circle(0.052);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.635,0.4,0.0);
    circle(0.052);
    glPopMatrix();
}
void updateCloud3()
{
    glPushMatrix();
    glTranslatef(positionCloud3, 0.0, 0.0);

    cloud3();
    glPopMatrix();
}

void cloud4()
{
    glColor3f(255,255,255);

    glPushMatrix();
    glTranslatef(-0.38,0.58,0.0);
    circle(0.05);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.3,0.64,0.0);
    circle(0.065);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.225,0.59,0.0);
    circle(0.055);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.285,0.53,0.0);
    circle(0.052);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.335,0.54,0.0);
    circle(0.052);
    glPopMatrix();


}
void updateCloud4()
{
    glPushMatrix();
    glTranslatef(positionCloud1, 0.0, 0.0);
    cloud4();
    glPopMatrix();
}

void cloud5()
{
    glColor3f(255,255,255);

    glPushMatrix();
    glTranslatef(-0.68,0.34,0.0);
    circle(0.05);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6,0.4,0.0);
    circle(0.065);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.525,0.35,0.0);
    circle(0.055);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.585,0.29,0.0);
    circle(0.052);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.635,0.3,0.0);
    circle(0.052);
    glPopMatrix();
}
void updateCloud5()
{
    glPushMatrix();
    glTranslatef(positionCloud3, 0.0, 0.0);

    cloud5();
    glPopMatrix();
}
void Tree1()
{
glColor3f(0.38f,0.19f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-0.85,0.30);
glVertex2f(-0.85,-0.02);
glVertex2f(-0.87,-0.02);
glVertex2f(-0.87,0.30);
glEnd();

glColor3f(0.0,0.43,0.0);
glBegin(GL_POLYGON);
glVertex2f(-0.86,0.40);
glVertex2f(-0.76,0.20);
glVertex2f(-0.96,0.20);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-0.86,0.45);
glVertex2f(-0.76,0.25);
glVertex2f(-0.96,0.25);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-0.86,0.50);
glVertex2f(-0.76,0.30);
glVertex2f(-0.96,0.30);
glEnd();
}

void Tree2()
{
glColor3f(0.38f,0.19f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-0.05,-0.12);
glVertex2f(-0.03,-0.12);
glVertex2f(-0.03,0.20);
glVertex2f(-0.05,0.20);

glEnd();

glColor3ub(154,205,50);

glBegin(GL_POLYGON);
glVertex2f(-0.04,0.30);
glVertex2f(0.06,0.10);
glVertex2f(-0.14,0.10);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-0.04,0.35);
glVertex2f(0.06,0.15);
glVertex2f(-0.14,0.15);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-0.04,0.40);
glVertex2f(0.06,0.20);
glVertex2f(-0.14,0.20);
glEnd();
}

void Tree3()
{
glColor3f(0.38f,0.19f,0.0f);
glLineWidth(7);
glBegin(GL_LINES);
glVertex2f(0.92,0.0);
glVertex2f(0.92,0.11);
glEnd();

glColor3f(0.0,0.43,0.0);

glBegin(GL_POLYGON);
glVertex2f(0.98,0.10);
glVertex2f(0.92,0.5);
glVertex2f(0.86,0.10);
glVertex2f(0.86,0.10);
glEnd();
}

void Tree4()
{
glColor3f(0.38f,0.19f,0.0f);
glLineWidth(7);
glBegin(GL_LINES);
glVertex2f(0.74,0.0);
glVertex2f(0.74,0.11);
glEnd();

glColor3f(0.0,0.43,0.0);

glBegin(GL_POLYGON);
glVertex2f(0.80,0.10);
glEnd();

glColor3f(0.0,0.43,0.0);

glBegin(GL_POLYGON);
glVertex2f(0.80,0.10);
glVertex2f(0.74,0.5);
glVertex2f(0.68,0.10);
glEnd();
}

void Tree5()
{
glColor3f(0.38f,0.19f,0.0f);
glLineWidth(10);
glBegin(GL_LINES);
glVertex2f(0.56,0.0);
glVertex2f(0.56,0.11);
glEnd();

glColor3f(0.0,0.43,0.0);

glBegin(GL_POLYGON);
glVertex2f(0.62,0.10);
glVertex2f(0.56,0.5);
glVertex2f(0.50,0.10);
glEnd();
}

void Tree6()
{
glColor3f(0.38f,0.19f,0.0f);
glLineWidth(7);
glBegin(GL_POLYGON);
glVertex2f(-0.20,-0.02);
glVertex2f(-0.18,-0.02);
glVertex2f(-0.18,0.30);
glVertex2f(-0.20,0.30);

glEnd();

glColor3f(0.0,0.43,0.0);

glBegin(GL_POLYGON);
glVertex2f(-0.19,0.40);
glVertex2f(-0.09,0.20);
glVertex2f(-0.29,0.20);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-0.19,0.45);
glVertex2f(-0.09,0.25);
glVertex2f(-0.29,0.25);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(-0.19,0.50);
glVertex2f(-0.09,0.30);
glVertex2f(-0.29,0.30);
glEnd();
}
void Display(void)
{
    glClearColor(0.0, 0.8, 1.0, 1.0);
    glClear (GL_COLOR_BUFFER_BIT);
    sun();
    updateCloud1();
    updateCloud2();
    updateCloud3();
    updateCloud4();
    updateCloud5();
    ground();
    grass();
    pool();
    waves1();
    waves2();
    isleTop();
    isleLeft();
    wallLayer2();
    wallLayer1();
    Tree1();
    Tree3();
    Tree4();
    Tree5();
    Tree6();
    Tree2();
    bench2();
    Rajin();
    Shehrin();
    Jannat();
    Srijon();
    bench1();
    Sajjad();
    poleBottom();
    tableLayer1();
    table();
    tableLayer2();
    poleTop();
    poleTriangle();
    chata();
    triangle1();
    triangle2();
    triangle3();
    triangle4();
    Salman();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1920, 1080);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow ("Project");
    glutDisplayFunc(Display);
    glutTimerFunc(100, moveCloud1, 0);
    glutTimerFunc(100, moveCloud2, 0);
    glutTimerFunc(100, moveCloud3, 0);
    glutTimerFunc(100, wave1, 0);
    glutTimerFunc(100, wave2, 0);
    glutMainLoop();
}

