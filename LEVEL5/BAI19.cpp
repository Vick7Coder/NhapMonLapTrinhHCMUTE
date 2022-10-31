#include<stdio.h>
#include<math.h>
void InPut(int &d, int &m, int &y);
int LeapYear(int yyyy);
int DayOfM(int mm, int yyyy);
int STTofY(int d, int m, int y);
int DayOfY(int d, int m, int y);
int Howday(int y);
int KhoangCach(int d1, int m1, int y1, int d2, int m2, int y2);
void OutPut(int n);
int main()
{
	int d1,m1,y1,d2,m2,y2;
	InPut(d1,m1,y1);
	InPut(d2,m2,y2);
	int Rs = KhoangCach(d1,m1,y1,d2,m2,y2);
	OutPut(Rs);
	return 0;
}
void InPut(int &d, int &m, int &y)
{
	do
	{
		printf("vui long nhap ngay: ");
		scanf("%d",&d);
		printf("vui long nhap thang: ");
		scanf("%d",&m);
		printf("vui long nhap nam: ");
		scanf("%d",&y);
		if((d<1)||(d>DayOfM(m,y))||(m<1)||(m>12)||(y<1)||(y>10000))
		   printf("ngay thang nam khong hop le\n");
	}
	while((d<1)||(d>DayOfM(m,y))||(m<1)||(m>12)||(y<1)||(y>10000));
}
int LeapYear(int yyyy)
{
	if((yyyy % 4 == 0 && yyyy % 100 != 0) || yyyy % 400 == 0)
	   return 1;
	return 0;
} 
int DayOfM(int mm, int yyyy) 
{
    switch (mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (LeapYear(yyyy)==1)
            return 29;
        else
            return 28;
    default:
        return 31;
    }
}
int STTofY(int d, int m, int y)
{
	int s = d;
	for(int i=1;i<m;i++)
	{
		s = s+DayOfM(i,y);
	}
	return s;
}
int DayOfY(int d, int m, int y)
{
	int s = STTofY(d,m,y);
	for(int i=1;i<y;i++)
	{
		if (LeapYear(i)==1)
		   s+=366;
		else 
		   s+=365;
	}
	return s;
}
int KhoangCach(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int s1=DayOfY(d1,m1,y1);
	int s2=DayOfY(d2,m2,y2);
	return abs(s2-s1);
}
void OutPut(int n)
{
	printf("Khoang cach giua 2 ngay la: %d",n);
}
