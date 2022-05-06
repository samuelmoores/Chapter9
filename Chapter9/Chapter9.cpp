#include <iostream>
#include <vector>

void print(std::vector<int> v);

void sort(std::vector<int> v);

int main()
{
	std::vector<int> v;
	int next;

	std::cout << "Enter a list of positive numbers\n";
	std::cout << "Enter negative number to end\n";

	std::cin >> next;

	while (next > 0)
	{
		v.push_back(next);
		std::cout << next << " added. ";
		std::cout << "vector size: " << v.size() << std::endl;

		std::cin >> next;
	}

	std::cout << "You entered: \n";

	print(v);
	
}

void print(std::vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
}

void sort(std::vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[i] > v[j])
			{
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
}