// gcc -o real_quiz_address_cal real_quiz_address_cal.c -static
#define NULL 0

int main()
{
    int auth = 0;
    char passwd[20];
    int *authPtr = &auth;
    char *passwdPtr = &passwd;

    printf("auth memory address : 0x%x\n", authPtr);
    printf("passwd memory address : 0x%x\n", passwdPtr);
    printf("sub address : %d\n", (int) authPtr - (int) passwdPtr);
}