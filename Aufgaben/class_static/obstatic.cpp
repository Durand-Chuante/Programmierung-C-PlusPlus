using namespace std;

int cpt_ob::cpt = 0;

cpt_ob::cpt_ob()
{
    cout << "++constructeur: objet " << ++cpt <<" est créer" << endl;
}
cpt_ob::~cpt_ob()
{
    cout << "--destructeur: objet " << cpt-- << " est detruit"  << endl;
    cout << "il reste maintenant " << cpt << " objet" << endl;
}
