//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int n = 10; 
//int arr[10];
//
//
//void selectionSort(int* arr, int n)
//{
//	int last = n-1;
//	int maxIdx;
//
//	while(last >0)
//	{
//		maxIdx = 0;
//		for (int j = 1; j <= last; j++)
//		{
//			if (arr[maxIdx] < arr[j])
//				maxIdx = j;
//
//		}
//		int temp = arr[last];
//		arr[last] = arr[maxIdx];
//		arr[maxIdx] = temp;
//		last--;
//	}
//}
//
//void insertionSort(int* arr, int n)
//{
//	int loc;
//	int i, j;
//
//	for ( i = 1; i < n; i++)
//	{
//
//		loc = arr[i];
//		for ( j = i-1; j >=0 && arr[j] > loc ; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j + 1] = loc;
//	}
//}
//
//
//
//
//void merge(int* s, int p, int q,int r)
//{
//	int i, j, k, l;
//	i = p;
//	j = q + 1;
//	k = p;
//	int sorted[10] = {0,};
//
//	/* 분할 정렬된 list의 합병 */
//	while (i <= q && j <= r) {
//		if (s[i] <= s[j])
//			sorted[k++] = s[i++];
//		else
//			sorted[k++] = s[j++];
//	}
//
//	// 남아 있는 값들을 일괄 복사
//	if (i > q) {
//		for (l = j; l <= r; l++)
//			sorted[k++] = s[l];
//	}
//	// 남아 있는 값들을 일괄 복사
//	else {
//		for (l = i; l <= q; l++)
//			sorted[k++] = s[l];
//	}
//
//	// 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
//	for (l = p; l <= r; l++) {
//		s[l] = sorted[l];
//	}
//}
//
//void mergeSort(int* s, int p, int r)
//{
//	if (p >= r)
//		return;
//	int q = (p + r) / 2;
//	mergeSort(s, p, q);
//	mergeSort(s, q + 1, r);
//	merge(s, p, q, r);
//
//
//}
//
//void quicksort()
//{
//	
//}
//
//
//void main()
//{
//	freopen("input.txt", "r", stdin);
//
//	for(int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	//selectionSort(arr, n);
//	//insertionSort(arr, n);
//	mergeSort(arr,0,n-1);
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//
//	
//}