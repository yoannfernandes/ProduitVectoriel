#include "CMatrice.h"
using namespace std;

void CMatrice::init()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; < 3; j++)
			Matrice[i][j] = 0;
}

void CMatrice::affichage()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << Matrice[i][j];
		cout << endl;
	}
}

CMatrice::CMatrice()
{
}

CMatrice::~CMatrice()
{
}
