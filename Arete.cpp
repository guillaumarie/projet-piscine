#include "Arete.h"

//constructeur
Arete::Arete(int idArete, int id1, int id2, float poids1, float poids2):m_idArete{idArete},m_id1{id1},m_id2{id2},m_poids1{poids1},m_poids2{poids2}
{
}

///------------------------------------------------------------------------

Arete::~Arete()
{}


void Arete::afficher1()
{
    std::cout << "Arete entre les sommets " << m_id1 << " et " << m_id2 << " de poids " << m_poids1 << std::endl;
}

void Arete::afficher2()
{
    std::cout << "Arete entre les sommets " << m_id1 << " et " << m_id2 << " de poids " << m_poids2 << std::endl;
}
