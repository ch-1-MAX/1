#include<stdio.h>
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
void showMenu()
{
    printf("\n===菜单===\n");
    printf("1.我要好好学习\n");
    printf("2.我要女朋友(男朋友)\n");
    printf("3.我要变有钱\n");
    printf("4.我要变成技术大佬\n");
};
void fun1()
{
    int a;
    int n;
    int m;
    printf("请输入一个正整数:\n");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("Care for mentally retarded children,we stay together.");
return;
    }
    else{
        for(int n=1;n<=a;n++)
        {
            for(m=1;m<=n;m++)
            {
                printf("%d*%d=%d\t",m,n,m*n);
            }
            printf("\n");
        }
    }
}
void fun2()
{
    printf("吾日三省吾身，高否，帅否，富否，否，滚去学习\n");
    fun1();
};
void fun3()
{
    char opt;
    printf("以后有钱想干什么：\nA.找女朋友  B.买同济版高等数学好好学习\n");
    getchar();//回车空格
    scanf("%c",&opt);
    if(opt=='A')
    {
        fun2();
    }
    else if(opt=='B')
    {
        fun1();
    }

};
void fun4()
{
char opt;
printf("你为什么学技术\n");
printf("A:为了变有钱\nB:因为我热爱学习\n");
getchar();
scanf("%c",&opt);
if(opt=='A')
{
    fun2();
}
else if(opt=='B')
{

    int a;
    int n;
    int m;
    printf("请输入一个正整数:\n");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("Care for mentally retarded children,we stay together.You are such a sweet little fool.");
return;
    }
    else{
        for(int n=1;n<=a;n++)
        {
            for(m=1;m<=n;m++)
            {
                printf("%d*%d=%d\t",m,n,m*n);
            }
        }
    }
}



}



int main()
{
//设置正确密码
 char*rightpassword="11314";
int flag=0;
for(int i=1;i<=3;i++)
{
    printf("请输入密码:\n");
    char password[100];
    scanf("%s",password);
if(judge(password,rightpassword)==1)
{
printf("登录成功\n");
flag=1;
break;
}
else
{
    if(i==3)
    {
        printf("you are a bad girl");
        return 0;
    }
    else
    {
        printf("用户名或密码输入错误，还有%d次机会,请重新输入",3-i);
    }
}
}
while(1)
{
showMenu();
int select;
printf("请输入选择的菜单：\n");
scanf("%d",&select);
switch(select)
{
    case 1:
 fun1();
    break;
    case 2:
fun2();
    break;
    case 3:
fun3();
    break;
    case 4:
    fun4();
    case 5:
    printf("退出运行\n");
    break;
}
    if(select==5)
    {
        break;
    }
}


    return 0;
}
