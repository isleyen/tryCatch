#include <iostream>
#include "HataAyiklama.h"
using namespace std;



int main() {
	try {
		int n;
		cout << "Lutfen bir sayi giriniz: ";
		cin >> n;
		if (n < 0) {
			throw HataSinifi("Hata Numarasi 104");
		}
		else if (n == 0) {
			throw 101;
		}
		else
			cout << "Program Sonu.." << endl;
	}
	
	catch (HataSinifi h) {
		cout << "Aldiginiz hata için " << h.getHataMesajý() << endl;
	}
	catch (int hatakodu) {
		cout << "Aldiginiz hata kodu: " << hatakodu << endl;
	}
	
}