#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14
//��������ĺϲ�
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	//��������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//�ϲ�
//	int k = 0;
//	int j = 0;
//	int r = 0;
//	int arr3[1000] = { 0 };
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			arr3[r++] = arr1[j];
//			j++;
//		}
//		else
//		{
//			arr3[r++] = arr2[k];
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			arr3[r++] = arr1[j];
//			j++;
//		}
//	}
//	else
//	{
//		for (; k < m; k++)
//		{
//			arr3[r++] = arr2[k];
//			k++;
//		}
//	}
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
	//int j = 0;
	//int k = 0;
	//while (j < n && k < m)
	//{
	//	if (arr1[j] < arr2[k])
	//	{
	//		printf("%d ", arr1[j]);
	//		j++;
	//	}
	//	else
	//	{
	//		printf("%d ", arr2[k]);
	//		k++;
	//	}
	//}
	//if (j < n)
	//{
	//	for (; j < n; j++)
	//	{
	//		printf("%d ", arr1[j]);
	//		j++;
	//	}
	//}
	//else
	//{
	//	for (; k < m; k++)
	//	{
	//		printf("%d ", arr2[k]);
	//		k++;
	//	}
	//}
//	return 0;
//}


//int main()
//{
//	//char ch = 'a';
//	//char* p = &ch;
//	//*p = 'b';
//	//printf("%c\n", ch);
//
//	//char* pc = "abcdef";
//	//printf("%s\n", pc);
//	//return 0;
//
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}




//ĳ���׶�԰���5λС���ѱ������Ϊ1, 2, 3, 4, 5���ǰ����Լ��ı��˳��Χ����һ��Բ���ԡ����������������ǹ�������������һ�����ǹ���Ϸ����1��С���ѿ�ʼ�����Լ����ǹ����ֳ�3�ݣ�����ж�����ǹ������Լ������Ե������Լ���һ�ݣ��������ݷָ��������ڵ�����С���ѡ�����2, 3, 4, 5 ��С����Ҳ����������һ�ֽ�����ÿ��С�������Ϸֱ��ж����ǹ���
//
//�����ʽ
//һ��,5���ÿո������ int ��Χ�ڵ����������ֱ�����Ϸ��ʼʱ1, 2, 3, 4, 5 ��С���������ǹ���������
//
//�����ʽ
//2�У���1������һ���ո������5����������ʾһ����Ϸ������1, 2, 3, 4, 5 ��С���������ǹ�����������2����һ����������ʾһ����Ϸ�����гԵ����ǹ���������
//int main() {
//	int candies[5];  // ������洢���С���ѵ��ǹ���
//	int i;
//	int totalEaten = 0;  // ��¼�ܹ��Ե����ǹ���
//
//	// ����ÿ��С���ѵĳ�ʼ�ǹ���
//	//printf("������ÿ��С���ѵĳ�ʼ�ǹ�����\n");
//	for (i = 0; i < 5; i++) {
//		//printf("�� %d ��С���ѵ��ǹ���: ", i + 1);
//		scanf("%d", &candies[i]);
//	}
//
//	// ����һ�ַ��ǹ���Ϸ
//	int newCandies[5];  // �洢ÿ��С���ѷ��ǹ�������ǹ���
//
//	// ����ÿ��С���ѣ����з��ǹ�
//	for (i = 0; i < 5; i++) {
//		int give = candies[i] / 3;  // �ֵõ��ǹ���
//		int remainder = candies[i] % 3;  // ʣ����ǹ������Լ��Ե�
//
//		// ���µ�ǰС���ѵ����ǹ���
//		newCandies[i] = remainder + give;
//
//		// ��������С���ѵ��ǹ���
//		newCandies[(i + 1) % 5] += give;  // ����һ��С�����ǹ�
//		newCandies[(i + 4) % 5] += give;  // ��ǰһ��С�����ǹ�
//
//		// �ۼӳԵ����ǹ���
//		totalEaten += remainder;
//	}
//
//	// ���ÿ��С���ѷ����ǹ�����ǹ���
//	//printf("\nÿ��С���ѷ����ǹ�����ǹ����ǣ�\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", newCandies[i]);
//	}
//
//	// ����ܹ��Ե����ǹ���
//	printf("\n%d\n", totalEaten);
//
//	return 0;
//}





//int main() {
//	int candies[5];  // �洢���С���ѵ��ǹ���
//	int totalEaten = 0;  // ��¼�ܹ��Ե����ǹ���
//	int temp[5];  // ��ʱ���飬�洢���ǹ�������ǹ���
//
//	// ����ÿ��С���ѵĳ�ʼ�ǹ���
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &candies[i]);
//	}
//
//	// ����һ�ַ��ǹ���Ϸ
//	for (int i = 0; i < 5; i++) {
//		int give = candies[i] / 3;  // ÿ�˷ֵ����ǹ���
//		int remainder = candies[i] % 3;  // ʣ����ǹ������Լ��Ե�
//
//		// �ۼ��Լ��Ե����ǹ�
//		totalEaten += remainder;
//
//		// �������ǹ���
//		temp[i] = candies[i] - 2 * give + remainder;  // �Լ��Ե�ʣ����ǹ��������Լ����ǹ���
//		temp[(i + 1) % 5] += give;  // ����һ��С�����ǹ�
//		temp[(i + 4) % 5] += give;  // ��ǰһ��С�����ǹ�
//	}
//
//	// ���ÿ��С���ѷ����ǹ�����ǹ���
//	for (int i = 0; i < 5; i++) {
//		if (i != 0) {
//			printf(" ");
//		}
//		printf("%d", temp[i]);
//	}
//	printf("\n");
//
//	// ����ܹ��Ե����ǹ���
//	printf("%d\n", totalEaten);
//
//	return 0;
//}



//int main() {
//	int candies[5];  // ���С���ѵ��ǹ���
//	int totalEaten = 0;  // �ܹ��Ե����ǹ���
//	int temp[5];  // ���ǹ�������ǹ���
//
//	for (int i = 0; i < 5; i++) 
//	{
//		scanf("%d", &candies[i]);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		temp[i] = candies[i];
//	}
//	//һ�ַ��ǹ�
//	for (int i = 0; i < 5; i++) 
//	{
//		int give = temp[i] / 3;  // ������ǹ�
//		int remainder = temp[i] % 3;  //�Լ��Ե�
//
//		totalEaten += remainder;// �ۼӳԵ����ǹ�
//
//		temp[i] = temp[i] - 2*give -remainder;  // �Լ��Ե�ʣ����ǹ��������Լ����ǹ���
//		temp[(i + 1) % 5] += give;  // ����һ��С�����ǹ�
//		temp[(i + 4) % 5] += give;  // ��ǰһ��С�����ǹ�
//	}
//	for (int i = 0; i < 5; i++) 
//	{
//		printf("%d ", temp[i]);
//	}
//	printf("\n");
//	printf("%d\n", totalEaten);
//	return 0;
//}


//// ��ӡ����
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 3; i++)
//	{
//		//��ӡ1��
//		int j = 0;
//		for (j = 1; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 5 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	int sign = 1;
//	if (num < 0)
//	{
//		sign = -1;
//		num = -num;
//	}
//	while (num)
//	{
//		//��ת
//		int digit = num % 10;//ȡ���һλ
//		count = count * 10 + digit;//��תλ��
//		num /= 10;//ȥ�����һλ
//	}
//	count *= sign;
//	printf("%d\n", count);
//	return 0;
//}


//��ת��λ��
//int main()
//{
//	int num = 0;
//	int hun = num / 100;
//	int tens = (num / 10) % 10;
//	int units = num % 10;
//	printf("%d%d%d\n", units, tens, hun);
//	return 0;
//}


//�����ˮ

//int main()
//{
//re1:	double h = 0;//��
//	double r = 0;//�뾶
//	scanf("%lf %lf", &h, &r);
//	if ((h < 1 && h>500) || (r < 1 && r>100))
//	{
//		goto re1;
//	}
//	double v = h * r * r * PI;
//	int count = ceil(20000.0 / v);
//	printf("%d\n", count);
//	return 0;
//}

//����������֮����߶ξ���
//int main()
//{
//	int x1 = 0;
//	int y1 = 0;
//	int x2 = 0;
//	int y2 = 0;
//	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//	printf("%.3f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));//sqrt�ǿ�ƽ������
//	return 0;
//}


//��������������������
//���׹�ʽ->  
//int main()
//{
//	double x1 = 0;
//	double y1 = 0;
//	double x2 = 0;
//	double y2 = 0;
//	double x3 = 0;
//	double y3 = 0;
//	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//	double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
//	double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
//	double p = (a + b + c) / 2.0;
//	printf("%.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));//���׹�ʽ
//	return 0;
//}


//��Ȳ�����ǰn���


//int sum(int a1,int d, int n)
//{
//	if (n == 1)
//		return a1;
//	else
//		return sum(a1, d, n - 1) + a1 + (n - 1) * d;
//}
//int main()
//{
//	int a1, a2, n;
//	scanf("%d %d %d", &a1, &a2, &n);
//	int d = a2 - a1;
//	int count = sum(a1, d, n);
//	printf("%d\n", count);
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	// ȷ�� n ���� 2 �������ʵ�������
//	if (n <= 2) {
//		printf("û���ʵ�������\n");
//		return 0;
//	}
//
//	// ��������� n-2 ������
//	int arr[n - 2]; // ���洢 1 �� n ����
//	int count = 0;
//
//	// �ҳ�����С�� n �����ӣ��ų� 1 �� n��
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			arr[count++] = i;
//		}
//	}
//
//	// ���û�����ӣ����û������
//	if (count == 0) {
//		printf("û���ʵ�������\n");
//		return 0;
//	}
//
//	// �ҵ��������
//	int max = arr[0];
//	for (int i = 1; i < count; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	printf("��������ǣ�%d\n", max);
//	return 0;
//}





// �ж�һ�����Ƿ�������
int is_prime(int n) {
	if (n <= 1) 
		return 0;  // 1 ��������
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0) 
			return 0;  // �������������������
	}
	return 1;  // ������
}

// ������
int main() {
	int n;
	scanf("%d", &n);

	if (n <= 1) {
		printf("û����������\n");
		return 0;
	}

	int factor1 = 0, factor2 = 0;

	// ������������
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 && is_prime(i)) {
			int other_factor = n / i;
			if (is_prime(other_factor)) {
				factor1 = i;
				factor2 = other_factor;
				break;  // �ҵ������������Ӻ��˳�
			}
		}
	}

	if (factor1 > 0 && factor2 > 0) {
		// ���������������
		printf("������������ǣ�%d\n", factor1 > factor2 ? factor1 : factor2);
	}
	else {
		printf("�޷���ʾΪ���������ĳ˻�\n");
	}

	return 0;
}
