/*
TATU REIJONEN - IIO14S1

Harjoitus 17 (Palautus vko 46)
Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
N‰iden kahden muun koululaisen tiedot alustetaan ao.muuttujien
m‰‰rittelyn yhteydess‰.Ainoastaan yhden koululaisen tiedot kysyt‰‰n
k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.

Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
suuruusj‰rjestyksess‰(pienimm‰st‰ suurimpaan) n‰yt‰lle
*/

#include <iostream>
using namespace std;
struct HENKILOTIEDOT
{
	char etunimi[20];
	char sukunimi[20];
	float koulumatka;
	char osoite[30];
	char postinumero[6];
	int kengannumero;

};


void main()
{

	struct HENKILOTIEDOT maija = { "Maija", "Meikalainen", 3000, "Pitkakatu 2", "40700", 39 };
	struct HENKILOTIEDOT pentti = { "Pentti", "Hirvonen", 1000, "Urhonkatu 1", "40101", 46 };

	struct HENKILOTIEDOT henkilotiedot;
	cout << "Anna etunimi: ";
	cin >> henkilotiedot.etunimi;
	cout << "Anna sukunimi: ";
	cin >> henkilotiedot.sukunimi;
	cout << "Anna koulumatka: ";
	cin >> henkilotiedot.koulumatka;
	cout << "Anna osoite: ";
	cin.get();
	cin.get(henkilotiedot.osoite, 30);
	cout << "Anna postinumero: ";
	cin >> henkilotiedot.postinumero;
	cout << "Anna kengannumero: ";
	cin >> henkilotiedot.kengannumero;
	cout << endl << endl;

	if (henkilotiedot.koulumatka < maija.koulumatka && maija.koulumatka < pentti.koulumatka)
	{
		cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
			<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl << endl;
		cout << maija.etunimi << endl << maija.sukunimi << endl << maija.koulumatka << endl
			<< maija.osoite << endl << maija.postinumero << endl << maija.kengannumero << endl << endl;
		cout << pentti.etunimi << endl << pentti.sukunimi << endl << pentti.koulumatka << endl
			<< pentti.osoite << endl << pentti.postinumero << endl << pentti.kengannumero << endl << endl;
	}
	if (henkilotiedot.koulumatka < pentti.koulumatka && pentti.koulumatka < maija.koulumatka)
	{
		cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
			<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl << endl;
		cout << pentti.etunimi << endl << pentti.sukunimi << endl << pentti.koulumatka << endl
			<< pentti.osoite << endl << pentti.postinumero << endl << pentti.kengannumero << endl << endl;
		cout << maija.etunimi << endl << maija.sukunimi << endl << maija.koulumatka << endl
			<< maija.osoite << endl << maija.postinumero << endl << maija.kengannumero << endl << endl;
	}
	if (maija.koulumatka < henkilotiedot.koulumatka && henkilotiedot.koulumatka < pentti.koulumatka)
	{
		cout << maija.etunimi << endl << maija.sukunimi << endl << maija.koulumatka << endl
			<< maija.osoite << endl << maija.postinumero << endl << maija.kengannumero << endl << endl;
		cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
			<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl << endl;
		cout << pentti.etunimi << endl << pentti.sukunimi << endl << pentti.koulumatka << endl
			<< pentti.osoite << endl << pentti.postinumero << endl << pentti.kengannumero << endl << endl;
	}

	if (maija.koulumatka < pentti.koulumatka && pentti.koulumatka < henkilotiedot.koulumatka)
	{
		cout << maija.etunimi << endl << maija.sukunimi << endl << maija.koulumatka << endl
			<< maija.osoite << endl << maija.postinumero << endl << maija.kengannumero << endl << endl;
		cout << pentti.etunimi << endl << pentti.sukunimi << endl << pentti.koulumatka << endl
			<< pentti.osoite << endl << pentti.postinumero << endl << pentti.kengannumero << endl << endl;
		cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
			<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl << endl;
	}
	if (pentti.koulumatka < henkilotiedot.koulumatka && henkilotiedot.koulumatka < maija.koulumatka)
	{
		cout << pentti.etunimi << endl << pentti.sukunimi << endl << pentti.koulumatka << endl
			<< pentti.osoite << endl << pentti.postinumero << endl << pentti.kengannumero << endl << endl;
		cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
			<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl << endl;
		cout << maija.etunimi << endl << maija.sukunimi << endl << maija.koulumatka << endl
			<< maija.osoite << endl << maija.postinumero << endl << maija.kengannumero << endl << endl;
	}


	if (pentti.koulumatka < maija.koulumatka && maija.koulumatka < henkilotiedot.koulumatka)
	{
		cout << pentti.etunimi << endl << pentti.sukunimi << endl << pentti.koulumatka << endl
			<< pentti.osoite << endl << pentti.postinumero << endl << pentti.kengannumero << endl << endl;
		cout << maija.etunimi << endl << maija.sukunimi << endl << maija.koulumatka << endl
			<< maija.osoite << endl << maija.postinumero << endl << maija.kengannumero << endl << endl;
		cout << henkilotiedot.etunimi << endl << henkilotiedot.sukunimi << endl << henkilotiedot.koulumatka << endl
			<< henkilotiedot.osoite << endl << henkilotiedot.postinumero << endl << henkilotiedot.kengannumero << endl << endl;
	}

}