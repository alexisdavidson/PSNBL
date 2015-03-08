#ifndef OBJECT2D_H_INCLUDED
#define OBJECT2D_H_INCLUDED
#include "Video.h"
#include "Vector3D.h"
#include "GTexture.h"
#include <vector>
#include "Texte.h"

class Object2D
{
    public:
        Object2D();
        void draw();
        void update(double functionTime);
        void updateCursor(Vector3D pos);
        bool clic(Vector3D pos);

        void addText(string txt, freetype::font_data* font);
        void setText(string txt);


        void setTexture(Texture* t){m_texture=t;}
        void setTextureHover(Texture* t){m_texture_hover=t;}
        void setPos(Vector3D v) {m_position=v;}
        void setSize(Vector3D v) {m_size=v;}
        void setClicable(bool c){m_clicable=c;}
        void setHover(bool h){m_hover=h;}
        void setClicked(bool c){m_clicked=c;}
        void setName(std::string s) {m_name=s;}
        void select(bool s){m_selected=s;}

        bool getClicable(){return m_clicable;}
        std::string getName() {return m_name;}
        bool isSelected(){return m_selected;}

    private:
        Texture* m_texture;
        Texture* m_texture_hover;

        Vector3D m_position;
        Vector3D m_size;

        bool m_clicable;
        bool m_hover;
        bool m_clicked;
        bool m_selected;

        std::string m_name;

        bool m_hasText;
        Texte m_text;
};



#endif // OBJECT2D_H_INCLUDED
