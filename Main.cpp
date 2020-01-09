#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "CVecteur.h"
#include "CMatrice.h"
using namespace std;

int main()
{
	CVecteur vect_un;
	vect_un.init();
	vect_un.affichage();

	CMatrice mat_un;
	mat_un.init();
	mat_un.affichage();

	VecteurProd(mat_un[][],vect_un);
	system("pause");
	return 0;
}

void VecteurProd(CMatrice mat_un[][], CVecteur vect_un)
{
	CVecteur vect_deux;
	vect_deux.setX = ((vect_un.getX * mat_un[0][0]) + (vect_un.getY * mat_un[0][1]) + (vect_un.getZ * mat_un[0][2]));
	vect_deux.setY = ((vect_un.getX * mat_un[1][0]) + (vect_un.getY * mat_un[1][1]) + (vect_un.getZ * mat_un[1][2]));
	vect_deux.setZ = ((vect_un.getX * mat_un[2][0]) + (vect_un.getY * mat_un[2][1]) + (vect_un.getZ * mat_un[2][2]));
	cout << 'X: ' << vect_deux.getX << endl;
	cout << 'Y: ' << vect_deux.getY << endl;
	cout << 'Z: ' << vect_deux.getZ << endl;
}
