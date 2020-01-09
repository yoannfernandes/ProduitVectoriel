#pragma once
#include <iostream>

class CVecteur
{
private:

	float nX;
	float nY;
	float nZ;

public:

	float getX();
	float getY();
	float getZ();

	void setX(float nX);
	void setY(float nY);
	void setZ(float nZ);

	void affichage();
	void init();

	CVecteur();

	~CVecteur();


};