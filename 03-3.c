//#include "03-stack2.h"
//
////栈的应用——就近匹配
///*
//从第一个字符开始扫描
//当遇见普通字符时忽略，
//当遇见左括号时压入栈中
//当遇见右括号时从栈中弹出栈顶符号，并进行匹配
//匹配成功：继续读入下一个字符
//匹配失败：立即停止，并报错
//结束：
//成功: 所有字符扫描完毕，且栈为空
//失败：匹配失败或所有字符扫描完毕但栈非空
//*/
//
//int isLeft(char ch)
//{
//	return ch == '(';
//}
//
//int isRight(char ch)
//{
//	return ch == ')';
//}
//
//void printError(char* str, char* errMsg, char* pos)
//{
//	printf("错误信息：%s\n", errMsg);
//	printf("%s\n", str);
//	//计算打印空格数量
//	int num = pos - str;
//	for (int i = 0; i < num; i++)
//	{
//		printf(" ");
//	}
//	printf("|\n");
//}
//
//void test01()
//{
//	char* str = "5+5*(6)+9/3*1)-(1+3(";
//	//char* str = "8+(3–1)*5";
//
//	char* p = str;
//
//	//初始化栈
//	SeqStack myStack = init_SeqStack();
//
//	while (*p != '\0')
//	{
//		//如果是左括号，入栈
//		if (isLeft(*p))
//		{
//			//入栈
//			push_SeqStack(myStack, p);
//		}
//		//如果是右括号 
//		if (isRight(*p))
//		{
//			//栈中有元素——出栈
//			if (size_SeqStack(myStack) > 0)
//			{
//				pop_SeqStack(myStack);
//			}
//			else
//			{
//				//右括号没有匹配到对应的左括号，立即停止，并报错
//				printError(str, "右括号没有匹配到对应的左括号!", p);
//				break;
//			}
//		}
//		p++;
//	}
//
//	//遍历结束 判断是否有 左括号没有匹配到对应的右括号
//	while (size_SeqStack(myStack) > 0)
//	{
//		printError(str, "左括号没有匹配到对应的右括号！", top_SeqStack(myStack));
//		//出栈
//		pop_SeqStack(myStack);
//	}
//
//	//销毁栈
//	destroy_SeqStack(myStack);
//	myStack = NULL;
//
//}
//
//int main() 
//{
//	test01();
//
//	system("pause");
//	return 0;
//}