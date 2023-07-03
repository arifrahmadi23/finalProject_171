#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }

	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int a) {
		this->y = a;
	}
	int getY() {
		return y;
	}
	/*lengkapi disini*/
};
class Lingkaran :public bidangDatar { 
	/*lengkapi disini*/
public:
	float r;

	Lingkaran() {
		cout << "Lingkaran dibuat" << endl;
	}

	float Luas()
	{
		float r = getX();
		return 3.14 * r * r;
	}
	float Keliling()
	{
		int r = getX();
		return  2 * 3.14 * r;
	}
	void input()
	{
		cout << "Masukkan jejari : ";
		cin >> r;
		setX(r);
	}
	void cekUkuran()
	{
		float CU = Keliling();
		if (CU > 40)
		{
			cout << "Ukuran Lingkaran adalah besar" << endl;
		}
		else if (CU > 10 && CU < 40)
		{
			cout << "Ukuran Lingkaran adalah sedang" << endl;
		}
		else
		{
			cout << "Ukuran Lingkaran adalah kecil" << endl;
		}
	}
	
	

};
class Persegipanjang :public bidangDatar { 
	/*lengkapi disini*/
public:
	float p;
	float l;
	Persegipanjang() {
		cout << "\nPersegipanjang dibuat" << endl;
	}

	void input() {
		cout << "Masukkan panjang : " ;
		cin >> p;
		setX(p);
		cout << "Masukkan lebar : ";
		cin >> l;
		setY(l);
	}
	float Luas() {
		float p = getX();
		float l = getY();
		return p * l;
	}
	float Keliling() {
		float p = getX();
		float l = getY();
		return (2 * p) + (2 * l);
	}
	void cekUkuran()
	{
		float CU = Keliling();
		if (CU > 40)
		{
			cout << "Ukuran Lingkaran adalah besar" << endl;
		}
		else if (CU > 10 && CU < 40)
		{
			cout << "Ukuran Lingkaran adalah sedang" << endl;
		}
		else
		{
			cout << "Ukuran Lingkaran adalah kecil" << endl;
		}
	}
	
};
int main() { 
	/*lengkapi disini*/ 
	char y;

	

	do {
		Lingkaran L;
		L.input();
		cout << "Luas Lingkaran = " << L.Luas() << endl;
		cout << "Keliling Lingkaran = " << L.Keliling() << endl;
		L.cekUkuran();

		Persegipanjang PP;
		PP.input();
		cout << "Luas Persegipanjang = " << PP.Luas() << endl;
		cout << "Keliling Persegipanjang = " << PP.Keliling() << endl;
		PP.cekUkuran();

		cout << "Apakah anda ingin mengulang program? Y/N ";
		cin >> y;

	} while (y == 'Y' || y == 'y');

	return 0;
}    