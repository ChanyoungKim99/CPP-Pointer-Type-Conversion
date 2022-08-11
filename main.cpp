#include <iostream>

int main()
{
	int a{ 1025 };			// 100번지
	int* pa{ &a };			// 104번지
	char* p0 = (char*)pa;   // 108번지

	for (int i = 0; i < 4; i++)
	{
		std::cout << (int)(*p0) << std::endl;
		p0++;

		// 100, 101, 102, 103번지 출력
	}

	// 1025 = 0x00000401
	// Little Endian 저장방식으로 1, 4, 0, 0 출력

	// 이렇게 각각의 바이트를 제어할 수 있게된다.

}