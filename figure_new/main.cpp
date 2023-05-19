#include<iostream>
#include<string>


class figure
{
public:
	void Tell()
	{
		std::cout << "�������: " << std::endl << a << " " << b << " " << c << std::endl
			<< "����: " << std::endl << A << " " << B << " " << C << std::endl;
	}
	void Tell2()
	{
		std::cout << "�������: " << std::endl << a << " " << b << " " << c << " " << d << std::endl
			<< "����: " << std::endl << A << " " << B << " " << C << " " << D << std::endl;
	}

	figure()
	{
	}

	figure(int a, int b, int c, int A, int B, int C)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	figure(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

	}
private:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
};

// ��������������
class equilateral :public figure
{
public:

	equilateral(int a, int b, int c, int A, int B, int C) :figure(a, b, c, A, B, C)
	{
	}


};
// �������������
class rectangular :public equilateral
{
public:

	rectangular(int a, int b, int c, int A, int B, int C) :equilateral(a, b, c, A, B, C)
	{

	}

};

// ��������������
class isosceles :public rectangular
{
public:

	isosceles(int a, int b, int c, int A, int B, int C) :rectangular(a, b, c, A, B, C)
	{

	}

};

// ���������������
class quadrilateral :public figure
{
public:
	quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :figure(a, b, c, d, A, B, C, D)
	{

	}

};

// �������������
class rectangle :public quadrilateral
{
public:

	rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :quadrilateral(a, b, c, d, A, B, C, D)
	{

	}
};

// �������
class square :public rectangle
{
public:
	square(int a, int b, int c, int d, int A, int B, int C, int D) :rectangle(a, b, c, d, A, B, C, D)
	{

	}
};

// ��������������
class parallellogram :public square
{
public:
	parallellogram(int a, int b, int c, int d, int A, int B, int C, int D) :square(a, b, c, d, A, B, C, D)
	{

	}
};


// ����
class rhomb :public parallellogram
{
public:
	rhomb(int a, int b, int c, int d, int A, int B, int C, int D) :parallellogram(a, b, c, d, A, B, C, D)
	{

	}
};
int main() {

	setlocale(LC_ALL, "Russian");

	/*Player boy;
	Gun gun;
	SubmachinGun Gun;

	boy.Shoot(&Gun);*/

	figure q(1, 2, 1, 2, 1, 2);
	std::cout << "�����������" << std::endl;
	q.Tell();

	equilateral p(10, 10, 10, 60, 60, 60);
	std::cout << "�������������� �����������" << std::endl;
	p.Tell();

	rectangular m(55, 66, 77, 88, 99, 11);
	std::cout << "������������� �����������" << std::endl;
	m.Tell();

	isosceles e(30, 30, 20, 45, 60, 60);
	std::cout << "�������������� �����������" << std::endl;
	e.Tell();

	quadrilateral g(4, 4, 4, 4, 45, 45, 45, 45);
	std::cout << std::endl << "���������������" << std::endl;
	g.Tell2();

	rectangle d(55, 40, 55, 40, 90, 90, 90, 90);
	std::cout << "�������������" << std::endl;
	d.Tell2();

	square a(8, 8, 8, 8, 90, 90, 90, 90);
	std::cout << "�������" << std::endl;
	a.Tell2();

	parallellogram s(234, 234, 230, 230, 45, 50, 45, 50);
	std::cout << "���������������" << std::endl;
	s.Tell2();

	rhomb l(5, 5, 5, 5, 40, 50, 40, 50);
	std::cout << "����" << std::endl;
	l.Tell2();
}
