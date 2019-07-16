#include<stdio.h>
int main(){
char t;
if(t==('a'||'A'||'e'||'E'||'i'||'I'||'O'||'o'||'u'||'U')){

printf("Vowel");
}
else
{
if(t>=(65||97)&&t<=(90||122)){
printf("Consonant");
}
else{
printf("Invalid");
}
}


return 0;
}
