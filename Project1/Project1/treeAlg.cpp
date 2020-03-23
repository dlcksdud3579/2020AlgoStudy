#include "alg.h"

int binarySearch(int* arr, int data, int left, int right)
{
	int rootNode = (left+right)/ 2;
	

	if (rootNode == NULL || arr[rootNode] == data)
		return rootNode;

	if (data < arr[rootNode])
		return binarySearch(arr,data,0, rootNode -1);
	else
		return binarySearch(arr, data, rootNode +1, right);

	

	
}

void printPreoder(btreeNode* node ,int level)
{
	if (node == NULL)
		return;
	
	for (int i = 0; i < level; i++)
		cout << "-";
	cout << node->data<<endl;
	
	printPreoder(node->leftChild,level+1);
	printPreoder(node->rightChild, level + 1);

}

void makeBtree(char* arr , int n)
{
	btreeNode* rootNode;
	rootNode = (btreeNode*)malloc(sizeof(btreeNode));
	rootNode->data = arr[0];
	rootNode->rightChild = NULL;
	rootNode->leftChild = NULL;

	

	for (int i = 0; i < n; i += 2)
	{
		char parent = arr[i];
		char child = arr[i+1];
		serchNode(rootNode, parent,child);
		
	}
	printPreoder(rootNode,0);
}

void insertBtree(btreeNode* parent, char data)
{
	btreeNode* newNode = (btreeNode*)malloc(sizeof(btreeNode));
	newNode->data = data;
	newNode->leftChild = NULL;
	newNode->rightChild = NULL;

	if (parent->leftChild == NULL)
	{
		parent->leftChild = newNode;
	}
	else if (parent->rightChild == NULL)
	{
		parent->rightChild = newNode;
	}
}

void serchNode(btreeNode* node, char parent ,char child)
{

	if (parent == node->data)
		insertBtree(node, child);
		
	if(node->leftChild != NULL)
		serchNode(node->leftChild, parent,child);
	if (node->rightChild != NULL)
		serchNode(node->rightChild, parent, child);
	
}