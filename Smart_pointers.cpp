//#include <vector>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal()" << endl;
//	}
//
//	virtual void talk()
//	{
//		cout << endl;
//	}
//
//	virtual ~Animal()
//	{
//		cout << "~Animal()" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	Cat()
//	{
//		cout << "Cat()" << endl;
//	}
//
//	void talk() override
//	{
//		cout << "Meow" << endl;
//	}
//
//	~Cat() override
//	{
//		cout << "~Cat()" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	Dog()
//	{
//		cout << "Dog()" << endl;
//	}
//
//	void talk() override
//	{
//		cout << "Woof" << endl;
//	}
//
//	~Dog() override
//	{
//		cout << "~Dog()" << endl;
//	}
//};
//
//void method(Animal* who)
//{
//	who->talk();
//}
//
//void method(shared_ptr<Animal> who)
//{
//	who->talk();
//} // deleted who
//
//unique_ptr<Animal> makeCat()
//{
//	return make_unique<Cat>(); // return new Cat();
//}
//
//int main()
//{
//	unique_ptr<Animal> cat = make_unique<Cat>();
//	shared_ptr<Animal> dog = make_unique<Dog>();
//	cout << "\n";
//
//	method(cat.get()); // Отправление хранимого в unique_ptr
//	{
//		auto tmp_cat = makeCat(); // unique_ptr
//		shared_ptr<Animal> tmp_dog = dog;
//	} // deleted tmp_cat
//	cout << "\n";
//	
//	method(dog);
//	cout << "\n";
//	return 0;
//} // deleted *cat, *dog
