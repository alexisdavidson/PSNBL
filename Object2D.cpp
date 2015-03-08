#include "Object2D.h"


Object2D::Object2D()
{
    m_texture=NULL;
    m_texture_hover=NULL;
    m_position=Vector3D(0.5,0.5,0);
    m_size=Vector3D(0.1,0.1,0);

    m_clicable=false;
    m_hover=false;
    m_clicked=false;
    m_selected=false;

    m_hasText=false;
}




void Object2D::draw()
{
    if(m_hasText)
    {
        m_text.setX(m_position.X);
        m_text.setY(m_position.Y);

        if(!m_clicable && !m_selected)
            m_text.draw(255,255,255);
        else
        {
            if(m_hover || m_selected)
                m_text.draw(155,155,155);
            else m_text.draw(255,255,255);
        }
    }
    else
    {
        Video::getInstance()->matrixOrtho2D();

        glDisable(GL_LIGHTING);
        glDisable(GL_DEPTH_TEST);
        glEnable(GL_TEXTURE_2D);

        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);

        if(m_hover && m_texture_hover)
        {
            m_texture_hover->bind();
        }
        else
        {
            if(m_texture)
                m_texture->bind();
        }

        glColor4ub(255,255,255,255);
        glBegin(GL_QUADS);
            glTexCoord2d(0,0);    glVertex2d(m_position.X,m_position.Y);
            glTexCoord2d(0,1);    glVertex2d(m_position.X,m_position.Y+m_size.Y);
            glTexCoord2d(1,1);    glVertex2d(m_position.X+m_size.X,m_position.Y+m_size.Y);
            glTexCoord2d(1,0);    glVertex2d(m_position.X+m_size.X,m_position.Y);
        glEnd();

        glDisable(GL_BLEND);

        glEnable(GL_DEPTH_TEST);
        Video::getInstance()->matrixProjection();
    }
}



void Object2D::update(double functionTime)
{

}


void Object2D::updateCursor(Vector3D pos)
{
    m_hover=false;
    if(clic(pos))
        m_hover=true;
}


bool Object2D::clic(Vector3D pos)
{
    //cerr<<"clic on: "<<pos.X<<", "<<pos.Y<<endl;

    //origin clic sdl: top left
    //origin sprite object2D: bot left

    pos.Y=Video::getInstance()->getHeight()-pos.Y;

    pos.X/=Video::getInstance()->getWidth();
    pos.Y/=Video::getInstance()->getHeight();
    //cerr<<"clic on: "<<pos.X<<", "<<pos.Y<<endl;

    if(pos.X>m_position.X && pos.X<m_position.X+m_size.X &&
       pos.Y>m_position.Y && pos.Y<m_position.Y+m_size.Y)
        return true;
    return false;
}


void Object2D::addText(string txt, freetype::font_data* font)
{
    m_hasText=true;
    m_text.ini(Video::getInstance()->getWidth(),Video::getInstance()->getHeight(),font);
    m_text.setTexte(txt);
}

void Object2D::setText(string txt)
{
    m_text.setTexte(txt);
}














