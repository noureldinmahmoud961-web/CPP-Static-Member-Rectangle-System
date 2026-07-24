#include <iostream>
using namespace std;

static int counter = 1;
class rectangle {
private:
	int x = 0;
	int y = 0;
	int id = 0;
public:
	rectangle() {
		id = counter;
		cout << "this is the Rectangle num :" << counter << endl;
		cout << "enter width of Rectangle :";
		cin >> x;
		cout << "enter height of Rectangle :";
		cin >> y;
		counter++;
	}
	int area_rect() {
		int area = 0;
		area = x * y;
		return area;

	}
	int get_id() {

		return id;
	}
	friend void area(rectangle ob1, rectangle ob2);
};

void area(rectangle ob1, rectangle ob2) {
	if (ob1.area_rect() > ob2.area_rect()) {
		cout << "area of rectangle num (" << ob1.id << ")is larger";

	}
	if (ob2.area_rect() > ob1.area_rect()) {
		cout << "area of rectangle num (" << ob2.id << ")is larger";
	}
	else {
		cout << "the area is equal";

	}

}

int main() {
	rectangle ob1;
	cout << "==========================" << endl;
	rectangle ob2;
	cout << "==========================" << endl;
	area(ob1, ob2);

	return 0;
}