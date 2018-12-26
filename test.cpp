#include <iostream>
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "ListeTrajet.h"
using namespace std;

void TestTC(){
	TrajetSimple* ts1=new TrajetSimple("A","B","MT");
	TrajetSimple* ts2=new TrajetSimple("B","C","MT");
	TrajetCompose tc1;
	tc1.Ajouter(ts1);
	tc1.Ajouter(ts2);
	ofstream fic("Text.txt");
	tc1.Enregistrer(fic);

}

void TestTS() {
	TrajetSimple t1 = TrajetSimple("Lyon", "Bordeaux", "Train");
	TrajetSimple t2 = TrajetSimple("Lyon", "Paris", "Train");
	std::ofstream fic("Test.txt");
	t1.Enregistrer(fic);
	t2.Enregistrer(fic);

}

/*void TestChargement() {
	ListeTrajet mylist;
	ifstream fic("TestCh.txt");
	mylist.Chargement(fic);
	mylist.Display();

}*/

void TestType() {
	ListeTrajet mylist;
	TrajetSimple* ts1 = new TrajetSimple("A", "B", "MT");
	TrajetSimple* ts2 = new TrajetSimple("B", "C", "MT");
	TrajetCompose* tc1=new TrajetCompose;
	tc1->Ajouter(ts1);
	tc1->Ajouter(ts2);
	TrajetSimple* ts3 =new TrajetSimple("Lyon", "Bordeaux", "Train");
	mylist.Ajouter(tc1);
	mylist.Ajouter(ts3);
	ofstream fic("TestType1.txt");
	mylist.EnregistrerType(fic,2);

}

int main(){
	TestType();
}