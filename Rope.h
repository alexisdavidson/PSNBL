#ifndef ROPE_H_INCLUDED
#define ROPE_H_INCLUDED
#include "Object.h"

class Rope: public Object
{
    public:
    Rope();
    void ini(Vector3D start, Vector3D dir);

    virtual void update(double functionTime);
    virtual void ini();
    virtual void draw();

    void pullUp();
    void pullDown();

    void linkToObject(Object* o) {linkedTo=o;}
    void unlink();

    private:
    Texture* m_texture;
    bool m_hooked;

    Vector3D m_start;
    Vector3D m_end;
    double m_distance;

    Object* linkedTo;
    Object simulLinked;
};


#endif // ROPE_H_INCLUDED
