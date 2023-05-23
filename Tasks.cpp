//#include <vector>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	string doSomething()
//	{
//		return "Animal did something";
//	}
//	string doVoice() // �������� ������ �����
//	{
//		return voice();
//	}
//	string voice()
//	{
//		return "Animal's silence";
//	}
//	~Animal()
//	{
//		cout << "~Animal()" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	string doSomething()
//	{
//		return "Cat did something";
//	}
//	string voice()
//	{
//		return "Cat's meow";
//	}
//	~Cat()
//	{
//		cout << "~Cat()" << endl;
//	}
//};
//
//class AnimalCorrect
//{
//public:
//	virtual string doSomething()
//	{
//		return "AnimalCorrect did something";
//	}
//	string doVoice() // �������� ������ �����
//	{
//		return voice();
//	}
//	virtual string voice()
//	{
//		return "AnimalCorrect's silence";
//	}
//	virtual ~AnimalCorrect()
//	{
//		cout << "~AnimalCorrect()" << endl;
//	}
//};
//
//class CatCorrect : public AnimalCorrect
//{
//public:
//	string doSomething()
//	{
//		return "CatCorrect did something";
//	}
//	string voice() override
//	{
//		return "CatCorrect's meow";
//	}
//	~CatCorrect() override
//	{
//		cout << "~CatCorrect()" << endl;
//	}
//};
//
//
//int main()
//{
//	// � ������1 �������� ������ ���������� �����2, ������� ��������� � ���� �� ������ ��� �������������,
//	// � ������-������� �����2 �������������: ��� ���������� ��� ������ ������1 � ������-�������?
//	// !!!����� ������� ���������� � ������1 ����� ������2 ������ ������, � �� �������!!!
//	{
//		// ������ � �������������� ��������
//		Animal animal;
//		Cat cat;
//		cout << cat.doVoice() << endl;
//	}
//	cout << "\n";
//	// � ������1 �������� ������ ���������� �����2, ������� ��������� � ���� �� ������ ��� �����������,
//	// � ������-������� �����2 �������������: ��� ���������� ��� ������ ������1 � ������-�������?
//	// � ������ ������ ����� ������� ���������� � ������1 ����� ������ ��� ������ �������.
//	{
//		// ������ � ������������ ��������
//		AnimalCorrect animal;
//		CatCorrect cat;
//		cout << cat.doVoice() << endl;
//	}
//	cout << "\n";
//	// � ������� ������ �������� ����� �������������, � � ������-������� �������� ����� � ����� �� ������: �����
//	// ����� ����� ���������� ��� ��������� � ������� ����� ��������� �� ������� �����, ����� ��������� �� �����-�������?
//	// !!!� ������ ������ ��������� ����� ������ ������, ��� ������������ � ���� �� ����,
//	// �� ������ ������ ��������� ��� ���������������� � ������-������� �����, ��� �����!!!
//	{
//		// ������ � �������������� ��������, ����������� ����� ���������
//		Animal* animal = new Cat;
//		Cat* cat = new Cat;
//
//		cout << animal->doSomething() << endl;
//		cout << cat->doSomething() << endl;
//		delete animal;
//		delete cat;
//	}
//	cout << "\n\n";
//	// � ������� ������ �������� ����� �����������, � � ������-������� �������� ����� � ����� �� ������: ����� �����
//	// ����� ���������� ��� ��������� � ������� ����� ��������� �� ������� �����, ����� ��������� �� �����-�������?
//	// !!!����� � ����� ������� ��� ��������� ����� ������ �������!!!
//	{
//		// ������ � ������������ ��������, ����������� ����� ���������
//		AnimalCorrect* animal = new CatCorrect;
//		CatCorrect* cat = new CatCorrect;
//
//		cout << animal->doSomething() << endl;
//		cout << cat->doSomething() << endl;
//		delete animal;
//		delete cat;
//	}
//
//	return 0;
//}