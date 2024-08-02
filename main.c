#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
/// vadric function
int sum(int count, ...) {
    va_list args;
    int total = 0;


    va_start(args, count);


    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }


    va_end(args);

    return total;
}

int min(int count,...) {
    va_list ptr;
    va_start(ptr, count);
    int max=va_arg(ptr,int );

    for(int i=0;i<count;i++)
    {
        int temp = va_arg(ptr,int);
        max = temp<max ? temp : max;
    }
    return max;
}

int max(int count,...) {
va_list ptr;
    va_start(ptr, count);
    int min=va_arg(ptr,int );

    for(int i=0;i<count;i++)
    {
        int temp = va_arg(ptr,int );
        min = temp>min ? temp : min;
    }
    return min;
}


/// patterns  triangles
int main() {

int n,start,end,size,i,j;
scanf("%d", &n);

start=0;
size = (2*n)-1;
end=size-1;
int a[size][size];

while (n!=0) {
    for (i=start; i<=end; i++) {
    for (j=start; j<=end; j++) {

        if(i==start || j==start || i==end || j==end)
            a[i][j]=n;
    }
    }

    start++;
    end--;
    n--;
}
for (i=0; i<size; i++) {
for (j=0; j<size; j++) {
    printf("%d\t",a[i][j]);
}
printf("\n");
}

return 0;
}

/// strings

int next_permutation(int n, char **s)
{
    int k=-1;
    for(int i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1])<0)
            k=i;
    }


    if (k==-1)
    return 0;

    int l=-1;
    for(int i=k+1;i<n;i++)
    {
        if(strcmp(s[k],s[i])<0)
            l=i;
    }



    if(l!=-1)
    {
        char* temp = s[k];
        s[k] = s[l];
        s[l] = temp;
    }


    int start=k+1;
    int end=n-1;
    while (start < end) {
      char*  temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }




    return 1;
}






/*
int main() {

int n,start,end,size,i,j;
scanf("%d", &n);

start=0;
size = (2*n)-1;
end=size-1;
int a[size][size];

while (n!=0) {
    for (i=start; i<=end; i++) {
    for (j=start; j<=end; j++) {

        if(i==start || j==start || i==end || j==end)
            a[i][j]=n;
    }
    }

    start++;
    end--;
    n--;
}
for (i=0; i<size; i++) {
for (j=0; j<size; j++) {
    printf("%d\t",a[i][j]);
}
printf("\n");
}

return 0;
}
*/
