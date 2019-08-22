#include <iostream>
#include <ctime>
#include <cstdlib>
#include "my_numbers_10_30.h"
using namespace std;

int main()
{
    srand(time(NULL));
    my_numbers_10_30 numbers;

	numbers.print_all_details();
	cout << "\nAfter ascending sort\n ";
	numbers.sort_asc();
	numbers.print_all_details();
	numbers.print_prime_numbers();

	cout << "\n-------------- repopulating------------\n";
	numbers.repopulate();
	numbers.print_all_details();
	cout << "\nAfter descending sort\n ";
	numbers.sort_desc();
	numbers.print_all_details();
	numbers.print_prime_numbers();

	return 0;
}