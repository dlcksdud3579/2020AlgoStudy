#pragma once
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <stack>

using namespace std;


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

