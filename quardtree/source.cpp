#include <stdio.h>

#include <iostream>

#include <vector>


#define MAX	(1001)
char array[MAX];

char decompressed[MAX][MAX];

void decompress(char a[], int x, int y, int size);

void decompress(char a[], int x, int y, int size)
{
	char head = 

	//기저사례: 첫 글자가 b 또는 w 인 경우
	if (head == 'b' || head == 'w'){

	}
	else{
		int half = size / 2;
		decompress()

	}


}

int main(void)
{
	int test_case;
	int T;
	freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);
	scanf("%d", &T);
	//printf("T:[%d]\n", T);
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int result = 0;
		scanf("%s", &array);
		printf("%s\n", array);



	}
	return 0; //정상종료시 반드시 0을 리턴해야 합니다.
}
