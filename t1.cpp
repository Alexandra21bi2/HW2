#include "Header.h"


int main()
{
	int a = 8;
	int b = 7;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a, &b); // Âûçîâ ôóíêöèè ñ èñïîëüçîâàíèåì àäðåñîâ ôàêòè÷åñêèõ ïåðåìåííûõ
	std::cout << "a = " << a << ", b = " << b << std::endl;
	return 0;
}
