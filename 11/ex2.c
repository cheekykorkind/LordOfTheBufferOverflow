// gcc -o ex2 ex2.c -static

int main()
{
    int i;
    int integer = 10;
    unsigned char *integerAddress = (unsigned char *)&integer;

    printf("integer decimal value : %d\n", integer);

    printf("===============HEX DUMP START===============\n");

    printf("0x%08x  ", &integerAddress);

    for (i = 0; i < sizeof(integer); i++) {
        printf("0x%02x ", *(integerAddress + i) );
    }

    printf("\n===============HEX DUMP END===============\n");
}