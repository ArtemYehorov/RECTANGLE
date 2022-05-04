#include <iostream>
using namespace std;

void rectangle(int a,int b, int* Pr,int* Sr)
{
	// пример разадресации указателя (доступ к ОРИГИНАЛУ объекта)
	//*ptr *= 1.1; // price += 10
	*Pr = 2 * (a + b);
	*Sr = a * b;
	 // *ptr == price
	// ptr == &price
}

int main()
{
	
	int x;
	int y;

	cout << "Enter width and height: " << endl;
	cin >> x >> y;

	int P = 0;
	int S = 0;


	cout << "Width - " << x << endl;
	cout << "Height - " << y << endl;


	rectangle(x,y,&P,&S); // передача по указателю (подразумевает передачу АДРЕСА переменной)

	cout << "Perimeter - " << P << endl;
	cout << "Area - " << S << endl;
	
}