#ifndef MENUSTART_H_INCLUDED
#define MENUSTART_H_INCLUDED
#include "Object2D.h"
#include <vector>

void menuStart(vector<Object2D>* b)
{
    //buttons
    b->clear();

    //start
    GTexture::getInstance()->addTexture("../data/textures/interface/title_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/single_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/multi_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/editor_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/options_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/quit_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/back_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/linkocraftcom_hq.png");

    GTexture::getInstance()->addTexture("../data/textures/interface/single_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/multi_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/editor_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/options_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/quit_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/back_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/linkocraftcom_hover_hq.png");

    //options
    GTexture::getInstance()->addTexture("../data/textures/interface/video_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/audio_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/music_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/sound_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/fullscreen_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/resolution_hq.png");

    GTexture::getInstance()->addTexture("../data/textures/interface/video_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/audio_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/music_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/sound_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/fullscreen_hover_hq.png");
    GTexture::getInstance()->addTexture("../data/textures/interface/resolution_hover_hq.png");

    unsigned int ind=b->size();
    b->push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/title_hq.png"));
    (*b)[ind].setPos(Vector3D(0.25,0.6,0));
    (*b)[ind].setSize(Vector3D(0.5,0.4,0));
    (*b)[ind].setName("title");

    ind=(*b).size();
    (*b).push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/single_hq.png"));
    (*b)[ind].setTextureHover(GTexture::getInstance()->getTexture("../data/textures/interface/single_hover_hq.png"));
    (*b)[ind].setPos(Vector3D(0.25,0.5,0));
    (*b)[ind].setSize(Vector3D(0.5,0.075,0));
    (*b)[ind].setName("single");

    ind=(*b).size();
    (*b).push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/multi_hq.png"));
    (*b)[ind].setTextureHover(GTexture::getInstance()->getTexture("../data/textures/interface/multi_hover_hq.png"));
    (*b)[ind].setPos(Vector3D(0.25,0.4,0));
    (*b)[ind].setSize(Vector3D(0.5,0.075,0));
    (*b)[ind].setName("multi");

    ind=(*b).size();
    (*b).push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/editor_hq.png"));
    (*b)[ind].setTextureHover(GTexture::getInstance()->getTexture("../data/textures/interface/editor_hover_hq.png"));
    (*b)[ind].setPos(Vector3D(0.25,0.3,0));
    (*b)[ind].setSize(Vector3D(0.5,0.075,0));
    (*b)[ind].setName("editor");

    ind=(*b).size();
    (*b).push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/options_hq.png"));
    (*b)[ind].setTextureHover(GTexture::getInstance()->getTexture("../data/textures/interface/options_hover_hq.png"));
    (*b)[ind].setPos(Vector3D(0.25,0.2,0));
    (*b)[ind].setSize(Vector3D(0.5,0.075,0));
    (*b)[ind].setName("options");

    ind=(*b).size();
    (*b).push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/linkocraftcom_hq.png"));
    (*b)[ind].setTextureHover(GTexture::getInstance()->getTexture("../data/textures/interface/linkocraftcom_hover_hq.png"));
    (*b)[ind].setPos(Vector3D(0.04,0.04,0));
    (*b)[ind].setSize(Vector3D(0.3,0.03,0));
    (*b)[ind].setName("linkocraftcom");

    ind=(*b).size();
    (*b).push_back(Object2D());
    (*b)[ind].setTexture(GTexture::getInstance()->getTexture("../data/textures/interface/quit_hq.png"));
    (*b)[ind].setTextureHover(GTexture::getInstance()->getTexture("../data/textures/interface/quit_hover_hq.png"));
    (*b)[ind].setPos(Vector3D(0.76,0.04,0));
    (*b)[ind].setSize(Vector3D(0.2,0.075,0));
    (*b)[ind].setName("quit");
}



#endif // MENUSTART_H_INCLUDED
