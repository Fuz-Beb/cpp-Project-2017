#include "CMatrice.h"
#include "CException.h"


/*****************************
Constructeur par d�faut
******************************
Entr�e : n�ant
Necessit� : n�ant
Sortie : n�ant
Entraine : l'objet en cours est initialis�
*****************************/
template <class Type>
CMatrice<Type>::CMatrice()
{
	ppqMATMatrice = (Type**)malloc(0);
	if (ppqMATMatrice == NULL)
		throw new CException(1, "Echec de l'allocation");
	uiMATNbLignes = 0;
	uiMATNbColonnes = 0;
}

template <class Type>
CMatrice<Type>::~CMatrice()
{
}

/*****************************
Constructeur � deux arguments
******************************
Entr�e : unsigned int - code d'erreur / char * - message d'erreur
Necessit� : n�ant
Sortie : n�ant
Entraine : l'objet en cours est initialis�
*****************************/
template <class Type>
CMatrice<Type>::CMatrice(unsigned int uiNbLignes, unsigned int uiNbColonnes)
{
	uiMATNbLignes = uiNbLignes;
	uiMATNbColonnes = uiNbColonnes;

	// Allocation m�moire de la matrice
	ppqMATMatrice = (Type**) malloc(sizeof(Type*) * uiMATNbLignes); // Allocation des lignes
	if (ppqMATMatrice == NULL)
		throw new CException(1, "Echec de l'allocation");

	for (unsigned int eBoucle = 0; eBoucle < uiMATNbColonnes; eBoucle++) // Allocation des colonnes
	{
		ppqMATMatrice[eBoucle] =  (Type*) malloc(sizeof(Type) * uiMATNbColonnes);
		if (ppqMATMatrice[eBoucle] == NULL)
			throw new CException(1, "Echec de l'allocation");
	}
}

template <class Type>
CMatrice<Type>::CMatrice(CMatrice<Type> & MATMatrice)
{
}

template <class Type>
void CMatrice<Type>::MATEcrireNbLignes(unsigned int uiNbLignes)
{

}

template <class Type>
unsigned int CMatrice<Type>::MATLireNbLignes()
{
	return 0;
}

template <class Type>
void CMatrice<Type>::MATEcrireNbColonnes(unsigned int uiNbColonnes)
{
}

template <class Type>
unsigned int CMatrice<Type>::MATLireNbColonnes()
{
	return 0;
}

template <class Type>
 CMatrice<Type> CMatrice<Type>::MATCalculerTransposee()
{
	return 0;
}

 template <class Type>
CMatrice<Type> CMatrice<Type>::MATAfficherMatrice()
{
	return 0;
}

template <class Type>
CMatrice<Type> CMatrice<Type>::MATPPuissanceMatrice(double dNombre)
{
	return 0;
}

template <class Type>
void CMatrice<Type>::MATModifierElement(unsigned int uiNbLignes, unsigned int uiNbColonnes, Type tElement)
{

}

template <class Type>
 Type CMatrice<Type>::MATLireElement(unsigned int uiNbLignes, unsigned int uiNbColonnes)
{
	return 0;
}

 template <class Type>
void CMatrice<Type>::MATAjouterColonnesM(unsigned int uiNbColonnes)
{
}

template <class Type>
void CMatrice<Type>::MATAjouterLignesM(unsigned int uiNbLignes)
{
}

template <class Type>
void CMatrice<Type>::MATSupprimerColonneM(unsigned int uiNumColonne)
{
}

template <class Type>
void CMatrice<Type>::MATSupprimerLigneM(unsigned int uiNumLigne)
{
}

template <class Type>
CMatrice<Type> & CMatrice<Type>::operator+(CMatrice<Type> & MATMatrice)
{
	return 0;
}
template <class Type>
CMatrice<Type> & CMatrice<Type>::operator-(CMatrice<Type> & MATMatrice)
{
	return 0;
}

template <class Type>
CMatrice<Type> & CMatrice<Type>::operator*(Type & MATMatrice)
{
	return 0;
}

template <class Type>
CMatrice<Type> & CMatrice<Type>::operator*(CMatrice<Type> & MATMatrice)
{
	return 0;
}

template <class Type>
CMatrice<Type> & CMatrice<Type>::operator/(Type & MATMatrice)
{
	return 0;
}

template <class Type>
CMatrice<Type> & CMatrice<Type>::operator/(CMatrice<Type> & MATMatrice)
{
	return 0;
}

template <class Type>
CMatrice<Type> & CMatrice<Type>::operator=(CMatrice<Type> & MATMatrice)
{
	return 0;
}
