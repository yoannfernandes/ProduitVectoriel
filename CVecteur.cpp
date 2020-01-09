#include "CVecteur.h"
using namespace std;

float CVecteur::getX()
{
	return nX;
}

float CVecteur::getY()
{
	return nY;
}

float CVecteur::getZ()
{
	return nZ;
}

void CVecteur::setX(float nX)
{
	this->nX = nX;
}

void CVecteur::setY(float nY)
{
	this->nY = nY;
}

void CVecteur::setZ(float nZ)
{
	this->nZ = nZ;
}

void CVecteur::affichage()
{
	cout << nX << endl;
	cout << nY << endl;
	cout << nZ << endl;
}

void CVecteur::init()
{
	this->nX = 3;
	this->nY = 5;
	this->nZ = 1;
}

CVecteur::CVecteur()
{
}

CVecteur::~CVecteur()
{
}
