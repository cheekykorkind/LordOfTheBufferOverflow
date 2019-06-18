// gcc -o real_quiz real_quiz.c -static
#define NULL 0

int main()
{
	int auth = 0;
    char passwd[20];

    printf("Enter password : ");

    gets(passwd);
    if (strcmp(passwd, "RealPassword") == 0)
        auth = 1;
    
    if (auth) {
        printf("Congrats!!\n");
    } else {
        printf("Fail!!!!!!!\n");
    }
}