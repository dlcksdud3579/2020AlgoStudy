#include "alg.h"

linkNode* makeLinkNode(int data)
{
	linkNode* newNode;
	newNode = (linkNode*)malloc(sizeof(linkNode));
	newNode->data = data;
	newNode->nextNode = NULL;
	return newNode;
}

linkNode* makeLinkedList(int* arr, int n)
{
	linkNode* root = NULL;
	linkNode**indexNode  = &(root); 
	
	for (int i = 0; i < n; i++)
	{
		*indexNode = makeLinkNode(arr[i]);
		indexNode = &((*indexNode)->nextNode);
	}
	return root;
}
void insertLinkNode(linkNode* root, int data, int pos)
{

	linkNode* insertNode = makeLinkNode(data);
	linkNode* index = root;
	for (int i = 1; i < pos; i++)
	{
		index = index->nextNode;
	}
	
	insertNode->nextNode = index->nextNode;
	index->nextNode = insertNode;


}
void printLinkedList(linkNode* root)
{
	linkNode* index = root;

	while (index != NULL)
	{
		cout << index->data <<" ";
		index = index->nextNode;
	}
}