//#include "04-queue2.h"
//
////��ʼ������
//LinkQueue init_LinkQueue()
//{
//	struct LQueue* myQueue = malloc(sizeof(struct  LQueue));
//	if (myQueue == NULL)
//	{
//		return NULL;
//	}
//	myQueue->pHeader.next = NULL;
//	myQueue->m_size = 0;
//	myQueue->pTail = &myQueue->pHeader;//һ��ʼ��ͷ�ڵ����β�ڵ�
//	return myQueue;
//}
//
////���
//void push_LinkQueue(LinkQueue queue, void* data)
//{
//	if (queue == NULL)
//	{
//		return;
//	}
//	if (data == NULL)
//	{
//		return;
//	}
//	//���� β��
//	struct LQueue* myQueue = queue;
//	//ǰ���ֽ�
//	struct QueueNode* myNode = data;
//	//����ָ��ָ��
//	myQueue->pTail->next = myNode;
//	myNode->next = NULL;
//	//�����µ�β�ڵ�
//	myQueue->pTail = myNode;
//	myQueue->m_size++;
//}
//
////����
//void pop_LinkQueue(LinkQueue queue)
//{
//	if (queue == NULL)
//	{
//		return;
//	}
//	struct LQueue* myQueue = queue;
//	//���� ͷɾ
//	if (myQueue->m_size == 0)
//	{
//		return;
//	}
//	if (myQueue->m_size == 1)
//	{
//		myQueue->pHeader.next = NULL;
//		myQueue->pTail = &myQueue->pHeader;  //1���ڵ��ʱ��Ҫ��β�ڵ㻹ԭ��ͷ
//		myQueue->m_size--;
//		return;
//	}
//	//�����ڵ�Ͷ���2�ڵ�ʱ
//	//��¼��һ�������ݵĽڵ�
//	struct QueueNode* pFirst = myQueue->pHeader.next;
//	//����ָ��ָ��
//	myQueue->pHeader.next = pFirst->next;
//	myQueue->m_size--;
//}
//
////���ض��д�С
//int size_LinkQueue(LinkQueue queue)
//{
//	if (queue == NULL)
//	{
//		return -1;
//	}
//	struct LQueue* myQueue = queue;
//	return myQueue->m_size;
//}
//
////�ж��Ƿ�Ϊ��
//int isEmpty_LinkQueue(LinkQueue queue)
//{
//	if (queue == NULL)
//	{
//		return -1;
//	}
//	struct LQueue* myQueue = queue;
//	if (myQueue->m_size == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
////���ض�ͷ
//void* front_LinkQueue(LinkQueue queue)
//{
//	if (queue == NULL)
//	{
//		return NULL;
//	}
//	struct LQueue* myQueue = queue;
//	return myQueue->pHeader.next;
//}
//
////���ض�β
//void* back_LinkQueue(LinkQueue queue)
//{
//	if (queue == NULL)
//	{
//		return NULL;
//	}
//	struct LQueue* myQueue = queue;
//	return myQueue->pTail;
//}
//
////���ٶ���
//void destroy_LinkQueue(LinkQueue queue)
//{
//	if (queue == NULL)
//	{
//		return;
//	}
//	free(queue);
//	queue = NULL;
//}