#include<stdio.h>
void substring(char[] arr,char[] sub){
int i;
int count =0;
char temp = sub[0];
for(i=0;arr[i];i++){
if(temp==arr[i]){
break;
}
}
for(int j=0;sub[j];j++){
if(sub[j]==arr[i])
count++;
}
if(count==3)
{
printf("yes");
}
else{
printf("no");
}
}
int main(){
char[] sub;
char[] arr;
scanf("%s",arr);
scanf("%s",sub);
substring(arr,sub);
return 0;}
