#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846
GLfloat position = 0.0f,tion=0.0f;
GLfloat speed = 0.01f,pstn=0.0f;
GLfloat pos = 0.0,spd=0.005f,dps=0.01f;
GLfloat po=0.0,ima=0.0f;
GLfloat stnd=0.0f,st=0.003,stan=0.0;

void update(int value) {

    if(position > 1.20)
        position = -1;

    position += speed;

    if(stnd > 1.20)
        stnd = -1;

    stnd += st;

    if(stan > 1.20)
        stan = -1;

    stan += st;

    if(ima > 1.60)
        ima = -1;

    ima += dps;

    if(pos < -1.40)
        pos = 1;

    pos -= spd;

    if(po > 1.40)
        po = -1;

    po += speed;

    if(tion > 1.40)
        tion = -1;

    tion += spd;

    if(pstn > 1.40)
        pstn = -1;

    pstn += spd;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {

	glClear(GL_COLOR_BUFFER_BIT);
//sky
	glBegin(GL_QUADS);
	glColor3ub(135,206,250);
	glVertex2f(-1,1);
	glVertex2f(1,1);
	glVertex2f(1,0.4);
	glVertex2f(-1,0.4);
	glEnd();

      glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;
//    int i;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	   glLoadIdentity();
//    int i;

	GLfloat xx=-.5f; GLfloat yy=.8f; GLfloat radus =.05f;
	//int trianglAmount = 20;
	//GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (radius * cos(i *  twicePi / triangleAmount)),
			    yy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat aa=-.55f; GLfloat bb=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(aa, bb); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            aa + (radius * cos(i *  twicePi / triangleAmount)),
			    bb + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat cc=-.45f; GLfloat dd=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(cc, dd); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            cc + (radius * cos(i *  twicePi / triangleAmount)),
			    dd + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat ee=-.52f; GLfloat ff=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(ee, ff); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ee + (radius * cos(i *  twicePi / triangleAmount)),
			    ff+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat gg=-.6f; GLfloat hh=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(gg, hh); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            gg + (radius * cos(i *  twicePi / triangleAmount)),
			    hh+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat ggg=0; GLfloat hhh=0.4, rads=0.2;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(ggg, hhh); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ggg + (rads * cos(i *  twicePi / triangleAmount)),
			    hhh+ (rads * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//bird
    glPushMatrix();
glTranslatef(stnd,0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glColor3ub(0,128,0);
    glVertex2f(-0.3,0.6);
    glVertex2f(-0.25,0.59);
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.25,0.61);
    glVertex2f(-0.3,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(173,255,47);
    glVertex2f(-0.21,0.6);
    glVertex2f(-0.25,0.59);
    glVertex2f(-0.25,0.575);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(173,255,47);
    glVertex2f(-0.21,0.6);
    glVertex2f(-0.25,0.61);
    glVertex2f(-0.25,0.625);
    glEnd();

    glPopMatrix();

    glPushMatrix();
glTranslatef(stnd,0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,128,0);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.45,0.49);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.45,0.51);
    glVertex2f(-0.5,0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-0.41,0.5);
    glVertex2f(-0.45,0.49);
    glVertex2f(-0.45,0.475);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(173,255,47);
    glVertex2f(-0.41,0.5);
    glVertex2f(-0.45,0.51);
    glVertex2f(-0.45,0.525);
    glEnd();

glPopMatrix();

    //road
    glBegin(GL_QUADS);
    glColor3ub(178,190,181);
    glVertex2f(-1,-0.99);
    glVertex2f(1,-0.99);
    glVertex2f(1,-0.83);
    glVertex2f(-1,-0.83);
    glEnd();
//TRUCK
glPushMatrix();
glTranslatef(ima,0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-0.95,-0.89);
	glVertex2f(-0.87,-0.89);
	glVertex2f(-0.87,-0.84);
	glVertex2f(-0.95,-0.84);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-0.87,-0.89);
	glVertex2f(-0.85,-0.89);
	glVertex2f(-0.85,-0.85);
	glVertex2f(-0.87,-0.85);
	glEnd();

	GLfloat pp=-.89,qq=-.889,radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(pp,qq); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            pp + (radis * cos(i *  twicePi / triangleAmount)),
			    qq + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat ppp=-.93,qqq=-.889;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(ppp,qqq); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ppp + (radis * cos(i *  twicePi / triangleAmount)),
			    qqq + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
//LORRY
glPushMatrix();
glTranslatef(pos,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(0.65,-0.91);
	glVertex2f(0.57,-0.91);
	glVertex2f(0.57,-0.96);
	glVertex2f(0.65,-0.96);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(0.57,-0.925);
	glVertex2f(0.57,-0.96);
	glVertex2f(0.55,-0.96);
	glVertex2f(0.55,-0.925);
	glEnd();

	GLfloat ccc=.63,ddd=-.96;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(ccc,ddd); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ccc + (radis * cos(i *  twicePi / triangleAmount)),
			    ddd + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=.59,n=-.96;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(j,n); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radis * cos(i *  twicePi / triangleAmount)),
			    n + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

//CAR
glPushMatrix();
glTranslatef(po,0.0f, 0.0f);
	glBegin(GL_QUADS);
	glColor3ub(100,100,100);
	glVertex2f(-0.57,-0.865);
	glVertex2f(-0.5,-0.865);
	glVertex2f(-0.5,-0.89);
	glVertex2f(-0.57,-0.89);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.565,-0.865);
	glVertex2f(-0.56,-0.840);
	glVertex2f(-0.53,-0.840);
	glVertex2f(-0.51,-0.865);
	glEnd();


    GLfloat ss=-.55,tt=-.889;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(ss,tt); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ss + (radis * cos(i *  twicePi / triangleAmount)),
			    tt + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat sss=-.52,ttt=-.889;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(sss,ttt); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            sss + (radis * cos(i *  twicePi / triangleAmount)),
			    ttt + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
    //river
    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2f(-1,0.4);
    glVertex2f(1,0.4);
    glVertex2f(1,-0.8);
    glVertex2f(-1,-0.8);
    glEnd();

    //boat
    glPushMatrix();
glTranslatef(tion,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(100,100,100);
    glVertex2f(-0.725,0.3);
    glVertex2f(-0.7,0.275);
    glVertex2f(-0.65,0.275);
    glVertex2f(-0.625,0.3);
    glVertex2f(-0.725,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(-0.67,0.3);
    glVertex2f(-0.67,0.35);
    glVertex2f(-0.64,0.3);
    glEnd();
    glPopMatrix();

    glPushMatrix();
glTranslatef(pstn,0.0f, 0.0f);
	glBegin(GL_POLYGON);
    glVertex2f(-0.625,-0.05);
    glColor3ub(100,100,100);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.55,-0.1);
    glVertex2f(-0.525,-0.05);
    glVertex2f(-0.625,-0.05);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2f(-0.6,-0.05);
    glVertex2f(-0.6,0);
    glVertex2f(-0.57,-0.05);
    glEnd();
    glPopMatrix();

    //FOREST
    glBegin(GL_POLYGON);
    glColor3ub(89,20,11);
    glVertex2f(-1,-0.2);
    glVertex2f(0,-0.25);
    glVertex2f(-0.3,-0.82);
    glVertex2f(-1,-0.82);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(89,20,11);
    glVertex2f(-0.3,-0.82);
    glVertex2f(1,-0.82);
    glVertex2f(1,-0.45);
    glVertex2f(-0.4,-0.4);
    glEnd();

    //lines
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.9,-0.91);
    glVertex2f(-0.7,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.5,-0.91);
    glVertex2f(-0.3,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.1,-0.91);
    glVertex2f(0.1,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.3,-0.91);
    glVertex2f(0.5,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.7,-0.91);
    glVertex2f(0.9,-0.91);
    glEnd();

    //tree
    glBegin(GL_QUADS);
    glColor3ub(210,105,30);
    glVertex2f(0.6,-0.8);
    glVertex2f(0.65,-0.8);
    glVertex2f(0.65,-0.4);
    glVertex2f(0.6,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(0.625,-0.3);
    glVertex2f(0.55,-0.5);
    glVertex2f(0.7,-0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(0.625,-0.4);
    glVertex2f(0.5,-0.6);
    glVertex2f(0.75,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(210,105,30);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.25,-0.8);
    glVertex2f(0.25,-0.4);
    glVertex2f(0.2,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(0.225,-0.3);
    glVertex2f(0.15,-0.5);
    glVertex2f(0.3,-0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(0.225,-0.4);
    glVertex2f(0.1,-0.6);
    glVertex2f(0.35,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(210,105,30);
    glVertex2f(-0.1,-0.8);
    glVertex2f(-0.15,-0.8);
    glVertex2f(-0.15,-0.4);
    glVertex2f(-0.1,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-0.125,-0.3);
    glVertex2f(-0.2,-0.5);
    glVertex2f(-0.05,-0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-0.125,-0.4);
    glVertex2f(-0.25,-0.6);
    glVertex2f(0,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(210,105,30);
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.65,-0.5);
    glVertex2f(-0.7,-0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-0.675,-0.1);
    glVertex2f(-0.75,-0.3);
    glVertex2f(-0.6,-0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,0);
    glVertex2f(-0.675,-0.2);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.55,-0.4);
    glEnd();

    //building
    glBegin(GL_QUADS);
    glColor3ub(100,100,100);
    glVertex2f(-0.95,-0.7);
    glVertex2f(-0.75,-0.7);
    glVertex2f(-0.75,-0.3);
    glVertex2f(-0.95,-0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(100,100,100);
    glVertex2f(-0.6,-0.7);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.4,-0.3);
    glVertex2f(-0.6,-0.3);
    glEnd();

    //lines
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.4,-0.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.6,-0.5);
    glVertex2f(-0.4,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.4,-0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.48,-0.62);
    glVertex2f(-0.52,-0.62);
    glVertex2f(-0.52,-0.7);
    glVertex2f(-0.48,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.42,-0.43);
    glVertex2f(-0.42,-0.47);
    glVertex2f(-0.46,-0.47);
    glVertex2f(-0.46,-0.43);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.42,-0.33);
    glVertex2f(-0.42,-0.37);
    glVertex2f(-0.46,-0.37);
    glVertex2f(-0.46,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.42,-0.53);
    glVertex2f(-0.42,-0.57);
    glVertex2f(-0.46,-0.57);
    glVertex2f(-0.46,-0.53);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.54,-0.53);
    glVertex2f(-0.58,-0.53);
    glVertex2f(-0.58,-0.57);
    glVertex2f(-0.54,-0.57);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.54,-0.43);
    glVertex2f(-0.58,-0.43);
    glVertex2f(-0.58,-0.47);
    glVertex2f(-0.54,-0.47);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.54,-0.33);
    glVertex2f(-0.58,-0.33);
    glVertex2f(-0.58,-0.37);
    glVertex2f(-0.54,-0.37);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.95,-0.4);
    glVertex2f(-0.75,-0.4);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.95,-0.5);
    glVertex2f(-0.75,-0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.95,-0.6);
    glVertex2f(-0.75,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.77,-0.33);
    glVertex2f(-0.81,-0.33);
    glVertex2f(-0.81,-0.37);
    glVertex2f(-0.77,-0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.77,-0.43);
    glVertex2f(-0.81,-0.43);
    glVertex2f(-0.81,-0.47);
    glVertex2f(-0.77,-0.47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.77,-0.53);
    glVertex2f(-0.81,-0.53);
    glVertex2f(-0.81,-0.57);
    glVertex2f(-0.77,-0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.93,-0.53);
    glVertex2f(-0.89,-0.53);
    glVertex2f(-0.89,-0.57);
    glVertex2f(-0.93,-0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.93,-0.43);
    glVertex2f(-0.89,-0.43);
    glVertex2f(-0.89,-0.47);
    glVertex2f(-0.93,-0.47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.93,-0.33);
    glVertex2f(-0.89,-0.33);
    glVertex2f(-0.89,-0.37);
    glVertex2f(-0.93,-0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.83,-0.62);
    glVertex2f(-0.87,-0.62);
    glVertex2f(-0.87,-0.7);
    glVertex2f(-0.83,-0.7);
    glEnd();



	glFlush();


}

int main(int argc, char** argv)
{
	 glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("City of seaside");
   glutDisplayFunc(display);
   init();
   //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
	glutTimerFunc(100, update, 0);
   glutMainLoop();       // Enter the event-processing loop
	return 0;
}


