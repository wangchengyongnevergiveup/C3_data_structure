//#include "02-linkList1.h"
//
////��ʼ������
//struct LinkNode* initLinkList()
//{
//	//����ͷ�ڵ�
//	struct LinkNode* pHeader = malloc(sizeof(struct LinkNode));
//	if (pHeader == NULL)
//	{
//		return NULL;
//	}
//	//��ʼ��ͷ�ڵ�
//	//pHeader->num = -1;  //ͷ�ڵ� ��ά��������
//	pHeader->next = NULL;
//	//��¼β�ڵ�λ�ã���������µ�����
//	struct LinkNode* pTail = pHeader;
//	int val = -1;
//	while (1)
//	{
//		//���û���ʼ�������ڵ㣬����û��������-1������������
//		printf("���ʼ�������������-1�������\n");
//		scanf("%d", &val);
//		if (val == -1)
//		{
//			break;
//		}
//		//������벻��-1  ����ڵ㵽������
//		struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
//		newNode->num = val;
//		newNode->next = NULL;
//		//����ָ���ָ��
//		pTail->next = newNode;
//		//�����µ�β�ڵ��ָ��
//		pTail = newNode;
//	}
//	return pHeader;
//}
//
////��������
//void foreach_LinkList(struct LinkNode* pHeader)
//{
//	if (pHeader == NULL)
//	{
//		return;
//	}
//	struct LinkNode* pCurrent = pHeader->next; //ָ����һ������ʵ���ݵĽڵ�
//	while (pCurrent != NULL)
//	{
//		printf("%d\n", pCurrent->num);
//		pCurrent = pCurrent->next;
//	}
//}
//
////��������   new����oldǰ�� ���û�ж�Ӧold����嵽ĩβ
//void insert_LinkList(struct LinkNode* pHeader, int oldVal, int newVal)
//{
//	if (pHeader == NULL)
//	{
//		return;
//	}
//	//����������ʱ�Ľڵ�
//	struct LinkNode* pPrve = pHeader;
//	struct LinkNode* pCurrent = pHeader->next;
//	while (pCurrent != NULL)
//	{
//		if (pCurrent->num == oldVal)
//		{
//			break;
//		}
//		//���û�ҵ���Ӧ��λ��,����ָ������ƶ�
//		pPrve = pCurrent;
//		pCurrent = pCurrent->next;//�����д����Ⱥ�˳���ܱ�
//	}
//	//�����½ڵ�
//	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
//	newNode->num = newVal;
//	newNode->next = NULL;
//	//������ϵ
//	newNode->next = pCurrent;
//	pPrve->next = newNode;
//}
//
////ɾ������
//void delete_LinkList(struct LinkNode* pHeader, int val)
//{
//	if (pHeader == NULL)
//	{
//		return;
//	}
//	//������������ָ�����
//	struct LinkNode* pPrev = pHeader;
//	struct LinkNode* pCurrent = pHeader->next;
//	while (pCurrent != NULL)
//	{
//		if (pCurrent->num == val)
//		{
//			break;
//		}
//		//û���ҵ����ݣ�����ָ������ƶ�
//		pPrev = pCurrent;
//		pCurrent = pCurrent->next;
//	}
//	if (pCurrent == NULL) //û���ҵ��û�Ҫɾ��������
//	{
//		return;
//	}
//	//����ָ���ָ�����ɾ��
//	pPrev->next = pCurrent->next;
//	//ɾ������ɾ���Ľڵ�
//	free(pCurrent);
//	pCurrent = NULL;
//}
//
////�������
//void clear_LinkList(struct LinkNode* pHeader)
//{
//	if (pHeader == NULL)
//	{
//		return;
//	}
//	struct LinkNode* pCurrent = pHeader->next;
//	while (pCurrent != NULL)
//	{
//		//�ȱ���ס��һ���ڵ��λ��
//		struct LinkNode* nextNode = pCurrent->next;
//
//		free(pCurrent);
//
//		pCurrent = nextNode;
//	}
//	pHeader->next = NULL;
//}
//
////��������
//void destroy_LinkList(struct LinkNode* pHeader)
//{
//	if (pHeader == NULL)
//	{
//		return;
//	}
//	//���������
//	clear_LinkList(pHeader);
//	//���ͷ�ͷ�ڵ�
//	free(pHeader);
//	pHeader = NULL;
//}
//
////��ת����
//void reverse_LinkList(struct LinkNode* pHeader)
//{
//	if (pHeader == NULL)
//	{
//		return;
//	}
//	struct LinkNode* pPrev = NULL;
//	struct LinkNode* pCurrent = pHeader->next;
//	struct LinkNode* pNext = NULL;
//	while (pCurrent != NULL)
//	{
//		pNext = pCurrent->next;
//		pCurrent->next = pPrev;
//		pPrev = pCurrent;
//		pCurrent = pNext;
//	}
//	pHeader->next = pPrev;
//}
//
////��������ڵ����
//int size_LinkList(struct LinkNode* pHeader)
//{
//	if (pHeader == NULL)
//	{
//		return -1;
//	}
//	struct LinkNode* pCurrent = pHeader->next;
//	int num = 0;
//	while (pCurrent != NULL)
//	{
//		num++;
//		pCurrent = pCurrent->next;
//	}
//	return num;
//}