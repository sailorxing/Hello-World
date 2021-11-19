#include <iostream>
#include <string>
using namespace std;

/* 学生类 */
class Student {
	private:
		int no;
		string name;
		int age;
		char sex;
	public:
		Student() { } // 默认构造函数
		Student(int _no, string _name, int _age, char _sex) : 
			no(_no), name(_name), age(_age), sex(_sex) {}
		void print() {
			cout << no << " " << name << " " << age << " " << sex << endl;
		}
};
