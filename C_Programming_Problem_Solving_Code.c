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
