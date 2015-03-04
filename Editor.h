#ifndef EDITOR_H_INCLUDED
#define EDITOR_H_INCLUDED
#include <SDL.h>
#include <GL/glew.h>
#include "Video.h"
#include "Online.h"
#include "Map.h"
#include "Camera.h"
#include "GTime.h"
#include "Interface.h"
#include "SpellRope.h"

using namespace std;

class Editor
{
    public:
    Editor();

    void ini();
    void play();
    void updateTimes();

    void moveObj(Vector3D key);

    void close();
    ~Editor();

    private:
    bool playLoop;
    Video* m_video;
    Map m_map;
    Camera m_camera;
    Interface m_interface;

    GTime since_last_frame;
    double ft;//function time

    bool grabCursor;

    int m_fps;
    GTime m_fpsTime;

    Vector3D posCur;
    Object* curObj;
};


#endif // EDITOR_H_INCLUDED
