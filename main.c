
#include <stdio.h>
int main(){
int const N=20;
 int f1=1;
 int f2=1;
 int temp=0;
int v1[N];
double v2[N-1];
double v3[N-1];
v1[0]=f1;
v1[1]=f2;
for (int i=2; i<N; i++){
  temp=f2;
  f2=f1+f2;
  f1=temp;
  v1[i]=f2;
}
for (int i=0;i<N-1;i++){
v2[i]= (double)v1[i+1]/v1[i];
}
for (int i=0;i<N-1;i++){
v3[i]= (double)v2[i+1]-v2[i];
}
for (int i=0;i<N;i++){
printf("v1[%d]-%d\n",i,v1[i]);
}
for (int i=0;i<N;i++){
printf("v2[%d]-%lf\n",i,v2[i]);
}
for (int i=0;i<N;i++){
printf("v3[%d]-%lf\n",i,v3[i]);
}
return 0;
}
