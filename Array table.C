#include<stdio.h>
#include<conio.h>
int main()
{
 char stud[15][21],sub[10][20];
 int marks[15][10],sum[10][10],per[10][10];
 int ns,i,j,k,nsu,total;

 puts("Enter number of studets:");
 scanf("%d",&ns);

 printf("Enter name of %d students:",ns);
 for(i=0;i<ns;i++)
	scanf("%s",&stud[i]);

// printf("Given names are:\n");
// for(i=0;i<ns;i++)
//	printf(" %s\n",stud[i]);

 printf("Enter number of subjects:");
 scanf("%d",&nsu);

 printf("Enter the name of subjects:");
 for(i=0;i<nsu;i++)
	scanf("%s",sub[i]);

// printf("Subjects are:\n");
// for(i=0;i<nsu;i++)
//	printf(" %s\n",sub[i]);

 // scaning total marks
 printf("Enter total marks of subject : ");
 scanf("%d",&total);

 //scaning marks for each sub og each stu
 for(i=0;i<nsu;i++){
	for(j=0;j<ns;j++){
		printf("Enter %s's marks of %s out of %d : ",stud[j],sub[i],total);
		scanf("%d",&marks[j][i]);
	}
 }

 // adding to get sum
 for(i=0;i<ns;i++)
	for(j=0;j<nsu;j++)
		sum[i][0] = sum[i][0]+ marks[i][j];


/* printf("sum of all marks: \n");
 for(i=0;i<ns;i++)
	printf("%d\n",sum[i][i]);
*/

 // printing tabular form
 printf("Tablular form of given data is :\n\n");
 for(i=0;i<ns;i++)
	printf("\t%s\t",stud[i]);
 for(i=0;i<nsu;i++){
	printf("\n%s",sub[i]);
	for(j=0;j<ns;j++){
		printf("\t%d\t",marks[j][i]);
	}
	printf("\n");
 }
 // drawing ---
 printf("");
 for(i=0;i<ns;i++)
	printf("\t---\t");

 //printing sum
 printf("\nSum:");
 for(i=0;i<ns;i++)
	printf("\t%d\t",sum[i][0]);

 //counting average
 for(i=0;i<ns;i++){
	per[i][0]=sum[i][0]/nsu;
 }


 //printing average
 printf("\nPercent: ");
 for(i=0;i<ns;i++)
	printf("%d\t\t",per[i][0]);




 //printf("Please enter any integer to exit.");
 return 0;
}