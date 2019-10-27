#include <iostream>

double harmoniczna(double a[]);
void pobieranie(double a[]);

int main()
{

	double a[2] = { 1,1 };
	while (a[0])
	{
		pobieranie(a);
		if (a[0])
			std::cout << "Srednia harmoniczna liczb: " << a[0] << " i " << a[1] << "to " << harmoniczna(a) << std::endl;
		else
			std::cout << "Koniec prgramu wpisano 0";
	}
	std::cin.get();
	std::cin.get();
	return 0;
}


double harmoniczna(double a[])
{
	double wynik = 2.0*a[0] * a[1] / (a[0] + a[1]);
	return wynik;
}

void pobieranie(double a[])
{
	std::cout << "program oblicza srednia harmoniczna z podanych liczb. \nAby zakonczyc wpisz 0\n";
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Podaj " << i+1 << " liczbe: ";
		while (!(std::cin >> a[i]))
		{
			std::cout << "Zly znak sproubuj jeszcze raz. \nliczby nr : " << i + 1 << ": ";
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
		if (a[i] == 0)
		{
			a[0] = 0;
			break;
		}
	}
}