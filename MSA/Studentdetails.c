/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    
    int x=2;
     printf("enter choice:");
     scanf("%d",&x);
    switch(x)
    {
        case 1: 
              printf(" Details has been submitted");
                break;
        default: printf("add");
    
	int n,i;
	char Name[20],Branch[20];
	int Age[20],Year[20],Semester[20],Prevscore[20];
	printf("\n enter number of students:");
	printf("\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	printf("\n enter name of the student:  ");

	scanf("%s",Name[20]);
	
	printf("\n enter age of the student:");
		
	scanf("%d",&Age[20]);
		
	printf("\nenter student branch");
		
	scanf("%s",&Branch[20]);
		
	printf("\nenter students year of studying");
		
	scanf("%d",&Year[20]);
		
	printf("\nenter student present semester");
	
	scanf("%d",&Semester[20]);
	
	printf("\nenter students previous score");
		
	scanf("%d",&Prevscore[20]);
	printf("Student details");
	
		break;
    }
    for(i=0;i<n;i++)
    {
        if(Prevscore[20]>70)
        {
            printf("student is selected");
        }
        else
        {
            printf("rejected");
        }
    }
        
    }
	}
