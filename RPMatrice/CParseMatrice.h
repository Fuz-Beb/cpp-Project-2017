#ifndef C_PARSEMATRICE_H
#define C_PARSEMATRICE_H

#include "CParse.h"
#include "CMatrice.h"
#include <string>

class CParseMatrice : public CParse
{
private:
	// Attributs
	unsigned int uiPAMNbLignes;
	unsigned int uiPAMNbColonnes;
	CMatrice<double> MATMatrice;
	
	// Accesseurs
	inline unsigned int PAMLireNbLignes();
	inline void PAMAssignerNbLignes();
	inline unsigned int PAMLireNbColonnes();
	inline void PAMAssignerNbColonnes();
	
	// Methodes
	void PAMVerifierType();
	
public:
	CParseMatrice();
	CParseMatrice(CMatrice<double> MATParam);

	CMatrice<double> * PAMRetournerMatrice();
	void PAMTraiterFichier(char * sChemin);
};

#endif