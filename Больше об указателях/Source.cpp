// ������������ ������ C++
#include<iostream>
using namespace std;

//������� ������ �������� ���������� ���� �������  �������
void pSwap(int* pn, int* pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;

}
//������� ������ �������� ���������� ���� �������� �������
void refSwap(int &refn,int &refm)  {
	int tmp = refn;
	refn = refm;
	refm = tmp;
	
}
//�������, � ������� ���������� �������� ���������� �� 2(�� �������� num)
void myltiply(int &refn1,int &refn2,int num =2) {
	refn1 *= num;
	refn2 *= num;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n,m;            
	            //	���������
	
	//nullptr ��� ������������� ��������� � ���������� ���������, ������ int* pn=0; int*pn=nullptr;
	/*int* pn = &n;
	if(pn!=nullptr)
	cout <<"pn = "<< * pn << endl;*/
	//-------------------------------------

	/*const float pi = 3.14;
	//��������� ���������
	int* const pn = &n;//��������� -���������, ����� ������ ������ ���� ����������
	cout << pn << endl;
	*pn = 10;
	cout << n << endl;
	const int* pm = &n;//��������� �� ���������, ����� ���� ��������� ������ �������� ���������� ������
	const  int* const superN=&n; // ����������� ��������� �� ���������
	//superN=&n;-������;
	//superN=11;-������;
	cout << superN << endl;
	cout << *superN << endl;
	//��������� �� ���������
	const int* pm;*/

											//������
	/*n = 11;
	int* pn = &n;
	int& nref=n; //nref-������ �� ���������� n;
	//������ ���������������� ����� ��� ��������(����������)
	//������ ������ ������������� �� ������ ����������
	//��� ��������� � ����� �������� �������� ���������� � ������� �����
	cout <<"nref = "<< nref << endl;// �� ������ 11
	cout <<"nref = " << &nref << endl;// �� ������ 11
	//����� ������ ����� ������ �������� ���������� �� ������ � ������� �� ����������
	nref = 15;
	cout << n << endl;*/

	n = 10;
	m = 15;
	
	//Swap � ������� ����������
	cout << n << "\t"<<m << endl;
	cout << "������� ���������\n";
	pSwap(&n, &m);
	cout << n << "\t"<<m << endl;
	cout << "____________________\n";
	
	
	//Swap � ������� ������
	int a = 50, b = 60;
	cout << a << "\t" << b << endl;
	cout << "������� ���������\n";
	refSwap(a, b);
	cout << a << "\t" << b << endl;
	cout << "____________________\n";

	myltiply(a,b);

	cout << a << "\t" << b << endl;






























	cout << "\n\n\n\n\n\n\n\n";
	system("pause");
	return 0;
}