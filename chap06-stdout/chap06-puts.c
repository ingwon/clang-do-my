/*
* Cǥ�� ���̺귯���� ǥ�� ����Լ�
*----------------------------------------
puts(char const* _Buffer);
const : constant(�����, �Һ�)
variable : ����
*/
#include <stdio.h>

#define TITLE "Cǥ�� ���̺귯���� ǥ�� ����Լ�(puts)"

/*
* putx(char const* str)
* str : ����ϰ��� �ϴ� ���ڿ�
* return : ����
* ------------------------------
* puts(char const* _Buffer)�� �ǹ̰� �������� Ȯ��
*/
void putx(char const* str)
{
    puts(str);

    // const�� �Һ��̹Ƿ� �ٲ� ���� ����.
    // str[0] = 'X';

    putchar(str[0]);
    putchar(str[1]);
    putchar(str[2]);
    putchar(str[3]);
    putchar(str[4]);
    putchar('\n');
}

void putv(char* str)
{
    puts(str);
    str[0] = 'X';
    putchar(str[0]);
    putchar(str[1]);
    putchar(str[2]);
    putchar(str[3]);
    putchar(str[4]);
    putchar(str[5]);
    putchar(str[6]);
    putchar('\n');
}

/*
* main()
*/
void main()
{
    char* first = "first";
    // char first[] = "first";
    char second[] = "second";

    printf("%s\n", TITLE);
    putx(first);

    // second ���� �����
    putv(second);
    puts(second); 
}

