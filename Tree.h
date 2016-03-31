#ifndef TREE_H
#define TREE_H


class Tree {
    public :
        Tree(float base, float height, float tx, float ty, float tz);
        void display();
        void setX(float x);
        void setZ(float z);
        float getX();
        float getZ();
    private :
        float base, height, tx, ty,tz;
        void Cone(float height);
        void Stem(float base, float height);
        void drawTree();
};


#endif // TREE_H
