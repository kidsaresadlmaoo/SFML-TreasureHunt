//#include <iostream>
//#include <ctime>
//#include "functions.h"
//
//void ShowMap(const std::array<char, kRowSize* kColSize>& map_to_show)
//{
//	std::cout << '\t';
//	for (char letter = 'A'; letter < 'A' + kColSize; letter++)
//	{
//		std::cout << letter << '\t';
//	}
//	std::cout << '\n';
//	std::cout << '\n';
//
//	for (int num_row = 0; num_row < kRowSize; num_row++)
//	{
//		std::cout << num_row + 1 << '\t';
//
//		for (int num_col = 0; num_col < kColSize; num_col++)
//		{
//			int idx = num_row * kColSize + num_col;
//			std::cout << map_to_show[idx] << '\t';
//		}
//		std::cout << "\n\n";
//	}
//
//}
//
//int ConvertThing(char x, int y)
//{
//	int Col = x - 'A';
//	int Row = y - 1;
//
//	return Row * kColSize + Col;
//}