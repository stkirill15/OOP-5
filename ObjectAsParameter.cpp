//#include <vector>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//size_t count_Base = 0, count_Desc = 0; // Счётчики конструкторов
//
//class Base
//{
//private:
//	size_t idB;
//public:
//	Base() : idB(count_Base++)
//	{
//		cout << "Base() - " << idB << endl;
//	}
//
//	Base(const string& s) : idB(count_Base++)
//	{
//		cout << "Base(const string& s) - " << idB << " " << s << endl;
//	}
//	Base(const Base* a) : idB(count_Base++)
//	{
//		cout << "Base(const Base* a) - " << idB << endl;
//	}
//	Base(const Base& a) : idB(count_Base++)
//	{
//		cout << "Base(const Base& a) - " << idB << endl;
//	}
//
//	~Base()
//	{
//		cout << "~Base() - " << idB << endl;
//		--count_Base;
//	}
//};
//
//class Desc : public Base
//{
//private:
//	size_t idD;
//public:
//	Desc() : idD(count_Desc++)
//	{
//		cout << "Desc() - " << idD << endl;
//	}
//
//	Desc(const string& s) : idD(count_Desc++)
//	{
//		cout << "Desc(const string& s) - " << idD << " " << s << endl;
//	}
//	Desc(const Desc* a) : idD(count_Desc++)
//	{
//		cout << "Desc(const Desc* a) - " << idD << endl;
//	}
//	Desc(const Desc& a) : idD(count_Desc++)
//	{
//		cout << "Desc(const Desc& a) - " << idD << endl;
//	}
//
//	~Desc()
//	{
//		cout << "~Desc() - " << idD << endl;
//		--count_Desc;
//	}
//};
//
//
//void in1(Base a)
//{
//	cout << "in1(Base a)" << endl;
//}
//
//void in2(Base* a)
//{
//	cout << "in2(Base* a)" << endl;
//}
//
//void in3(Base& a)
//{
//	cout << "in3(Base& a)" << endl;
//}
//
//Base out1()
//{
//	Base o("out1 - Base o - return o;");
//	return o;
//}
//Base out2()
//{
//	Base* po = new Base("out2 - Base* po - return *po");
//	return *po;
//}
//Base* out3()
//{
//	Base o("* out3() - Base o - return &o");
//	return &o;
//}
//Base* out4()
//{
//	Base* po = new Base("* out4 - Base* po - return po");
//	return po;
//}
//Base& out5()
//{
//	Base o("& out5() - Base o - return o");
//	return o;
//}
//Base& out6()
//{
//	Base* po = new Base("& out6() - Base* po - return *po");
//	return *po;
//}
//
//int main() {
//	Base* b = new Base(); // Объект класса-предка
//	Desc* d = new Desc(); // Объект класса-наследника
//	// Передача в функцию объекта-предка и объекта-наследника как объекты класса-предка
//	cout << "\n----Start in----" << endl; 
//	in1(*b);
//	in2(b);
//	in3(*b);
//	cout << "\n";
//	in1(*d);
//	in2(d);
//	in3(*d);
//	cout << "----End   in----\n" << endl;
//	delete d;
//	delete b;
//
//	// Возврат объекта класса-предка из функции разными способами
//	cout << "\n";
//	Base o;
//	Base* po;
//	cout << "\n----Start out---" << endl;
//	o = out1();
//	o = out2();
//	po = out3();
//	po = out4();
//	o = out5();
//	o = out6();
//	cout << "----End   out----\n" << endl;
//
//	return 0;
//}