#pragma once
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <stack>
#include <cstdio>
#include <ctime>
#include <cmath>

using namespace std;

#define INF 1000


//1장 정렬 알고리즘
void selectionSort(int* arr, int n);
void insertionSort(int* arr, int n);
void merge(int* s, int p, int q, int r);
void mergeSort(int* s, int p, int r);
void quicksort(int* s, int left, int right);


//2장 연결리스트와 배열을 이용한 트리 및 탐색 알고리즘

//1절 이진탐색트리
int binarySearch(int* arr, int data , int left , int right);

//2절 트리
typedef struct btreeNode  
{
	btreeNode* leftChild;
	btreeNode* rightChild;
	char data;
} btreeNode;


void makeBtree(char* arr, int n );
void insertBtree(btreeNode* parent, char data);
void serchNode(btreeNode* node, char parent, char child);




//3절  연결 리스트 

typedef struct linkNode
{
	int data;
	struct linkNode* nextNode;
}linkNode;

linkNode* makeLinkNode(int data);
linkNode* makeLinkedList(int* arr, int n);
void insertLinkNode(linkNode* root,int data, int pos);
void printLinkedList(linkNode* root);



// 4절 XOR 암호화 

string xorEncryption(string str, string cha);

//5절 dfs 

void dfs(int* arr, int start);

//3장 탐욕기법과 큐를 이용한 알고리즘

//1절 거스름돈

void solveChange(int n , int *coin, int change);

//2절 다익스트라 최단 경로

void dijkstraAlgo(int* arr, int start, int end);

//3절 대기 행렬
void QueueingMatrix(int arrival, int service, int test);

//4장 수학관련 알고리즘
//1절 소수판정
void primeNumber(int start, int end);
//2절 피보나치수열
void fibonacciSequence(int n);
//3절최대공약수,최소공배수
int commonMD(int n, int m);
//4절원주률
void circleRate(int n);
//5절 역행렬
void reMatrix(int *arr);
//코딩 테스트 3/29 
int solution3(vector<int>& A);
string solution4(string& S, string& C);

// line test 4/5
int solution(string answer_sheet, vector<string> sheets);

