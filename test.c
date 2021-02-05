#include <stdio.h>
#include <string.h>

#include "yespower.h"

int main(void)
{
	yespower_params_t params = {
		.N = 1024,
		.r = 8
	};

	uint8_t src[80] = "leninlove23";
	yespower_binary_t dst;

	yespower_tls(src, sizeof(src), &params, &dst);

	for (int i = 0; i < sizeof(dst); i++)
		printf("%02x", dst.uc[i]);

	printf("\n");

	return 0;
}
