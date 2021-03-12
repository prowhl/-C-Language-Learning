
/*编写代码实现模拟用户登录情景，并且只能登陆三次。
（只允许输入三次密码，如果密码正确则提示登录成功，反之，则退出程序。）*/

#include <stdio.h>
#include <string.h>
int main()
{
	
  int i = 1;
  char password[20] = {0};
  for(i=0;i<3;i++)
  {
			
      printf("请输入密码：>");
      scanf("%s",password);
      
      //if(password == "123456")  
      //==不能用来比较两个字符串是否相等，应该使用一个库函数——strcmp
      
      if(strcmp(password,"12345")==0)
      	{
						
            printf("登陆成功\n");
            break;
        }
  }
  if(i == 3)
      printf("三次密码均错误，退出程序\n");
      return 0;
      
 }

 /*
 头文件：#include <string.h>

strcmp() 用来比较字符串（区分大小写），其原型为：
    int strcmp(const char *s1, const char *s2);

【参数】s1, s2 为需要比较的两个字符串。

字符串大小的比较是以ASCII 码表上的顺序来决定，此顺序亦为字符的值。strcmp()首先将s1 第一个字符值减去s2 第一个字符值，若差值为0 则再继续比较下个字符，若差值不为0 则将差值返回。例如字符串"Ac"和"ba"比较则会返回字符"A"(65)和'b'(98)的差值(－33)。

【返回值】若参数s1 和s2 字符串相同则返回0。s1 若大于s2 则返回大于0 的值。s1 若小于s2 则返回小于0 的值。

注意：strcmp() 以二进制的方式进行比较，不会考虑多字节或宽字节字符；如果考虑到本地化的需求，请使用 strcoll() 函数
*/
