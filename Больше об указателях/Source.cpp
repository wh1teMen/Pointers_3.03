// персональный шаблон C++
#include<iostream>
using namespace std;

//Функция меняет значение переданных двух адресов  местами
void pSwap(int* pn, int* pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;

}
//Функция меняет значение переданных двух значений местами
void refSwap(int &refn,int &refm)  {
	int tmp = refn;
	refn = refm;
	refm = tmp;
	
}
//Функция, в которой переданные значение умножаются на 2(на значение num)
void myltiply(int &refn1,int &refn2,int num =2) {
	refn1 *= num;
	refn2 *= num;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n,m;            
	            //	УКАЗАТЕЛИ
	
	//nullptr для инициализации указатель с нетральным значением, аналог int* pn=0; int*pn=nullptr;
	/*int* pn = &n;
	if(pn!=nullptr)
	cout <<"pn = "<< * pn << endl;*/
	//-------------------------------------

	/*const float pi = 3.14;
	//Указатель константа
	int* const pn = &n;//указатель -константа, можем менять только одну переменную
	cout << pn << endl;
	*pn = 10;
	cout << n << endl;
	const int* pm = &n;//Указатель на константу, через этот указатель менять значение переменной нельзя
	const  int* const superN=&n; // константный указатель на константу
	//superN=&n;-ошибка;
	//superN=11;-ошибка;
	cout << superN << endl;
	cout << *superN << endl;
	//Указатель на константу
	const int* pm;*/

											//ССЫЛКИ
	/*n = 11;
	int* pn = &n;
	int& nref=n; //nref-ссылка на переменную n;
	//Ссылки инициализируются сразу при создании(оьъявлении)
	//Ссылки нельзя перенаправить на другие переменные
	//При обращении к сылке получаем значение переменной к которой ведет
	cout <<"nref = "<< nref << endl;// на экране 11
	cout <<"nref = " << &nref << endl;// на экране 11
	//через ссылку можно менять значение переменной на прямую к которой не обращаемся
	nref = 15;
	cout << n << endl;*/

	n = 10;
	m = 15;
	
	//Swap с помощью указателей
	cout << n << "\t"<<m << endl;
	cout << "функция сработала\n";
	pSwap(&n, &m);
	cout << n << "\t"<<m << endl;
	cout << "____________________\n";
	
	
	//Swap с помощью ссылок
	int a = 50, b = 60;
	cout << a << "\t" << b << endl;
	cout << "функция сработала\n";
	refSwap(a, b);
	cout << a << "\t" << b << endl;
	cout << "____________________\n";

	myltiply(a,b);

	cout << a << "\t" << b << endl;






























	cout << "\n\n\n\n\n\n\n\n";
	system("pause");
	return 0;
}