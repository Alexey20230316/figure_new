#include<iostream>
#include<string>
#include<math.h>


// треугольник
class triangle 
{
public:
	double get_tri_a()const
	{
		return a;
	}
	double get_tri_b()const
	{
		return b;
	}
	double get_tri_c()const
	{
		return c;
	}

	double get_tri_A()const
	{
		return A;
	}
	double get_tri_B()const
	{
		return B;
	}
	double get_tri_C()const
	{
		return C;
	}


	triangle() :triangle(a, c, A, C)
	{

	}
	triangle(double a, double c, double A, double C)
	{
		this->a = a;
		this->b = a;
		this->c = c;
		this->A = A;
		this->B = A;
		this->C = C;
	}
	triangle(double a, double b, double c, double A, double B, double C)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

private:
	double a = 0;
	double b = 0;
	double c = 0;
	double A = 0;
	double B = 0;
	double C = 0;

};

// равнобедренный
class isosceles:public triangle
{
public:

	isosceles() :isosceles(a)
	{

	}
	isosceles(double a)
	{
		this->a = a;
		this->b = a;
		this->c = a;
		this->A = 60;
		this->B = 60;
		this->C = 60;
	}
	isosceles(double a, double c, double A, double C) : triangle (a,c,A,C)
	{
	}

	double get_tri_a()const
	{
		return a;
	}
	double get_tri_b()const
	{
		return b;
	}
	double get_tri_c()const
	{
		return c;
	}

	double get_tri_A()const
	{
		return A;
	}
	double get_tri_B()const
	{
		return B;
	}
	double get_tri_C()const
	{
		return C;
	}

private:

	double a = 0;
	double b = 0;
	double c = 0;
	double A = 0;
	double B = 0;
	double C = 0;

};

// равносторонний
class equilateral:public isosceles
{
public:

	equilateral(double a): isosceles(a)
	{

	}

};


// четырехугольник
class quadrilateral 
{
public:
	double get_quad_a()const
	{
		return a;
	}
	double get_quad_b()const
	{
		return b;
	}
	double get_quad_c()const
	{
		return c;
	}
	double get_quad_d()const
	{
		return d;
	}

	double get_quad_A()const
	{
		return A;
	}
	double get_quad_B()const
	{
		return B;
	}
	double get_quad_C()const
	{
		return C;
	}
	double get_quad_D()const
	{
		return D;
	}

	quadrilateral() :quadrilateral(a, b, A, B)
	{

	}
	quadrilateral(double a, double b, double A, double B)
	{
		this->a = a;
		this->b = b;
		this->A = A;
		this->B = B;

	}
	quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
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
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double A = 0;
	double B = 0;
	double C = 0;
	double D = 0;

};


//  паралеллограмм
class parallelogram:public quadrilateral
{
public:

	parallelogram() :parallelogram(c, d)
	{

	}

	parallelogram(double c, double d)
	{
		this->c = c;
		this->d = d;
	}

	parallelogram(double a, double b, double A, double B):quadrilateral(a,b,A,B)
	{
		this->c = a;
		this->d = b;
		this->C = A;
		this->D = B;
	}
	

	double get_quad_c()const
	{
		return c;
	}
	double get_quad_d()const
	{
		return d;
	}
	double get_quad_C()const
	{
		return C;
	}
	double get_quad_D()const
	{
		return D;
	}
private:
	double c = 1;
	double d = 1;
	double C = 1;
	double D = 1;
};


//  прямоугольник
class rectangle:public parallelogram
{
public:

	rectangle() :rectangle(a, A, B)
	{

	}
	rectangle(double a, double A, double B)
	{
		this->a = a;
		this->A = A;
		this->B = B;
	}

	rectangle(double c, double d) :parallelogram(c, d)
	{
		this->a = c;
		this->b = d;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
	}
	

	double get_quad_a()const
	{
		return a;
	}
	double get_quad_b()const
	{
		return b;
	}

	double get_quad_A()const
	{
		return A;
	}
	double get_quad_B()const
	{
		return B;
	}
	double get_quad_C()const
	{
		return C;
	}
	double get_quad_D()const
	{
		return D;
	}

private:
	double a = 0;
	double b = 0;
	double A = 0;
	double B = 0;
	double C = 0;
	double D = 0;
};

// ромб
class rhomb:public rectangle
{
public:

	rhomb() :rhomb(b)
	{

	}
	rhomb(double b)
	{
		this->b = b;
		this->c = b;
		this->d = b;
	}
	rhomb(double a, double A, double B):rectangle(a, A, B)
	{
		this->b = a;
		this->c = a;
		this->d = a;
		this->C = A;
		this->D = B;
	}

	double get_quad_b()const
	{
		return b;
	}
	double get_quad_c()const
	{
		return c;
	}
	double get_quad_d()const
	{
		return d;
	}
	double get_quad_C()const
	{
		return C;
	}
	double get_quad_D()const
	{
		return D;
	}

private:
	double b = 0;
	double c = 0;
	double d = 0;
	double C = 0;
	double D = 0;

};


// квадрат
class quadrate: public rhomb
{
public:

	double get_quad_a()const
	{
		return a;
	}
	double get_quad_A()const
	{
		return A;
	}
	double get_quad_B()const
	{
		return B;
	}
	double get_quad_C()const
	{
		return C;
	}
	double get_quad_D()const
	{
		return D;
	}

	quadrate(double b): rhomb(b)
	{
		this->a = b;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
	}

private:
	double a = 0;
	double A = 0;
	double B = 0;
	double C = 0;
	double D = 0;
};

// функции вывода на консоль
void print_quad(double a, double b, double c, double d, double A, double B, double C, double D)
{
	std::cout << "Стороны: " << a << "\t" << b << "\t" << c << "\t" << d << std::endl
		      << "Углы:    " << A << "\t" << B << "\t" << C << "\t" << D << std::endl << std::endl;
}

void print_tri(double a, double b, double c, double A, double B, double C)
{
	std::cout << "Стороны: " << a << "\t" << b << "\t" << c << "\t" << std::endl
	          << "Углы:    " << A << "\t" << B << "\t" << C << "\t" << std::endl << std::endl;
}

int main() {

	setlocale(LC_ALL, "Russian");

	triangle t(10, 12, 14, 45, 45, 45);
	std::cout << "Треугольник: " << std::endl;
	print_tri(t.get_tri_a(), t.get_tri_b(), t.get_tri_c(),
		      t.get_tri_A(), t.get_tri_B(), t.get_tri_C());

	isosceles g(2, 2, 45, 45);
	std::cout << "Равнобедренный: " << std::endl;
	print_tri(g.get_tri_a(), g.get_tri_b(), g.get_tri_c(),
		      g.get_tri_A(), g.get_tri_B(), g.get_tri_C());

	equilateral l(100);
	std::cout << "Равносторонний: " << std::endl;
	print_tri(l.get_tri_a(), l.get_tri_b(), l.get_tri_c(),
		      l.get_tri_A(), l.get_tri_B(), l.get_tri_C());

	quadrilateral r(22, 44, 33, 66, 55, 44, 11, 29);
	std::cout << "Четырехугольник: " << std::endl;
	print_quad(r.get_quad_a(), r.get_quad_b(), r.get_quad_c(), r.get_quad_d(),
		r.get_quad_A(), r.get_quad_B(), r.get_quad_C(), r.get_quad_D());

	parallelogram p(10, 20, 30, 40);
	std::cout << "Паралеллограмм: " << std::endl;
	print_quad(p.get_quad_a(), p.get_quad_b(), p.get_quad_c(), p.get_quad_d(),
		p.get_quad_A(), p.get_quad_B(), p.get_quad_C(), p.get_quad_D());

	rectangle q(13, 24);
	std::cout << "Прямоугольник: " << std::endl;
	print_quad(q.get_quad_a(), q.get_quad_b(), q.get_quad_c(), q.get_quad_d(),
		q.get_quad_A(), q.get_quad_B(), q.get_quad_C(), q.get_quad_D());
	
	rhomb v(88, 88, 88);
	std::cout << "Ромб: " << std::endl;
	print_quad(v.get_quad_a(), v.get_quad_b(), v.get_quad_c(), v.get_quad_d(),
		v.get_quad_A(), v.get_quad_B(), v.get_quad_C(), v.get_quad_D());

	quadrate m(666);
	std::cout << "Квадрат: " << std::endl;
	print_quad(m.get_quad_a(), m.get_quad_b(), m.get_quad_c(), m.get_quad_d(),
		m.get_quad_A(), m.get_quad_B(), m.get_quad_C(), m.get_quad_D());












}