#pragma once
#include "SceneObject.h"
#include "vec3.h"
class Cube // : public SceneObject
{
public:
	Cube(vec3 pos, float size);
	~Cube();
	GLuint textureID;
	vec3 pos;
	float size;

	void Render();
	void Update();
	//void Kolizja(std::vector<SceneObject*> * sceneObjects);
};

