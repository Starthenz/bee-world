#include <GL/glut.h>
#include "Tree.h"

Tree :: Tree(float base, float height, float x, float y, float z){
    this->tx = x;
    this->ty = y;
    this->tz = z;
    this->base = base;
    this->height = height;
}

void Tree :: Cone(float height){
    height = height/2;

    glPushMatrix();
        glRotatef(-90, 1.0, 0.0, 0.0);
        glutSolidCone(height, 5, 16, 16);
    glPopMatrix();
}

void Tree :: Stem(float base, float height){
    GLUquadric *object = gluNewQuadric();

    glPushMatrix();
        glColor3f(0,0.5,0.1);
        glRotatef(-90, 1.0, 0.0, 0.0);
        gluCylinder(object, base, base-(0.2*base), height, 40, 40);
    glPopMatrix();
}

void Tree :: drawTree(){

    glPushMatrix();
        glTranslatef(0.0, 0.0, -5);
        Stem(base, height);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.0, height, -5);
        Cone(height);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.0, height+1, -5);
        Cone(height);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.0, height+1.5, -5);
        Cone(height);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.0, height+2, -5);
        Cone(height);
    glPopMatrix();

}

void Tree :: setX(float x){
    this->tx = x;
}

void Tree :: setZ(float z){
    this->tz = z;
}

float Tree :: getX(){
    return tx;
}

float Tree :: getZ(){
    return tz;
}

void Tree :: display(){
       for(int i=-2;i<1;i++){
        for(int j=-2;j<1;j++){
            glPushMatrix();
            glTranslated(i*tx,ty,j*tz);
            drawTree();
            glPopMatrix();
        }
    }

}
