#include <iostream>
#include <vector>


// exceptions
int math(int a) {
	int b = a * 10;
	return b;


}


//templates
template <typename T>
void thing(T a, T b) {

	for (; a <= 10; a++) {

		std::cout << a << std::endl;
	}

	std::cout << b << std::endl;

}


//vectors


int main() {
	int c = math(5);
	std::cout << c << std::endl;

	//finding exceptions: part 1

	try
	{
		throw math(5);
	}
	catch (...)
	{
		std::cout << "found exception " << std::endl;
	}



	// templates: part 2
	int a = 0;
	int b = 0;
	thing(a, b);


	double q = 1.5;
	double p = 2.5;
	thing(p, q);

	//vectors: part 3
	std::vector<int> blahblah;
	for (int i = 0; i <= 10; i++) {

		blahblah.push_back(i);

		std::cout << blahblah[i] << std::endl;

	}

	system("pause");
	return 0;

}





