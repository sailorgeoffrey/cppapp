//
// Created by Geoffrey Chandler on 4/20/20.
//

#ifndef _POINTERDEMO_H_
#define _POINTERDEMO_H_

class pointer_demo {
 public:
  static int *apply_all (const int *const x_list, const int x_size, const int *const y_list, const int y_size)
  {
	int i{0};
	auto result{new int[x_size * y_size]};
	for (unsigned int y = 0; y < y_size; y++)
	  for (unsigned int x = 0; x < x_size; x++)
		result[i++] = x_list[x] * y_list[y];
	return result;
  }

  static void print (const int *const array, const size_t size)
  {
	std::cout << "[ ";
	for (size_t i{0}; i < size; ++i)
	  std::cout << array[i] << " ";
	std::cout << "]" << std::endl;
  }

  static void run() {
	const int array_1[]{1, 2, 3, 4, 5};
	const size_t array_1_size {5};
	const int array_2[]{10, 20, 30};
	const size_t array_2_size {3};

	std::cout << "Array 1: ";
	print (array_1, array_1_size);

	std::cout << "Array 2: ";
	print (array_2, array_2_size);

	int *results = apply_all (array_1, array_1_size, array_2, array_2_size);
	constexpr size_t results_size {array_1_size * array_2_size};

	std::cout << "Result: ";
	print (results, 15);

	delete[] results;
  }

};

#endif //_POINTERDEMO_H_
