#include "iostream"
using namespace std;
struct good{
	char number;
	int weight;
	int value;
	double a;
	void geta();
};
void good::geta(){a=value/weight;}
void main()
{
	good a[7];
	int i,j;
	for(i=0;i<7;i++)
	{
		printf("请输入第%d个物品的编号，重量，价值",i+1);
		cin>>a[i].number>>a[i].weight>>a[i].value;
	}
	for(i=0;i<7;i++)
	 a[i].geta();
	for (i=0;i<7;i++)
		{
			double max=a[i].a;
			int index=i;
			for(j=i+1;j<7;j++)
			{
				if(a[j].a>a[i].a)
				{max=a[j].a;index=j;}
			}
			if(max!=a[i].a)
				
			{good c;
			c=a[i];
			a[i]=a[j];
			a[j]=c;
			}
	}
	for(i=0;i<7;i++)
		printf("%c",a[i].number);
	int cout=0,n=0;i=0;
	do
	{
		printf("第%d个装入的物品是：%c",i+1,a[i].number);
		cout+=a[i].weight;
		i=i+1;
		n++;
	}while(cout<=150);
	cout=150-cout;
	printf("第%d个物品是%c装入了%f",n+1,a[n].number,cout/(a[n].weight*1.0));

}


	








	