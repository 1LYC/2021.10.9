#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int arr[51] = { 0 };
	scanf("%d", &a);
	int i = 0;
	int b = 0;
	for (i = 0;i < a;i++)
	{
		scanf("%d", &b);//输入a个数，且这些数为升序
		arr[i] = b;
	}
	int c = 0;
	scanf("%d", &c);//输入要插入的数
	for (i = a - 1;i >= 0;i--)
	{
		//从数列的最右边开始比较
		if (c < arr[i])
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = c;
			break;
		}
	}
	if (i == EOF)//当插入的这个数比这些数都小的时候，判断最左端
	{
		arr[0] = c;
	}
	return 0;
}

//版本2：从最左边开始
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void sort(int* pr, int a, int x)
//{
//    int* pt = pr;
//    while (1)
//    {
//        //最右边
//        if (pt[a - 1] <= x)
//        {
//            pt[a] = x;
//            break;
//        }
//        if ((*pr < x && x <= *(pr + 1)) || (*pr >= x))
//        {
//
//            while (pt[a - 1] > x)
//            {
//                pt[a] = pt[a - 1];
//                a--;
//            }
//            if (a == 0)
//            {
//                //最左边
//                pt[0] = x;
//            }
//            else
//            {
//                *(pr + 1) = x;
//            }
//            break;
//        }
//        else
//        {
//            pr++;
//        }
//    }
//}
//int main()
//{
//    int a = 0;
//    int x = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &a);
//    int i = 0;
//    //第一步
//    for (i = 0;i < a;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);//第二步
//    sort(arr, a, x);//第三步
//    for (i = 0;i < a + 1;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
