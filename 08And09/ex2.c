// gcc -o ex2 ex2.c -static
int get_area (int x, int y)
{
    int area;

    printf("address of x : 0x%x\n", &x);
    printf("address of y : 0x%x\n", &y);
    printf("address of area in get_area function : 0x%x\n", &area);

    area = x * y;

    return area;
}

int main()
{
    int x = 10, y = 20;
    int area;

    printf("address of x : 0x%x\n", &x);
    printf("address of y : 0x%x\n", &y);
    printf("address of area : 0x%x\n", &area);

    area = get_area(x, y);
    printf("area of square : %d\n", area);
}