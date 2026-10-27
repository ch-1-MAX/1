#include<string.h>
#include<stdio.h>
//定义一个结构体
struct Student
{
char name[100];
char gender[10];
char id[20];
};
//定义一个函数用于信息交换
void swap(struct Student*p1,struct Student*p2)
{
struct Student temp;
 temp=*p1;
*p1=*p2;
*p2=temp;
}
int main()
{
struct Student stu1={"zh","F","111"};
struct Student stu2={"ch","T","333"};
struct Student  stuArr[2]={stu1,stu2};
//遍历
for(int i=0;i<2;i++)
{
    struct Student temp=stuArr[i];
    printf("学生的信息为:\n姓名：%s\n 性别：%s\n 学号：%s\n",temp.name,temp.gender,temp.id);
}
//调用函数
swap(&stuArr[0],&stuArr[1]);
printf("\n交换后的信息\n");
//遍历
for(int i=0;i<2;i++)
{
    struct Student temp=stuArr[i];
    printf("交换后学生的信息为:\n姓名：%s\n 性别：%s\n 学号：%s\n",temp.name,temp.gender,temp.id);
}
}