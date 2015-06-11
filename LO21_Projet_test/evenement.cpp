#include "evenement.h"


Evenement::Evenement(Duree d) : duree(d){}

const QString & Evenement::getID() const
{
   static QString braou("Evenement ponctuel");
   return braou ;
}

Duree Evenement::getDuree() const
{
   return duree;
}

void Evenement::setDuree(const Duree & value)
{
   duree = value;
}
