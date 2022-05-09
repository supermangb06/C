#include<stdio.h>
#include<string.h>
int main(){

int i = 0;
int counter1[] = {0, 0, 0, 0};
int counter2[] = {0, 0, 0, 0};
int flag = 0;

char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd"; 

//This loop will check through all the letters in s1 string, the if statements will identify which letters
//are present and add them into the above array counters. each of the four 0's represents a, b, c, d.
for (i = 0; i < strlen(s1); i++){

    if(s1[i] == 'a'){
        counter1[0]++;}
    if(s1[i] == 'b'){
        counter1[1]++;}
    if(s1[i] == 'c'){
        counter1[2]++;}
    if(s1[i] == 'd'){
        counter1[3]++;}
    }
for (i=0; i < strlen(s2); i++){
    if(s2[i] == 'a'){
        counter2[0]++;
    if(s2[i] == 'b'){
        counter2[1]++;
    if(s2[i] == 'c'){
        counter2[2]++;
    if(s2[i] == 'd'){
        counter2[3]++;
}
}
}
}
}
for (int b = 1; b < sizeof(counter1) / sizeof(int); b++){
        if (counter1[b] != counter2[b]) {
            flag = 1;
            break;
        }
}
if (flag == 1){
    printf("Not Anagram!");
}
else {
    printf("Anagram!");
}
}
           