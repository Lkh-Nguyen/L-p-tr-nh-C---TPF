#include <stdio.h>
#include <math.h>

int main()
{
    int day, month, year, day1, month1, year1;
    printf("Nhap vao ngay: "); 
    scanf(%d, &day);
    printf(Nhap vao thang ); 
    scanf(%d, &month);
    printf(Nhap vao nam ); 
    scanf(%d, &year);
    day1 = day;
    month1=month;
    year1=year;
    switch (month)
	{
	case 1  case 3  case 5  case 7  case 8  case 10  case 12  
		if(day == 31)
		{
			day = 1;
			if( month == 12)
			{
				 month = 1;year++;
			}
			else
				month++;
		}
		else
		{
			if( day  31)
				day++;
		}
		printf(Ngay mai %d%d%dn,day,month,year);
		; break;
	case 4  case 6  case 9  case 11 
			if(day == 30)
		{
			day = 1;
			month++;
		}
		else
		{
			if( day  30)
				day++;
			else
				if( day 30)
					printf(nhap sai);
					break;
		}
		printf(Ngay mai %d%d%dn,day,month,year);
			; break;
	case 2 
		if (year %4 == 0)
		{
			if(day == 29)
				{
					day = 1;
					month++;
				}
				else
				{
					if( day  29)
						day++;
					else
						if( day 29)
							printf(nhap sai);
							break;
				}
		}
		else
		{
			if(day == 28)
				{
					day = 1;
					month++;
				}
				else
				{
					if(day  28)
						day++;
					else
						if( day 28)
							printf(nhap sai);
							break;
				}
		}
		printf(Ngay mai %d%d%dn,day,month,year);
		break;
	}

    if(day1==1)
    {
        switch(month1-1)
        {
            case 4
            case 6
            case 9
            case 11
                day1=30;
                break;
            case 2
                if((year1%4==0 && year1%100)  (year1%400==0)){
                day1=29;
                } else
                day1 =28;
                break;
            default
                day1=31;
        }
        if(month1==1)
        {
            month1=12;
            year1--;
        }
        else
        {
            month1--;
        }
    }
    else
    {
        day1--;
    }
printf(Hom qua %d%d%d,day1,month1,year1);
    return 0;
}
