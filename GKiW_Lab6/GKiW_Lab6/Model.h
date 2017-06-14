#include "Scene.h"

#pragma once
class Model : CScene
{
public:
	
	Model();
	~Model();
	GLuint LoadObj(std::string file);
	GLuint LoadTexture(char * file, int magFilter, int minFilter);
	void Render();
	static GLuint objID;

};

