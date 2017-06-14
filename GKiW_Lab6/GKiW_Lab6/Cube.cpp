#include "stdafx.h"
#include "Cube.h"


Cube::Cube(vec3 pos, float size)
{
	this->pos = pos;
	this->size = size;
	//type = TYPE_CUBE;
//	textureID = Textures::GetTexture("sciana");
}


Cube::~Cube()
{
}


void Cube::Render()
{
	float amb[] = { 0.3f, 0.3f, 0.3f, 0.0f };
	float dif[] = { 1, 1, 1 , 0.0f };
	float spe[] = { 1, 1,1.0f, 0.0f };
	glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, dif);
	glMaterialfv(GL_FRONT, GL_SPECULAR, spe);
	glMaterialf(GL_FRONT, GL_SHININESS, 0.0f);


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, textureID);


	glPushMatrix();
	glTranslatef(pos.x, pos.y, pos.z);

	// Przod

	glBegin(GL_QUADS);
	glNormal3f(size*0.0f, size*0.0f, size*1.0f);
	glVertex3f(size*1.0f, size*1.0f, size*1.0f);
	glVertex3f(size*-1.0f, size*1.0f, size*1.0f);
	glVertex3f(size*-1.0f, size*-1.0f, size*1.0f);
	glVertex3f(size*1.0f, size*-1.0f, size*1.0f);

	// Tyl
	glNormal3f(size*0.0f, size*0.0f, size*-1.0f);
	glVertex3f(size*-1.0f, size*1.0f, size*-1.0f);
	glVertex3f(size*1.0f, size*1.0f, size*-1.0f);
	glVertex3f(size*1.0f, size*-1.0f, size*-1.0f);
	glVertex3f(size*-1.0f, size* -1.0f, size* -1.0f);

	// Lewa
	glNormal3f(size*-1.0f, size*0.0f, size*0.0f);
	glVertex3f(size*-1.0f, size*1.0f, size*1.0f);
	glVertex3f(size*-1.0f, size*1.0f, size*-1.0f);
	glVertex3f(size*-1.0f, size*-1.0f, size*-1.0f);
	glVertex3f(size*-1.0f, size*-1.0f, size*1.0f);

	// Prawa
	glNormal3f(size*1.0f, size*0.0f, size*0.0f);
	glVertex3f(size*1.0f, size*1.0f, size*-1.0f);
	glVertex3f(size*1.0f, size*1.0f, size*1.0f);
	glVertex3f(size*1.0f, size*-1.0f, size*1.0f);
	glVertex3f(size*1.0f, size*-1.0f, size*-1.0f);

	// Gora
	glNormal3f(size*0.0f, size*1.0f, size*0.0f);
	glVertex3f(size*1.0f, size*1.0f, size*1.0f);
	glVertex3f(size*1.0f, size*1.0f, size*-1.0f);
	glVertex3f(size*-1.0f, size*1.0f, size*-1.0f);
	glVertex3f(size*-1.0f, size*1.0f, size*1.0f);

	// Dol
	glNormal3f(size*0.0f, size*-1.0f, size*0.0f);
	glVertex3f(size*1.0f, size*-1.0f, size*-1.0f);
	glVertex3f(size*1.0f, size*-1.0f, size*1.0f);
	glVertex3f(size*-1.0f, size*-1.0f, size* 1.0f);
	glVertex3f(size*-1.0f, size*-1.0f, size*-1.0f);	
	
	glEnd();
	glPopMatrix();


}


void Cube::Update()
{
}

//void Cube::Kolizja(std::vector<SceneObject*>* sceneObjects)
//{
//}
