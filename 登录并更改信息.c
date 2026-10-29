#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[100];
    char id[100];
    char gender[100];
    double high;
};
//定义一个函数用与判断  1相等 0不相等
int judge(char*a,char *b)
{
    int i=0;
    while(a[i]!='\0'&&b[i]!='\0')//从第0个字符开始对比直到结束
    {
        if(a[i]!=b[i])//不一样返回0
        {
            return 0;
        }
        i++;//一样对比下一个
    }
    if(a[i]=='\0'&&b[i]=='\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
//设置一个函数用来传递信息
void showMenu(struct Student*p)
{
    printf("\n====个人信息菜单====\n");
    printf("1.姓名：%s\n",(*p).name);
    printf("2.学号:%s\n",(*p).id);
    printf("3.性别：%s\n",(*p).gender);
    printf("4.身高：%lf\n",(*p).high);
    printf("5.退出登录\n");
};
int main()
{
//定义正确的用户名密码
char*rightUsername="ch";
char*rightpassword="11314";
int flag=0;
for(int i=1;i<=5;i++)
{
    printf("请输入用户名:\n");
    char username[100];
    scanf("%s",username);
    printf("请输入密码:\n");
    char password[100];
    scanf("%s",password);
if(judge(username,rightUsername)==1&&judge(password,rightpassword)==1)
{
printf("登录成功\n");
flag=1;
break;
}
else
{
    if(i==5)
    {
        printf("哼，渣男，骗子");
        goto a;
    }
    else
    {
        printf("用户名或密码输入错误，还有%d次机会",5-i);
    }
}
}
struct Student stu={0};
int select;
while(1)
{
showMenu(&stu);
printf("请输入你的选择:");
scanf("%d",&select);
if(select==1)
{
    printf("输入新的姓名:");
    scanf(" %s",stu.name);
}
else if(select==2)
{
printf("输入新的学号:");
    scanf(" %s",stu.id);

}
else if(select==3)
{
    printf("输入新的性别(N表示男生,M表示女生):");
    scanf(" %s",stu.gender);
}
else if(select==4)
{
    printf("输入新的身高:");
    scanf(" %lf",&stu.high);
}
else if(select==5)
{
    printf("已退出运行\n");
    break;
}
}
a:
return 0;
}
