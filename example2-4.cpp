#include <iostream>
using namespace std;

int main() {
	cout << "이름을 입력하세요. (띄어쓰기X, 한글은 5개 글자, 영문은 10까지 저장할 수 있음) >> ";

	char name[11];
	cin >> name;

	cout << "이름은 " << name << "입니다.\n";
}