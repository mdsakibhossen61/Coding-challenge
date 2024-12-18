 Assignment 01
Code NO: 1
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int result = x+y+z;
    printf("%d\n",result);
    return 0;
}

  Code NO: 2
    #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long a,b;
    scanf("%lld %lld",&a,&b);
    long long result = a * b;
    printf("%lld\n",result);
    return 0;
}
Code NO: 3
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int m;
    scanf("%d", &m);
    if (m >= 1000)
    {
        printf("Three Kacchi\n");
    }
    else if (m >= 500 && m < 1000)
    {
        printf("One Large Pizza\n");
    }
    else if (m >= 250 && m < 500)
    {
        printf("Three Small Burger\n");
    }
    else if (m >= 100 && m < 250)
    {
        printf("Three Fuchka\n");
    }
    else
    {
        printf("Nothing\n");
    }

     
    return 0;
}
Code NO: 4
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m;
    scanf("%d",&m);
    if (m % 3 == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}
Code NO: 5
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   scanf("%d",&n);
   for (int i = 1; i <= n; i++)
   {
    if (i % 3 == 0 || i % 5 == 0)
    {
        printf("%d Yes\n",i);
    }
    else
    {
        printf("%d No\n",i);
    }
    
   }
   
    return 0;
}
Assignment 02 
Code NO: 1
 #include <stdio.h>
int main(){
   char ch;
   scanf("%c", &ch);
  if (ch >= 'a' && ch <= 'z')
  {
   if (ch == 'a')
   {
      printf("Vowel\n");
   }
  else if (ch == 'e')
   {
      printf("Vowel\n");
   }
   else if (ch == 'i')
   {
      printf("Vowel\n");
   }
   else if (ch == 'o')
   {
      printf("Vowel\n");
   }
   else if (ch == 'u')
   {
      printf("Vowel\n");
  }
  else{
   printf("Consonant\n");
  }
  }
   return 0;
}
Code NO: 2
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int count_0 = 0;
  int count_1 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      count_0++;
    }
    else if (a[i] == 1)
    {
      count_1++;
    }
  }
  printf("%d %d\n", count_0, count_1);    
    return 0;
}
Code NO: 3
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int x;
  scanf("%d",&x);
  a[x-1] = 1;
  for (int i = 0; i < n; i++)
  {
   printf("%d ",a[i]);
    
  }
    return 0;
}
Code NO: 4
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 1; j <= n - i; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  } 
    return 0;
}
Code NO: 5
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
# include <limits.h>
int main() {

    int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", max - a[i]);
  }
    return 0;
}
Mid Term EXAM:
Code NO: 1
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int n,k;
  scanf("%d %d",&n,&k);
  for (int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= k; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }   
    return 0;
}
Code NO: 2
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n, t;
  scanf("%d %d", &n, &t);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int sumation = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    sumation += a[i];
    if (sumation <= t)
    {
      count++;
    }
  }
  printf("%d\n", count);

    return 0;
}
Code NO: 3
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n, x, y;
  scanf("%d %d %d", &n, &x, &y);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] <= y && a[i] >= x)
    {
      count++;
    }
  }
  printf("%d\n", count);   
    return 0;
}
Code NO: 4
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] <= 1)
    {
      printf("Entry-level candidate\n");
    }
    else if (a[i] <= 3)
    {
      printf("Junior candidate\n");
    }
    else if (a[i] <= 7)
    {
      printf("Mid-level candidate\n");
    }
    else if (a[i] > 7)
    {
      printf("Senior candidate\n");
    }
  }
   
    return 0;
}
Code NO: 5
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char s1[1001];
  scanf("%s",s1);
  char s2[1001];
  scanf("%s",s2);
  char s3[1001];
  scanf("%s",s3);

  char min[1001];
  strcpy(min, s1);

if (strcmp(s2, min) < 0)
{
  strcpy(min, s2);
}
if (strcmp(s3, min) < 0)
{
  strcpy(min, s3);
}
printf("%s\n", min);

char max[1001];
strcpy(max, s1);

if (strcmp(s2, max) > 0)
{
  strcpy(max, s2);
}
if (strcmp(s3, max) > 0)
{
  strcpy(max, s3);
}
printf("%s\n",max);  
    return 0;
}
Assignment 03
Code NO: 1
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
  scanf("%d", &n);
  int a[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  int flag = 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        if (a[i][j] != 1)
        {
          flag = 0;
          break;
        }
      }
      else
      {
        if (a[i][j] != 0)
        {
          flag = 0;
          break;
        }
      }
    }
    if (flag == 0)
    {
      break;
    }
  }
  if (flag == 1)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
    
    return 0;
}
Code NO: 2
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, m, x;
  scanf("%d %d %d", &n, &m, &x);
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < x; i++)
  {
    int number, count = 0;
    scanf("%d", &number);
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < m; k++)
      {
        if (a[j][k] == number)
        {
          count++;
        }
      }
    }
    printf("%d\n", count);
  }
    return 0;
}
Code NO: 3
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       int n;
  scanf("%d", &n);
  int a[n];
  int f[100001];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    f[a[i]] += 1;
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (f[a[i]] == 1)
    {
      count++;
    }
  }
  printf("%d\n", count);
    return 0;
}
Code NO: 4
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
  scanf("%d", &n);
  long long *a = (long long *)malloc(n * sizeof(long long));
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%lld ", a[i]);
  }
  printf("\n");
    return 0;
}
Code NO: 5
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a,b;
  scanf("%d %d",&a,&b);
  int *p = &a;
  int *q = &b;
  int defarence = abs(*p - *q);
  printf("%d\n", defarence);
    return 0;
}
Final Exam 
Code NO: 1
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        for (int j = n - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
Code NO: 2
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == n - 1)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }  
    return 0;
}
Code NO: 3
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int temp;
    int colum = m - 1;
    for (int i = 0; i < n; i++)
    {
        temp = a[i][0];
        a[i][0] = a[i][colum];
        a[i][colum] = temp;
    }
    int row = n - 1;
    for (int j = 0; j < m; j++)
    {
        temp = a[0][j];
        a[0][j] = a[row][j];
        a[row][j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
Code NO: 4
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
char a[101], b[101], c[101];
    
    scanf("%s %s %s", a, b, c);
    
    int len = strlen(a);
    
    int operation = 0;
    
    for (int i = 0; i < len; i++)
    {
        if (a[i] != b[i] && b[i] != c[i] && a[i] != c[i])
        {
            operation += 2;
        }
        else if (a[i] != b[i] || b[i] != c[i] || a[i] != c[i])
        {

            operation += 1;
        }
    }
    printf("%d\n", operation);

       
    return 0;
}
Code NO: 5
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long m, a, b, c;

        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long product = a * b * c;

        if (m % product == 0)
        {
            long long result = m / product;
            
            printf("%lld\n", result);
        }
        else
        {
            printf("-1\n");
        }
    }
       
    return 0;
}


