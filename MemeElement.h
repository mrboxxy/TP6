/*
Fichier: MemeElement.h
Auteur(s): Mohamed Amine Kibiche
Date de creation: 25 f�vrier 2016
Date de modification: 25 f�vrier 2016
Description: Foncteur permet de v�rifier si l'�l�ment existe d�j�a
*/
#ifndef MEMEELEMENT_H
#define MEMEELEMENT_H


#include <string>
template<typename T, typename P>
class MemeElement
{
public:
	
	MemeElement(P* element) : element_(element) {};
	bool operator() (T *element);

private:
	P* element_;
};

template<typename T, typename P>
bool  MemeElement<T,P>::operator() (T *element)
{
	if (element_ != nullptr)
		return (*element) == (*element_);
	return false;
}

#endif // MEMEELEMENT_H