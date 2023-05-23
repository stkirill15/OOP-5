//#include <vector>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	string voice()
//	{
//		return "Silence";
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
//	int* tmp;
//	Cat()
//	{
//		tmp = new int[8];
//	}
//	string voice()
//	{
//		return "Meow";
//	}
//	~Cat()
//	{
//		cout << "~Cat()" << endl;
//		delete[] tmp;
//	}
//};
//
//class AnimalCorrect
//{
//public:
//	virtual string voice()
//	{
//		return "Silence";
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
//	int* tmp;
//	CatCorrect()
//	{
//		tmp = new int[8];
//	}
//	string voice() override
//	{
//		return "Meow";
//	}
//	~CatCorrect() override
//	{
//		cout << "~CatCorrect()" << endl;
//		delete[] tmp;
//	}
//};
//
//int main()
//{
//	vector<Animal*> animals(2);
//	animals[0] = new Animal();
//	animals[1] = new Cat();
//	cout << "Non Virtual:" << endl;
//	for (auto someAnimal : animals) {
//		cout << someAnimal->voice() << endl;
//	}
//	delete animals[0];
//	delete animals[1];
//	cout << endl;
//
//	vector<AnimalCorrect*> correctAnimals(2);
//	correctAnimals[0] = new AnimalCorrect();
//	correctAnimals[1] = new CatCorrect();
//	cout << "Virtual:" << endl;
//	for (auto someAnimal : correctAnimals) {
//		cout << someAnimal->voice() << endl;
//	}
//	delete correctAnimals[0];
//	delete correctAnimals[1];
//	cout << endl;
//	return 0;
//}