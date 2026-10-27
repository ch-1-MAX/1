#include<stdio.h>
#include<stdlib.h>
struct  Student
{
    char name[100];
    char id[100];
    char gender[100];
    double hight;
};
int judge(char*a,char *b)
{
    int i=0;
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
        i++;
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
void showMenu(struct Student*p)
{
    printf("\n====个人信息菜单====\n");
    printf("1.姓名：%s\n",p->name);
    printf("2.学号:%s\n",p->id);
    printf("3.性别：%s\n",p->gender);
    printf("4.身高：%ld\n",p->hight);
    priintf("5.退出登录\n");
}
int main()
{
//定义正确的用户名密码
char*rightUsername="ch";
char*rightpassword="11314";
for(int i=1;i<=5;i++)
{
    printf("请输入用户名:\n");
    char username[100];
    scanf("%s",username);
    printf("请输入密码:\n");
    char password[100];
    scanf("%s",password);
if(!strcmp(username,rightUsername)&&!strcmp(password,rightpassword))
{
printf("登录成功\n");
return 0;
}
else
{
    if(i==5)
    {
        printf("哼，渣男，骗子");
    }
    else
    {
        printf("用户名或密码输入错误，还有%d次机会",5-i);
    }
}
//信息初始化























return 0;
}