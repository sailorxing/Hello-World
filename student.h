#include <iostream>
#include <string>
using namespace std;

/* ѧ���� */
class Student {
	private:
		int no;
		string name;
		int age;
		char sex;
	public:
		Student() { } // Ĭ�Ϲ��캯��
		Student(int _no, string _name, int _age, char _sex) : 
			no(_no), name(_name), age(_age), sex(_sex) {}
		void print() {
			cout << no << " " << name << " " << age << " " << sex << endl;
		}
};
