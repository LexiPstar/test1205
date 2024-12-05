#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14
//有序数组的合并
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	//输入数组
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并
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




//某个幼儿园里，有5位小朋友编号依次为1, 2, 3, 4, 5他们按照自己的编号顺序围坐在一张圆桌旁。他们身上有若干糖果，现在他们玩一个分糖果游戏。从1号小朋友开始，将自己的糖果均分成3份（如果有多余的糖果，就自己立即吃掉），自己留一份，其余两份分给和他相邻的两个小朋友。接着2, 3, 4, 5 号小朋友也这样做。问一轮结束后，每个小朋友手上分别有多少糖果。
//
//输入格式
//一行,5个用空格隔开的 int 范围内的正整数，分别是游戏开始时1, 2, 3, 4, 5 号小朋友手里糖果的数量。
//
//输出格式
//2行，第1行是用一个空格隔开的5个整数，表示一轮游戏结束后1, 2, 3, 4, 5 号小朋友手里糖果的数量。第2行是一个整数，表示一轮游戏过程中吃掉的糖果的总数。
//int main() {
//	int candies[5];  // 用数组存储五个小朋友的糖果数
//	int i;
//	int totalEaten = 0;  // 记录总共吃掉的糖果数
//
//	// 输入每个小朋友的初始糖果数
//	//printf("请输入每个小朋友的初始糖果数：\n");
//	for (i = 0; i < 5; i++) {
//		//printf("第 %d 个小朋友的糖果数: ", i + 1);
//		scanf("%d", &candies[i]);
//	}
//
//	// 进行一轮分糖果游戏
//	int newCandies[5];  // 存储每个小朋友分糖果后的新糖果数
//
//	// 遍历每个小朋友，进行分糖果
//	for (i = 0; i < 5; i++) {
//		int give = candies[i] / 3;  // 分得的糖果数
//		int remainder = candies[i] % 3;  // 剩余的糖果数，自己吃掉
//
//		// 更新当前小朋友的新糖果数
//		newCandies[i] = remainder + give;
//
//		// 更新相邻小朋友的糖果数
//		newCandies[(i + 1) % 5] += give;  // 给下一个小朋友糖果
//		newCandies[(i + 4) % 5] += give;  // 给前一个小朋友糖果
//
//		// 累加吃掉的糖果数
//		totalEaten += remainder;
//	}
//
//	// 输出每个小朋友分完糖果后的糖果数
//	//printf("\n每个小朋友分完糖果后的糖果数是：\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", newCandies[i]);
//	}
//
//	// 输出总共吃掉的糖果数
//	printf("\n%d\n", totalEaten);
//
//	return 0;
//}





//int main() {
//	int candies[5];  // 存储五个小朋友的糖果数
//	int totalEaten = 0;  // 记录总共吃掉的糖果数
//	int temp[5];  // 临时数组，存储分糖果后的新糖果数
//
//	// 输入每个小朋友的初始糖果数
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &candies[i]);
//	}
//
//	// 进行一轮分糖果游戏
//	for (int i = 0; i < 5; i++) {
//		int give = candies[i] / 3;  // 每人分到的糖果数
//		int remainder = candies[i] % 3;  // 剩余的糖果数，自己吃掉
//
//		// 累加自己吃掉的糖果
//		totalEaten += remainder;
//
//		// 更新新糖果数
//		temp[i] = candies[i] - 2 * give + remainder;  // 自己吃掉剩余的糖果，更新自己的糖果数
//		temp[(i + 1) % 5] += give;  // 给下一个小朋友糖果
//		temp[(i + 4) % 5] += give;  // 给前一个小朋友糖果
//	}
//
//	// 输出每个小朋友分完糖果后的糖果数
//	for (int i = 0; i < 5; i++) {
//		if (i != 0) {
//			printf(" ");
//		}
//		printf("%d", temp[i]);
//	}
//	printf("\n");
//
//	// 输出总共吃掉的糖果数
//	printf("%d\n", totalEaten);
//
//	return 0;
//}



//int main() {
//	int candies[5];  // 五个小朋友的糖果数
//	int totalEaten = 0;  // 总共吃掉的糖果数
//	int temp[5];  // 分糖果后的新糖果数
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
//	//一轮分糖果
//	for (int i = 0; i < 5; i++) 
//	{
//		int give = temp[i] / 3;  // 手里的糖果
//		int remainder = temp[i] % 3;  //自己吃掉
//
//		totalEaten += remainder;// 累加吃掉的糖果
//
//		temp[i] = temp[i] - 2*give -remainder;  // 自己吃掉剩余的糖果，更新自己的糖果数
//		temp[(i + 1) % 5] += give;  // 给下一个小朋友糖果
//		temp[(i + 4) % 5] += give;  // 给前一个小朋友糖果
//	}
//	for (int i = 0; i < 5; i++) 
//	{
//		printf("%d ", temp[i]);
//	}
//	printf("\n");
//	printf("%d\n", totalEaten);
//	return 0;
//}


//// 打印菱形
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		//打印一行
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
//		//打印1行
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
//		//反转
//		int digit = num % 10;//取最后一位
//		count = count * 10 + digit;//反转位数
//		num /= 10;//去掉最后一位
//	}
//	count *= sign;
//	printf("%d\n", count);
//	return 0;
//}


//反转三位数
//int main()
//{
//	int num = 0;
//	int hun = num / 100;
//	int tens = (num / 10) % 10;
//	int units = num % 10;
//	printf("%d%d%d\n", units, tens, hun);
//	return 0;
//}


//大象喝水

//int main()
//{
//re1:	double h = 0;//高
//	double r = 0;//半径
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

//求坐标两点之间的线段距离
//int main()
//{
//	int x1 = 0;
//	int y1 = 0;
//	int x2 = 0;
//	int y2 = 0;
//	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//	printf("%.3f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));//sqrt是开平方函数
//	return 0;
//}


//求三坐标组成三角形面积
//海伦公式->  
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
//	printf("%.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));//海伦公式
//	return 0;
//}


//求等差数列前n项和


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
//	// 确保 n 大于 2 才能有适当的因子
//	if (n <= 2) {
//		printf("没有适当的因子\n");
//		return 0;
//	}
//
//	// 假设最多有 n-2 个因子
//	int arr[n - 2]; // 不存储 1 和 n 本身
//	int count = 0;
//
//	// 找出所有小于 n 的因子（排除 1 和 n）
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			arr[count++] = i;
//		}
//	}
//
//	// 如果没有因子，输出没有因子
//	if (count == 0) {
//		printf("没有适当的因子\n");
//		return 0;
//	}
//
//	// 找到最大因子
//	int max = arr[0];
//	for (int i = 1; i < count; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	printf("最大因子是：%d\n", max);
//	return 0;
//}





// 判断一个数是否是质数
int is_prime(int n) {
	if (n <= 1) 
		return 0;  // 1 不是质数
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0) 
			return 0;  // 如果能整除，则不是质数
	}
	return 1;  // 是质数
}

// 主函数
int main() {
	int n;
	scanf("%d", &n);

	if (n <= 1) {
		printf("没有质数因子\n");
		return 0;
	}

	int factor1 = 0, factor2 = 0;

	// 查找质数因子
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 && is_prime(i)) {
			int other_factor = n / i;
			if (is_prime(other_factor)) {
				factor1 = i;
				factor2 = other_factor;
				break;  // 找到两个质数因子后退出
			}
		}
	}

	if (factor1 > 0 && factor2 > 0) {
		// 输出最大的质数因子
		printf("最大质数因子是：%d\n", factor1 > factor2 ? factor1 : factor2);
	}
	else {
		printf("无法表示为两个质数的乘积\n");
	}

	return 0;
}
