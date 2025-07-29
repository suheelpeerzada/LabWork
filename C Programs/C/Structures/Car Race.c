#include<stdio.h>
main()
{
	int i, n;
	printf("Enter the number of cars;\n");
	scanf("%d",&n);
	struct time
	{
		int hour, min, sec;
	};
	struct ref
	{
		int carno;
		struct time st;
		struct time rt;
	};
	struct ref race[3];
	for(i=0;i<n;i++)
	{
	printf("Enter Car number:\t");
	scanf("%d", &race[i].carno);
	printf("Enter start time (HH/MM/SS):\t");
	scanf("%d%d%d", &race[i].st.hour, &race[i].st.min, &race[i].st.sec);
	printf("Enter return time (HH/MM/SS):\t");
	scanf("%d%d%d", &race[i].rt.hour, &race[i].rt.min, &race[i].rt.sec);
    }
    for(i=0;i<n;i++)
    {
    printf("\n\t Car no\t Start Time\t Return Time\n");
	printf("\t %d\t %d\t %d\n", race[i].carno, race[i].st, race[i].rt);
	}
}
