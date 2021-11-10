#include <iostream>
#include<ctime>
#include<math.h>
#include<Windows.h>
using namespace std;

void integers(int l, int h, int w); 
void Peep(char c);
char input;
void ventana();

int main(){
	srand(time(NULL));
		integers(5, 10, 6);
		Peep('b');
		ventana();
	}

void integers(int l, int h, int w) {

	float v = l * w * h / 3;
	cout << v << endl;
}
void Peep(char c) {
	if (c == 'b')
		Beep(456, 1000);
	else if (c == 'p')
		cout << "Beep!" << endl;
	else
		cout << "error" << endl;
}
void ventana() {
	cout << "press r to change window color to red, 'b' to blue, 'g' for green, and 'y' for yellow" << endl;
	cin >> input;
	if (input == 'r')
		system("COLOR 4A");
	else if (input == 'b')
		system("COLOR 1A");
	else if (input == 'g')
		system("COLOR 2A");
	else if (input == 'y')
		system("COLOR 6A");
}
	
