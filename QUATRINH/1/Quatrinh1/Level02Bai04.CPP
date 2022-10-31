#include<stdio.h>
void InPut(int &m, int &y);
int DayOfM(int mm, int yyyy);
int LeapYear(int yyyy);
void OutPut(int y);
int main()
{
	int mm, yyyy;
	InPut(mm,yyyy);
	int Result = DayOfM(mm,yyyy);
	OutPut(Result);
	return 0;
}
void InPut(int &m, int &y)
{
	do
	{
		printf("Vui long nhap thang: ");
		scanf("%d",&m);
		printf("vui long nhap nam: ");
		scanf("%d",&y);
		if((m<1)||(m>12)||(y<1)||(y>10000))
		{
			printf("Thang nam khong hop le, vui long nhap lai!\n");
		}
	}
	while((m<1)||(m>12)||(y<1)||(y>10000));
}
int LeapYear(int yyyy)
{
	return((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 400 == 0);
}
 
int DayOfM(int mm, int yyyy) 
{
    switch (mm)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (LeapYear(yyyy))
            return 29;
        else
            return 28;
    default:
        return 31;
    }
}
void OutPut(int y)
{
	printf("so ngay trong thang la: %d",y);
}

