//#include "02-linkList3.h"
//
////��ʼ������
//LinkList init_LinkList()
//{
//	struct LList* myList = malloc(sizeof(struct LList));
//	if (myList == NULL)
//	{
//		return NULL;
//	}
//	myList->pHeader.next = NULL;
//	myList->m_Size = 0;
//	return myList;
//}
//
////����
//void insert_LinkList(LinkList list, int pos, void* data)
//{
//	if (list == NULL)
//	{
//		return;
//	}
//	if (data == NULL)
//	{
//		return;
//	}
//	struct LList* myList = list;
//	if (pos < 0 || pos >myList->m_Size - 1)
//	{
//		//��Чλ�ý���β��
//		pos = myList->m_Size;
//	}
//	//�û�����ǰ4���ֽ� ��������ʹ��
//	struct LinkNode* myNode = data;
//	//�Ҳ���ڵ��ǰ���ڵ�
//	struct LinkNode* pCurrent = &myList->pHeader;
//	for (int i = 0; i < pos; i++)
//	{
//		pCurrent = pCurrent->next;
//	}
//	//pCurrent��ǰ���ڵ�λ��
//	//����ָ��ָ��
//	myNode->next = pCurrent->next;
//	pCurrent->next = myNode;
//	//����������
//	myList->m_Size++;
//}
//
////��������
//void foreach_LinkList(LinkList list, void(*myForeach)(void*))
//{
//	if (list == NULL)
//	{
//		return;
//	}
//	struct LList* myList = list;
//	struct LinkNode* myNode = myList->pHeader.next;
//	for (int i = 0; i < myList->m_Size; i++)
//	{
//		myForeach(myNode);
//		myNode = myNode->next;
//	}
//}
//
////ɾ���ڵ㰴λ��ɾ��
//void removeByPos_ListList(LinkList list, int pos)
//{
//	if (list == NULL)
//	{
//		return;
//	}
//	struct LList* mylist = list;
//	if (pos < 0 || pos > mylist->m_Size - 1)
//	{
//		return;
//	}
//	//�Ҵ�ɾ���ڵ��ǰ��λ��
//	struct LinkNode* pCurrent = &mylist->pHeader;
//	for (int i = 0; i < pos; i++)
//	{
//		pCurrent = pCurrent->next;
//	}
//	//��¼��ɾ���ڵ�
//	struct LinkNode* pDel = pCurrent->next;
//	//����ָ��ָ��
//	pCurrent->next = pDel->next;
//	//free(pDel); //�������û������ٵģ��û������ͷ�
//	//���³���
//	mylist->m_Size--;
//}
//
////��������
//void destroy_LinkList(LinkList list)
//{
//	if (list == NULL)
//	{
//		return;
//	}
//	free(list);
//	list = NULL;
//}
//
//
//
//
//
//
