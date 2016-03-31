#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        Person();
        Person(float manx,float many,float manz);
        void update();
        void render();
        void setNewPos(float x1, float y1,float  z1,float angle);
        void displayObject();

    private:
        float manx, many,manz,angle;
        void drawPerson();
};

#endif // PERSON_H
