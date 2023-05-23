//#include <vector>
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual bool isA(const string& Name)
//	{
//		return Name == "Animal";
//	}
//	virtual string classname()
//	{
//		return "Animal";
//	}
//	virtual ~Animal() {}
//};
//
//class Cat : public Animal
//{
//public:
//	bool isA(const string& Name) override
//	{
//		return Name == "Cat" || Animal::isA(Name);
//	}
//
//	string classname() override
//	{
//		return "Cat";
//	}
//
//	string catchMouse()
//	{
//		return "Mouse is catched";
//	}
//	~Cat() override {}
//};
//
//class Kitty : public Cat
//{
//public:
//	bool isA(const string& Name) override
//	{
//		return Name == "Kitty" || Cat::isA(Name);
//	}
//
//	string classname() override
//	{
//		return "Kitty";
//	}
//	~Kitty() override {}
//};
//
//
//class Dog : public Animal
//{
//public:
//	bool isA(const string& Name) override
//	{
//		return Name == "Dog" || Animal::isA(Name);
//	}
//
//	string classname() override
//	{
//		return "Dog";
//	}
//
//	~Dog() override {}
//};
//
//int main()
//{
//	vector<Animal*> animals(5);
//	animals[0] = new Cat();
//	animals[1] = new Dog();
//	animals[2] = new Cat();
//	animals[3] = new Dog();
//	animals[4] = new Kitty();
//	cout << "With Classname:" << endl;
//	for (auto a : animals) // Ищем котов через classname (Найдутся только объекты Cat)
//	{
//		if (a->classname() == "Cat")
//		{
//			Cat* tmp = static_cast<Cat*>(a);
//			cout << tmp->catchMouse() << endl;
//		}
//	}
//
//	cout << "\nWith isA:" << endl;
//	for (auto a : animals) // Ищем котов через isA (найдутся объекты Cat и его потомки)
//	{
//		if (a->isA("Cat"))
//		{
//			Cat* tmp = static_cast<Cat*>(a);
//			cout << tmp->catchMouse() << endl;
//		}
//	}
//	for (size_t i = 0; i < 5; ++i)
//		delete animals[i];
//	return 0;
//}