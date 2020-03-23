#pragma once
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <stack>

using namespace std;


//1�� ���� �˰���
void selectionSort(int* arr, int n);
void insertionSort(int* arr, int n);
void merge(int* s, int p, int q, int r);
void mergeSort(int* s, int p, int r);
void quicksort(int* s, int left, int right);


//2�� ���Ḯ��Ʈ�� �迭�� �̿��� Ʈ�� �� Ž�� �˰���

//1�� ����Ž��Ʈ��
int binarySearch(int* arr, int data , int left , int right);

//2�� Ʈ��
typedef struct btreeNode  
{
	btreeNode* leftChild;
	btreeNode* rightChild;
	char data;
} btreeNode;


void makeBtree(char* arr, int n );
void insertBtree(btreeNode* parent, char data);
void serchNode(btreeNode* node, char parent, char child);




//3��  ���� ����Ʈ 

typedef struct linkNode
{
	int data;
	struct linkNode* nextNode;
}linkNode;

linkNode* makeLinkNode(int data);
linkNode* makeLinkedList(int* arr, int n);
void insertLinkNode(linkNode* root,int data, int pos);
void printLinkedList(linkNode* root);



// 4�� XOR ��ȣȭ 

string xorEncryption(string str, string cha);

//5�� dfs 

void dfs(int* arr, int start);

//3�� Ž������ ť�� �̿��� �˰���

//1�� �Ž�����

void solveChange(int n , int *coin, int change);

//2�� ���ͽ�Ʈ�� �ִ� ���

