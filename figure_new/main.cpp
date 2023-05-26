#include<iostream>
#include<string>


class figure
{
public:
	figure()
	{
	}
	virtual void Tell()
	{
		
	}

};

// треугольник
class triangle :public figure
{
public:
	triangle()
	{
	}
	triangle(int a, int A) // равносторонний
	{
		this->a = a;
		this->b = a;
		this->c = a;
		this->A = A;
		this->B = A;
		this->C = A;
		this-> tri = "Равносторонний треугольник:";
	}
	triangle(int a, int c, int A) //равнобедренный
	{
		this->a = a;
		this->b = a;
		this->c = c;
		this->A = A;
		this->B = (180 - A)/2;
		this->C = B;
		this->tri = "Равнобедренный треугольник:";
	}
	triangle(int a, int b, int c, int A, int B)  // прямоугольный
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;
		this->tri = "Прямоугольный треугольник:";
	}
	triangle(int a, int b, int c, int A, int B, int C)  // треугольник
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		this->tri = "Tреугольник:";
	}

	 void Tell()override
	{
		std::cout << tri << std::endl;
	    std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << std::endl;
		std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C <<  std::endl << std::endl;
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
	std::string tri;
	std::string stor = "Стороны:\t";
	std::string ugl = "Углы:\t\t";
};

// равносторонний
class equilateral :public triangle
{
public:
	
	equilateral(int a, int b):triangle(a,b)
	{
	}
};

// прямоугольный
class rectangular :public triangle
{
public:
	
	rectangular(int a, int b, int c, int A, int B):triangle(a,b,c,A,B)
	{
	}

};

// равнобедренный
class isosceles :public triangle
{
public:

	isosceles(int a, int c, int A) :triangle(a, c, A)
	{

	}

};

// четырехугольник
class quadrilateral :public figure
{
public:
	quadrilateral()
	{
	}
	quadrilateral(int a)// квадрат
	{


		this->tri = "Квадрат:";
	}
	quadrilateral(int a, int b)// прямоугольник
	{
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		this->tri = "Прямоугольник:";
	}
	quadrilateral(int a, int A, int B)// ромб
	{
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->tri = "Ромб:";
	}
	quadrilateral(int a, int b, int A, int B)// паралеллограмм
	{
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->tri = "Паралеллограмм:";
	}
	quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->tri = "Четырехугольник:";
	}

	void Tell()override
	{
		std::cout << tri << std::endl;
		std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << " " << "d = " << d << std::endl;
		std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C << " " << "D = " << D << std::endl << std::endl;
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
	std::string tri;
	std::string stor = "Стороны:\t";
	std::string ugl = "Углы:\t\t";
};

// прямоугольник
class rectangle :public quadrilateral
{
public:

	rectangle(int a, int b) :quadrilateral(a, b)
	{

	}
};

// квадрат
class square :public quadrilateral
{
public:
	square(int a) :quadrilateral(a)
	{
	}
};

// паралеллограмм
class parallellogram :public quadrilateral
{
public:
	parallellogram(int a, int b,int A, int B) :quadrilateral(a, b, A, B)
	{
	}
};

// ромб
class rhomb :public quadrilateral
{
public:
	rhomb(int a,int A, int B) :quadrilateral(a, A, B)
	{
	}
};

int main() {

	setlocale(LC_ALL, "Russian");

	/*Player boy;
	Gun gun;
	SubmachinGun Gun;

	boy.Shoot(&Gun);*/


	// треугольник
	triangle q(2, 2, 2, 30, 30, 30);
	q.Tell();


	// равносторонний
	equilateral a(4,5);
	a.Tell();
	
	// прямоугольный
	rectangular b(3, 4, 5, 60, 80);
	b.Tell();


	// равнобедренный
	isosceles c(22, 10, 45);
	c.Tell();

	// четырехугольник
	quadrilateral d(44, 44, 44, 44, 80, 100, 80, 100);
	d.Tell();

	// прямоугольник
	rectangle e(500, 500);
	e.Tell();

	// квадрат
	square m(1000);
	m.Tell();

	// паралеллограмм
	parallellogram n(10, 10, 70, 110);
	n.Tell();

	// ромб
	rhomb v(35, 10, 170);
	v.Tell();





}
