#include <stdio.h>
int main()
{ int a[10][10],i,j;
  long int sum=0;
  printf("Input elements in the matrix: ");
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    { printf("element[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nThe matrix is :\n");
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)
    { printf("%d",a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<3;i++)
  { sum+=a[i][i];
  }
  printf("\nThe sum of the diagonal = %ld",sum);
  return 0;
}
