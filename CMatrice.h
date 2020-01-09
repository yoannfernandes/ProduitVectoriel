#pragma once
#include <iostream>

class CMatrice
{
private:

	int Matrice[3][3];

public:

	void init();
	void affichage();

	CMatrice();

	~CMatrice();
};