#include <iostream>
#include "student.h"
using namespace std;

//主函数 
int main() {
	/*输出消息*/
	cout << "Hello World!" << endl;
	cout << "Hello Github!" << endl;
	
	Student s(101, "Alex", 30, 'M');
	s.print();
	
	return 0;
}
