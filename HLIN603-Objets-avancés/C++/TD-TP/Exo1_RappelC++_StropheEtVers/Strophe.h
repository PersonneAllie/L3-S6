#ifndef Strophe_h
#define Strophe_h

class Strophe {
  private:
    Vers** suiteVers;
    // attribut de type tableau de pointeurs vers des Vers
    // implémente l'agrégation "une strophe se compose de vers"
    int nbVers;
    // on pourrait faire des méthodes d'accès en lecture
    // mais surtout pas de modification

  public:
    Strophe();
    virtual ~Strophe();

    virtual void saisie(istream& is); // rempli la strophe de vers que l'on saisi
    virtual Vers* vers(int i) const; // retourne le vers d'indice i
    virtual void affiche(ostream& os) const; // affiche les vers de la strophe

    // virtual Strophe& operator=(const Strophe& s);
    // virtual Vers*& operator[](int i);
};
// ostream& operator<< (ostream& flotSortie, const Strophe& s);
// istream& operator>> (istream& flotEntree, Strophe& s);

#endif