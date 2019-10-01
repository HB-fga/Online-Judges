#include <stdio.h>

int main() {
	
	int n, tm=0, tl=0, mcombo=0, lcombo=0, k=0;
	int m[15];
	int l[15];
	
	while(1)
	{
		scanf("%d", &n);
		if(n==0){break;}
		
		for(int i=0;i<n;i++)
		{
			scanf("%d", &m[i]);
			tm+=m[i];
		}
		
		for(int i=0;i<n;i++)
		{
			scanf("%d", &l[i]);
			tl+=l[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if((i>0) && (m[i-1]==m[i]) && (k==0))
			{
				mcombo++;
			}
			else
			{
				mcombo=0;
			}
			
			if((i>0) && (l[i-1]==l[i]) && (k==0))
			{
				lcombo++;
			}
			else
			{
				lcombo=0;
			}
			
			if((mcombo==2) && (lcombo==2))
			{
				mcombo=0;
				lcombo=0;
				k=1;
			}
			else if(mcombo==2)
			{
				mcombo=0;
				k=1;
				tm+=30;
			}
			else if(lcombo==2)
			{
				lcombo=0;
				k=1;
				tl+=30;
			}
		}
		
		if(tm>tl)
		{
			printf("M\n");
		}
		else if(tl>tm)
		{
			printf("L\n");
		}
		else
		{
			printf("T\n");
		}
		
		k=0;
		mcombo=0;
		lcombo=0;
		tm=0;
		tl=0;
		
	}
	
	return 0;
}
