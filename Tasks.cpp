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
//	string doVoice() // Вызывает другой метод
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
//	string doVoice() // Вызывает другой метод
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
//	// В методе1 базового класса вызывается метод2, который определен в этом же классе как невиртуальный,
//	// у класса-потомка метод2 переопределен: что происходит при вызове метода1 у класса-потомка?
//	// !!!Класс потомок возвращает в методе1 вывод метода2 класса предка, а не потомка!!!
//	{
//		// Классы с невиртуальными методами
//		Animal animal;
//		Cat cat;
//		cout << cat.doVoice() << endl;
//	}
//	cout << "\n";
//	// В методе1 базового класса вызывается метод2, который определен в этом же классе как виртуальный,
//	// у класса-потомка метод2 переопределен: что происходит при вызове метода1 у класса-потомка?
//	// В данном случае класс потомок возвращает в методе1 вывод метода уже класса потомка.
//	{
//		// Классы с виртуальными методами
//		AnimalCorrect animal;
//		CatCorrect cat;
//		cout << cat.doVoice() << endl;
//	}
//	cout << "\n";
//	// В базовом классе объявить метод невиртуальный, а в классе-потомке объявить метод с таким же именем: какой
//	// метод будет вызываться при обращении к объекту через указатель на базовый класс, через указатель на класс-потомок?
//	// !!!В первом случае вызовется метод класса предка, что полиморфизма в себе не несёт,
//	// во втором случае вызовется уже переопределенный в классе-потомке метод, что верно!!!
//	{
//		// Классы с невиртуальными методами, объявленные через указатели
//		Animal* animal = new Cat;
//		Cat* cat = new Cat;
//
//		cout << animal->doSomething() << endl;
//		cout << cat->doSomething() << endl;
//		delete animal;
//		delete cat;
//	}
//	cout << "\n\n";
//	// В базовом классе объявить метод виртуальный, а в классе-потомке объявить метод с таким же именем: какой метод
//	// будет вызываться при обращении к объекту через указатель на базовый класс, через указатель на класс-потомок?
//	// !!!Здесь в обоих случаях уже вызовется метод класса потомка!!!
//	{
//		// Классы с виртуальными методами, объявленные через указатели
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