#include<iostream>
#define orin 1900
using namespace std;
int leapYear(int y)
{
	if(y%4==0&&y%100!=0||y%400==0)
		return 1;
	else return 0;
}
int theDay(int y,int m,int d){
	int i, out;
	long sum_day;
	for(i=orin;i<y;i++)
	{
		if(leapYear(i))
			sum_day+=366;
		else
			sum_day+=365;
	}
	if(m==1){
		sum_day+=d;
	}
	else{
	switch(m-1){
            case 11:
                if(leapYear(y))
				sum_day+=335;
                else sum_day+=334;
            case 10:
                if(leapYear(y))
				sum_day+=305;
                else sum_day+=304;
            case 9:
                if(leapYear(y))
				sum_day+=274;
                else sum_day+=273;
            case 8:
                if(leapYear(y))
				sum_day+=244;
                else sum_day+=243;
            case 7:
                if(leapYear(y))
				sum_day+=213;
                else sum_day+=212;
            case 6:
                if(leapYear(y))
				sum_day+=182;
                else sum_day+=181;
            case 5:
                if(leapYear(y))
				sum_day+=152;
                else sum_day+=151;
            case 4:
                if(leapYear(y))
				sum_day+=121;
                else sum_day+=120;
            case 3:
                if(leapYear(y))
				sum_day+=91;
                else sum_day+=90;
            case 2:
                if(leapYear(y))
				sum_day+=60;
                else sum_day+=59;
            case 1:
                sum_day+=31;
                break;
        }
        sum_day+=d;
    }
    out=sum_day%7;
    if(out==0) out=7;
    return out;
}
int main()
{
	int year, month, day, sum_day, result;
	char ch;
	cin>>year>>ch>>month>>ch>>day;
	result = theDay(year,month,day);
	switch(result){
		case 7:
			cout<<"Sunday";
		case 6:
			cout<<"Saturday";
		case 5:
			cout<<"Friday";
		case 4:
			cout<<"Thursday";
		case 3:
			cout<<"Wednesday";
		case 2:
			cout<<"Tuesday";
		case 1:
			cout<<"Monday";
			break;
	}
	return 0;
}
