#include<stdio.h>
int main(){
char arr[];
scanf("%[^\n]",arr);
if((arr[0]>64)&&(arr[0]<91)){

}
else{
printf("no");
return -1;
}
for(int i=1;str[i];i++){
if(arr[i]==' ')
{
if((arr[++i]>64)&&(arr[++i]<91)){

}
else{
printf("no");
return -1;
}
}
}
printf("yes");

return 0;
}
