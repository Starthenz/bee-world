#include"Person.h"
#include <windows.h>  // for MS Windows
#include<math.h>
#include<iostream>
#include<GL/glut.h>


Person::Person(){
    //
}

Person::Person (float x, float y,float  z){

    this->manx = x;
    this->many = y;
    this->manz = z;

}

void Person::update(){

}
void Person::setNewPos(float x1, float y1,float  z1,float angle){
    this->manx = x1;
    this->many = y1;
    this->manz = z1;

    this->angle = angle;
}

void Person::render(){
    glPushMatrix();
    //glColor3f(0.1,0.1,0.1);
    glTranslatef(manx,many,manz); // Translation to the camera center
    glRotatef(angle,0,1,0);
    drawPerson();
    glPopMatrix();
}

void Person::drawPerson(){
    //head
    glRotatef(180,0,1,0);
    glTranslatef(0,-1.6,0);
    glPushMatrix();
    glColor3f(1,1,0.9);
    glTranslatef(0,1.0,0);
    glutSolidSphere(0.2,20,20);
    glPopMatrix();

    //eye
    glPushMatrix();
    glColor3f(1,0,0.0);
    glTranslatef(0.1,1.04,-0.15);
    glutSolidSphere(0.05,20,20);
    glPopMatrix();

    //eye
    glPushMatrix();
    glColor3f(1,0,0.0);
    glTranslatef(-0.1,1.04,-0.15);
    glutSolidSphere(0.05,20,20);
    glPopMatrix();

    //nose
    glPushMatrix();
    glColor3f(1,1,0.0);
    glTranslatef(0.0,0.96,-0.15);
    glRotatef(180,0,1,0);
    glutSolidCone(0.06,0.15,10,15);
    glPopMatrix();



   //neck
    glPushMatrix();
    glColor3f(0.1,0.7,0.7);
    glScalef(1,2.2,1);
    glTranslatef(-0.011,0.32,0);
    glutSolidCube(0.1);
    glPopMatrix();


    //body
    glPushMatrix();
    glColor3f(0.6,0.3,0.9);
    glScalef(2,2.1,2);
    glTranslatef(0,0.24,0);
    glutSolidCube(0.2);
    glPopMatrix();

    //hand1
    glPushMatrix();
    glRotatef(10,1,0,0);
    glColor3f(0.9,2.9,0.1);
    glScalef(0.9,2.3,0.9);
    glTranslatef(-0.25,0.26,-0.1);
    glutSolidCube(0.1);
    glPopMatrix();

    //hand2
    glPushMatrix();
    glRotatef(10,1,0,0);
    glColor3f(0.9,2.9,0.1);
    glScalef(0.9,2.3,0.9);
    glTranslatef(0.25,0.26,-0.1);
    glutSolidCube(0.1);
    glPopMatrix();

    //leg1
    glPushMatrix();
    glRotatef(30,1,0,0);
    glColor3f(0.9,0.1,0.1);
    glScalef(1,2.7,1);
    glTranslatef(0.11,0.06,0);
    glutSolidCube(0.1);
    glPopMatrix();

    //foot
    glPushMatrix();

    glColor3f(0.1,0.1,0.1);
    glScalef(1.1,0.5,2);
    glTranslatef(-0.1,-0.02,-0.02);
    glutSolidCube(0.1);
    glPopMatrix();

    //leg2
    //glRotatef(-30,1,0,0);
    glPushMatrix();
    glColor3f(0.9,0.1,0.1);
    glScalef(1,2.7,1);
    glTranslatef(-0.11,0.06,0.0);
    glutSolidCube(0.1);
    glPopMatrix();

    //foot
    //glRotatef(-30,1,0,0);
    glPushMatrix();
    glColor3f(0.1,0.1,0.1);
    glScalef(1.1,0.5,2);
    glTranslatef(0.1,-0.02,-0.02);
    glutSolidCube(0.1);
    glPopMatrix();

 }
