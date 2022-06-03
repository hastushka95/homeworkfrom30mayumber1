// homeworkfrom30mayumber1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	int pizzanumb, drinknumb, pizzapeace, drinkpeace, temp;
	float pepprice, margprice, bolonprice, cheeseprice, totalpizza,sell1;
	float colaprice, fantaprice, mauntinprice,sell2;
	float summaorder;
	pepprice = 4.5;
	margprice = 2.8;
	bolonprice = 4.3;
	cheeseprice = 5.5;
	colaprice = 1.5;
	fantaprice = 1.75;
	mauntinprice = 2.2;
	summaorder = 0;
	cout << " welcome to pizzeria u can choice 4 kind of pizza : \n";
	cout<<	" enter 1 for pepperoni\n" << pepprice<<"\n";
	cout << "enter 2 for margarita \n" << margprice<<"\n";
	cout << "enter 3 for bolonezia\n" << bolonprice<<"\n";
	cout << "enter 4 for 4 cheese\n" << cheeseprice<<"\n";
	cin >>pizzanumb;
	cout << "enter how many peace\n";
	cin >> pizzapeace;
	cout << " choice your drink : \n";
	cout << "enter 1 for cola \n" << colaprice<<"\n";
	cout << "enter 2 for fanta\n" << fantaprice<<"\n";
	cout << "enter 3 for mauntin dew\n" << mauntinprice<<"\n";
	cin >> drinknumb;
	cout << "enter how many peace \n";
	cin >> drinkpeace;
	switch (pizzanumb) {
	case 1:
		sell1 = pepprice;
		break;
	case 2:
		sell1 = margprice;
		break;
	case 3:
		sell1 = bolonprice;
		break;
	case 4:
		sell1 = cheeseprice;
		break;
	default:
		cout << " try choice again\n";
		sell1 = 0;
		break;
	}
	switch (drinknumb) {
	case 1:
		sell2 = colaprice;
		break;
	case 2:
		sell2 = fantaprice;
		break;
	case 3:
		sell2 = mauntinprice;
		break;
	default:
		cout << "sorry choice again\n";
		sell2 = 0;
		break;
		}
	temp = pizzapeace;
	if (pizzapeace >= 5) {
		cout << "u got free pizza\n";
		pizzapeace = pizzapeace - pizzapeace / 5;
	}
	summaorder = summaorder + pizzapeace * sell1;
	if ((drinkpeace >= 3) && (sell2 > 2)) {
		cout << "u have discount of drinks 15%\n";
		summaorder = summaorder + drinkpeace * sell2 * (1 - 0.15);
	}
	else {
		summaorder = summaorder + drinkpeace * sell2;
	}
	if (summaorder > 50) {
		cout << "discaount 20%\n";
		summaorder = summaorder * (1 - 0.2);
	}
	cout<<"your order \n";
	cout << "pizza\n"<<"\n"<< pizzanumb<<"\n" << temp<<"\n";
	cout << "drink\n" << drinknumb<<"\n";
	cout << drinkpeace<<"\n" << sell2<<"\n";
	cout << "total summa \n" << summaorder << "\n";
	return 0;


	return 0;

	



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
