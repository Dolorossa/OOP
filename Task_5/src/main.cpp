#include<thread>
#include<atomic> 
#include<iostream>
#include <fstream>

void summator(int n, int* inputArray, const int size, const int numberOfThreads, std::atomic<int>& sumResult)
{
	for (int i = n; i < size; i += numberOfThreads) {
		sumResult += inputArray[i];
	}
}

int main()
{
    freopen ("input.txt" , "r" , stdin );
    freopen ("output.txt" , "w" , stdout );

	const int size = 15;
	int* inputArray = new int[size];
	const int numberOfThreads = 10;
	std::atomic<int> sumResult(0);

	for (int i = 0; i < size; i++) {
		std::cin>>inputArray[i];
	}

	for (int i = 0; i < numberOfThreads; i++) {
		std::thread t(summator, i, inputArray, size, numberOfThreads, std::ref(sumResult));
		t.detach();
	}

	std::this_thread::sleep_for(std::chrono::seconds(2));

	std::cout << sumResult << std::endl;
}