#include <iostream>

int main()
{
	int a{ 1025 };			// 100����
	int* pa{ &a };			// 104����
	char* p0 = (char*)pa;   // 108����

	for (int i = 0; i < 4; i++)
	{
		std::cout << (int)(*p0) << std::endl;
		p0++;

		// 100, 101, 102, 103���� ���
	}

	// 1025 = 0x00000401
	// Little Endian ���������� 1, 4, 0, 0 ���

	// �̷��� ������ ����Ʈ�� ������ �� �ְԵȴ�.

}