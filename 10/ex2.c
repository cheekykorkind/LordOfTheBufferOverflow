// gcc -o ex2 ex2.c -static

int main()
{
    int i;
    char str[20] = "hackerschool!";

    printf("%s\n", &str);

    printf("===============HEX DUMP START===============\n");

    printf("0x%08x \n", &str);

    for (i = 0; i < sizeof(str); i++) {
        printf("0x%02x ", str[i]);
    }

    printf("\n===============HEX DUMP END===============\n");
}