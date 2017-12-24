#include <iostream>;
#include <stdio.h>;
#include <locale.h>;
#include <math.h>;
using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");

	int N1 = 0;

OsnProgramma:

	cout << "������� ����� ������ \n";
	cout << "����� ����� �� ��������� ������� 0 \n";
	cout << "� ";
	cin >> N1;

	if (N1 != 0) {
		while (N1 < 0 | N1 > 9)
		{
			cout << "�� ����� �������� ����� ������� \n";
			cout << "������� ����� ������ ������ \n";
			cout << "����� ����� �� ��������� ������� 0 \n";
			cout << "� ";
			cin >> N1;
		}

		if (N1 == 1) {
			int A = 0;
			int B = 0;
			int i = 0;
			int N = 0;

			cout << "������� ����� A = ";
			cin >> A;

			cout << "������� ����� B = ";
			cin >> B;

			i = B - 1;
			while (i > A) {
				cout << i << "...";
				i--;
			}

			cout << endl;

			cout << "������� ���������� ����� ��� ������ N = ";
			cin >> N;
			i = A + 1;

			while ((i < B)&&(N!=0)) {
				cout << i << "...";
				i++;
				N--;
			}

			cout << endl;

			goto OsnProgramma;
		}
		else if (N1 == 2) {

			int A = 0;
			int B = 0;
			int N = 0;
			int S = 0;
			float H = 0.0;
			float F = 0.0;
			float x = 0.0;

			cout << "������� ����� A = ";
			cin >> A;
			cout << "������� ����� B = ";
			cin >> B;

			Vvod_N:
			cout << "������� ���������� ����� N = ";
			cin >> N;

			if (N <= 2) {
				cout << "��������� ����� ������ ���� ������ 2-�" << endl;
				goto Vvod_N;
			}

			S = B - A;
			H = static_cast<float>(S) / (N - 1);

			for (x = A; x <= B; x = x + H) {
				F = 1 - sin(x);
				cout << "�������� ������� F(" << x << ")= " << F << endl;
			}
			
			goto OsnProgramma;
		}
		else if (N1 == 3) {
			int D;
			int K=1;
			int i;

			float mas[1000];
			mas[1] = 1;
			mas[2] = 2;

			for (i = 3; i <= 1000; i++) {
				mas[i] = (mas[i - 2] + mas[i - 1]) / 2;
			}

			cout << "������� ����� D" << endl;
			cin >> D;

			for (i = 2; i <= 1000; i++) {
				if (abs(mas[i] - mas[i - 1]) < D) {
					cout << "i = " << i << endl;
					cout << "mas[" << i << "] = " << mas[i] << endl;
					cout << "mas[" << i-1 << "] = " << mas[i-1] << endl;
				};
			}

			goto OsnProgramma;
		}
		else if (N1 == 4) {
			int D;

			Vvod_D:
			cout << "������� ����� D" << endl;
			cin >> D;

			if (D >= 10) {
				int i;
				for (i = 10; i <= D; i++) {
					if ((!(i % 2 == 0)) && (i % 5 == 0)) {
						cout << "i = " << i << endl;
					}
				}
			}
			else {
				cout << "����� D ������ ���� ������ 10" << endl;
				goto Vvod_D;
			}

			goto OsnProgramma;
		}
		else if (N1 == 5) {
			int i = 11;

			for (i; i <= 99; i++) {
				cout << "������� ����� " << i << " ����� " << pow(i, 2) << endl;
			}
			
			goto OsnProgramma;
		}
		else if (N1 == 6) {
			int A;
			int B;
			int i;
			int N = 0;
			int Z = 0;

			cout << "������� ��������� ������������� ����� ������������������ A = ";
			cin >> A;
			cout << "������� �������� ������������� ����� ������������������ B = ";
			cin >> B;
			cout << "������� ��� ������������������ Z = ";
			cin >> Z;

			i = A;
			while (i < 0) {
				i = i + Z;
				N++;
			}

			cout << "���������� ������������� ����� � ������������������ N = " << N << endl;

			goto OsnProgramma;
		}
		else if (N1 == 7) {
			float mas[10];
			int i;
			int k;
			int N = 0;

			cout << "������� ������������������ �� 10 ����� �����" << endl;

			i = 1;
			while (i <= 10) {
				cout << "A" << i << " = ";
				cin >> mas[i];
				i++;
			}

			i = 1;
			k = 1;

			while (i <= 10) {
				k = i + 1;
				while (k <= 10) {
					if (mas[i] == mas[k]) {
						N++;
					}
					k++;
				}
				i++;
			}

			cout << "���������� ������ ��������� ������������������ N = "<< N << endl;

			goto OsnProgramma;
		}
		else if (N1 == 8) {
			int mas[20] = {5,5,5,5,5,5,4,4,4,4,3,3,3,3,3,3,3,3,2,2};
			int i = 0;

			while (mas[i] == 5) {
				i++;
			}
			cout << "���������� 5-� � ������ N = " << i << endl;

			goto OsnProgramma;
		}
		else if (N1 == 9) {
			int mas[31] = { 0,0,0,0,0,0,0,0,0,14,46,12,47,32,0,14,36,47,13,10,4,7,9,10,11,63,45,69,17,32,39};
			int i = 0;

			while (mas[i] == 0) {
				i++;
			}
			cout << "���������� ���� ��� ������� � ������ ������ N = " << i << endl;

			goto OsnProgramma;
		}

	}
	system("pause");
}