//#pragma once
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////�ڵ�ṹ��
//struct LinkNode
//{
//	//������
//	void* data;
//	//ָ����
//	struct LinkNode* next;
//};
//
////����ṹ��
//struct LList
//{
//	//ͷ�ڵ�
//	struct LinkNode pHeader;
//	//������
//	int m_size;
//};
//
////�������� ��ֹ�û�ֱ���޸������Ⱥ�ͷ�ڵ�
//typedef void* LinkList;
//
////��ʼ������
//LinkList init_LinkList();
//
////��������
//void insert_LinkList(LinkList list, int pos, void* data);
//
////��������
//void foreach_LinkList(LinkList list, void(*myForeach)(void*));
//
////ɾ������λ��
//void removeByPos_LinkList(LinkList list, int pos);
//
////����ֵɾ������
//void removeByValue_LinkList(LinkList list, void* data, int(*myCompare)(void*, void*));
//
////�������
//void clear_LinkList(LinkList list);
//
////����������
//int size_LinkList(LinkList list);
//
////��������
//void destroy_Linklist(LinkList list);
